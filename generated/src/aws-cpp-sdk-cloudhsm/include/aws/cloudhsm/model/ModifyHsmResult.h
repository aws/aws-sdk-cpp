/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the output of the <a>ModifyHsm</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHsmResponse">AWS
   * API Reference</a></p>
   */
  class ModifyHsmResult
  {
  public:
    AWS_CLOUDHSM_API ModifyHsmResult();
    AWS_CLOUDHSM_API ModifyHsmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API ModifyHsmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ModifyHsmResult& WithHsmArn(const Aws::String& value) { SetHsmArn(value); return *this;}

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline ModifyHsmResult& WithHsmArn(Aws::String&& value) { SetHsmArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the HSM.</p>
     */
    inline ModifyHsmResult& WithHsmArn(const char* value) { SetHsmArn(value); return *this;}

  private:

    Aws::String m_hsmArn;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
