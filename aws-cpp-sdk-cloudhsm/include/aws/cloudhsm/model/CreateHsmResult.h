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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
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
namespace CloudHSM
{
namespace Model
{
  /**
   * <p>Contains the output of the <code>CreateHsm</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHsmResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSM_API CreateHsmResult
  {
  public:
    CreateHsmResult();
    CreateHsmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateHsmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the HSM.</p>
     */
    inline const Aws::String& GetHsmArn() const{ return m_hsmArn; }

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline void SetHsmArn(const Aws::String& value) { m_hsmArn = value; }

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline void SetHsmArn(Aws::String&& value) { m_hsmArn = std::move(value); }

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline void SetHsmArn(const char* value) { m_hsmArn.assign(value); }

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline CreateHsmResult& WithHsmArn(const Aws::String& value) { SetHsmArn(value); return *this;}

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline CreateHsmResult& WithHsmArn(Aws::String&& value) { SetHsmArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline CreateHsmResult& WithHsmArn(const char* value) { SetHsmArn(value); return *this;}

  private:

    Aws::String m_hsmArn;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
