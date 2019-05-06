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
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DescribeHsm</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHsmRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSM_API DescribeHsmRequest : public CloudHSMRequest
  {
  public:
    DescribeHsmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHsm"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the HSM. Either the <code>HsmArn</code> or the
     * <code>SerialNumber</code> parameter must be specified.</p>
     */
    inline const Aws::String& GetHsmArn() const{ return m_hsmArn; }

    /**
     * <p>The ARN of the HSM. Either the <code>HsmArn</code> or the
     * <code>SerialNumber</code> parameter must be specified.</p>
     */
    inline bool HsmArnHasBeenSet() const { return m_hsmArnHasBeenSet; }

    /**
     * <p>The ARN of the HSM. Either the <code>HsmArn</code> or the
     * <code>SerialNumber</code> parameter must be specified.</p>
     */
    inline void SetHsmArn(const Aws::String& value) { m_hsmArnHasBeenSet = true; m_hsmArn = value; }

    /**
     * <p>The ARN of the HSM. Either the <code>HsmArn</code> or the
     * <code>SerialNumber</code> parameter must be specified.</p>
     */
    inline void SetHsmArn(Aws::String&& value) { m_hsmArnHasBeenSet = true; m_hsmArn = std::move(value); }

    /**
     * <p>The ARN of the HSM. Either the <code>HsmArn</code> or the
     * <code>SerialNumber</code> parameter must be specified.</p>
     */
    inline void SetHsmArn(const char* value) { m_hsmArnHasBeenSet = true; m_hsmArn.assign(value); }

    /**
     * <p>The ARN of the HSM. Either the <code>HsmArn</code> or the
     * <code>SerialNumber</code> parameter must be specified.</p>
     */
    inline DescribeHsmRequest& WithHsmArn(const Aws::String& value) { SetHsmArn(value); return *this;}

    /**
     * <p>The ARN of the HSM. Either the <code>HsmArn</code> or the
     * <code>SerialNumber</code> parameter must be specified.</p>
     */
    inline DescribeHsmRequest& WithHsmArn(Aws::String&& value) { SetHsmArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the HSM. Either the <code>HsmArn</code> or the
     * <code>SerialNumber</code> parameter must be specified.</p>
     */
    inline DescribeHsmRequest& WithHsmArn(const char* value) { SetHsmArn(value); return *this;}


    /**
     * <p>The serial number of the HSM. Either the <code>HsmArn</code> or the
     * <code>HsmSerialNumber</code> parameter must be specified.</p>
     */
    inline const Aws::String& GetHsmSerialNumber() const{ return m_hsmSerialNumber; }

    /**
     * <p>The serial number of the HSM. Either the <code>HsmArn</code> or the
     * <code>HsmSerialNumber</code> parameter must be specified.</p>
     */
    inline bool HsmSerialNumberHasBeenSet() const { return m_hsmSerialNumberHasBeenSet; }

    /**
     * <p>The serial number of the HSM. Either the <code>HsmArn</code> or the
     * <code>HsmSerialNumber</code> parameter must be specified.</p>
     */
    inline void SetHsmSerialNumber(const Aws::String& value) { m_hsmSerialNumberHasBeenSet = true; m_hsmSerialNumber = value; }

    /**
     * <p>The serial number of the HSM. Either the <code>HsmArn</code> or the
     * <code>HsmSerialNumber</code> parameter must be specified.</p>
     */
    inline void SetHsmSerialNumber(Aws::String&& value) { m_hsmSerialNumberHasBeenSet = true; m_hsmSerialNumber = std::move(value); }

    /**
     * <p>The serial number of the HSM. Either the <code>HsmArn</code> or the
     * <code>HsmSerialNumber</code> parameter must be specified.</p>
     */
    inline void SetHsmSerialNumber(const char* value) { m_hsmSerialNumberHasBeenSet = true; m_hsmSerialNumber.assign(value); }

    /**
     * <p>The serial number of the HSM. Either the <code>HsmArn</code> or the
     * <code>HsmSerialNumber</code> parameter must be specified.</p>
     */
    inline DescribeHsmRequest& WithHsmSerialNumber(const Aws::String& value) { SetHsmSerialNumber(value); return *this;}

    /**
     * <p>The serial number of the HSM. Either the <code>HsmArn</code> or the
     * <code>HsmSerialNumber</code> parameter must be specified.</p>
     */
    inline DescribeHsmRequest& WithHsmSerialNumber(Aws::String&& value) { SetHsmSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number of the HSM. Either the <code>HsmArn</code> or the
     * <code>HsmSerialNumber</code> parameter must be specified.</p>
     */
    inline DescribeHsmRequest& WithHsmSerialNumber(const char* value) { SetHsmSerialNumber(value); return *this;}

  private:

    Aws::String m_hsmArn;
    bool m_hsmArnHasBeenSet;

    Aws::String m_hsmSerialNumber;
    bool m_hsmSerialNumberHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
