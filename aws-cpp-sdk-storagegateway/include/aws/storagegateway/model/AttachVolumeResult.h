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
   * <p>AttachVolumeOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AttachVolumeOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API AttachVolumeResult
  {
  public:
    AttachVolumeResult();
    AttachVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AttachVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was attached to the
     * gateway.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was attached to the
     * gateway.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was attached to the
     * gateway.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was attached to the
     * gateway.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was attached to the
     * gateway.</p>
     */
    inline AttachVolumeResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was attached to the
     * gateway.</p>
     */
    inline AttachVolumeResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was attached to the
     * gateway.</p>
     */
    inline AttachVolumeResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the volume target, which includes the iSCSI
     * name for the initiator that was used to connect to the target.</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target, which includes the iSCSI
     * name for the initiator that was used to connect to the target.</p>
     */
    inline void SetTargetARN(const Aws::String& value) { m_targetARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target, which includes the iSCSI
     * name for the initiator that was used to connect to the target.</p>
     */
    inline void SetTargetARN(Aws::String&& value) { m_targetARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target, which includes the iSCSI
     * name for the initiator that was used to connect to the target.</p>
     */
    inline void SetTargetARN(const char* value) { m_targetARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target, which includes the iSCSI
     * name for the initiator that was used to connect to the target.</p>
     */
    inline AttachVolumeResult& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target, which includes the iSCSI
     * name for the initiator that was used to connect to the target.</p>
     */
    inline AttachVolumeResult& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target, which includes the iSCSI
     * name for the initiator that was used to connect to the target.</p>
     */
    inline AttachVolumeResult& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}

  private:

    Aws::String m_volumeARN;

    Aws::String m_targetARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
