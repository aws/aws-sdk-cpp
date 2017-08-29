/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateChapCredentialsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API UpdateChapCredentialsResult
  {
  public:
    UpdateChapCredentialsResult();
    UpdateChapCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateChapCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the target. This is the same target
     * specified in the request.</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target. This is the same target
     * specified in the request.</p>
     */
    inline void SetTargetARN(const Aws::String& value) { m_targetARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target. This is the same target
     * specified in the request.</p>
     */
    inline void SetTargetARN(Aws::String&& value) { m_targetARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target. This is the same target
     * specified in the request.</p>
     */
    inline void SetTargetARN(const char* value) { m_targetARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target. This is the same target
     * specified in the request.</p>
     */
    inline UpdateChapCredentialsResult& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target. This is the same target
     * specified in the request.</p>
     */
    inline UpdateChapCredentialsResult& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target. This is the same target
     * specified in the request.</p>
     */
    inline UpdateChapCredentialsResult& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}


    /**
     * <p>The iSCSI initiator that connects to the target. This is the same initiator
     * name specified in the request.</p>
     */
    inline const Aws::String& GetInitiatorName() const{ return m_initiatorName; }

    /**
     * <p>The iSCSI initiator that connects to the target. This is the same initiator
     * name specified in the request.</p>
     */
    inline void SetInitiatorName(const Aws::String& value) { m_initiatorName = value; }

    /**
     * <p>The iSCSI initiator that connects to the target. This is the same initiator
     * name specified in the request.</p>
     */
    inline void SetInitiatorName(Aws::String&& value) { m_initiatorName = std::move(value); }

    /**
     * <p>The iSCSI initiator that connects to the target. This is the same initiator
     * name specified in the request.</p>
     */
    inline void SetInitiatorName(const char* value) { m_initiatorName.assign(value); }

    /**
     * <p>The iSCSI initiator that connects to the target. This is the same initiator
     * name specified in the request.</p>
     */
    inline UpdateChapCredentialsResult& WithInitiatorName(const Aws::String& value) { SetInitiatorName(value); return *this;}

    /**
     * <p>The iSCSI initiator that connects to the target. This is the same initiator
     * name specified in the request.</p>
     */
    inline UpdateChapCredentialsResult& WithInitiatorName(Aws::String&& value) { SetInitiatorName(std::move(value)); return *this;}

    /**
     * <p>The iSCSI initiator that connects to the target. This is the same initiator
     * name specified in the request.</p>
     */
    inline UpdateChapCredentialsResult& WithInitiatorName(const char* value) { SetInitiatorName(value); return *this;}

  private:

    Aws::String m_targetARN;

    Aws::String m_initiatorName;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
