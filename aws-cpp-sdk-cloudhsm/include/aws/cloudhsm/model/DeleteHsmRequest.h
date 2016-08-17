/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DeleteHsm</a> operation.</p>
   */
  class AWS_CLOUDHSM_API DeleteHsmRequest : public CloudHSMRequest
  {
  public:
    DeleteHsmRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline const Aws::String& GetHsmArn() const{ return m_hsmArn; }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline void SetHsmArn(const Aws::String& value) { m_hsmArnHasBeenSet = true; m_hsmArn = value; }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline void SetHsmArn(Aws::String&& value) { m_hsmArnHasBeenSet = true; m_hsmArn = value; }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline void SetHsmArn(const char* value) { m_hsmArnHasBeenSet = true; m_hsmArn.assign(value); }

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline DeleteHsmRequest& WithHsmArn(const Aws::String& value) { SetHsmArn(value); return *this;}

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline DeleteHsmRequest& WithHsmArn(Aws::String&& value) { SetHsmArn(value); return *this;}

    /**
     * <p>The ARN of the HSM to delete.</p>
     */
    inline DeleteHsmRequest& WithHsmArn(const char* value) { SetHsmArn(value); return *this;}

  private:
    Aws::String m_hsmArn;
    bool m_hsmArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
