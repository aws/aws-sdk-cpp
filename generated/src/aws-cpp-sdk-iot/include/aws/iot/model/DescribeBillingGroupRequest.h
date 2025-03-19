/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeBillingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeBillingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBillingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const { return m_billingGroupName; }
    inline bool BillingGroupNameHasBeenSet() const { return m_billingGroupNameHasBeenSet; }
    template<typename BillingGroupNameT = Aws::String>
    void SetBillingGroupName(BillingGroupNameT&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::forward<BillingGroupNameT>(value); }
    template<typename BillingGroupNameT = Aws::String>
    DescribeBillingGroupRequest& WithBillingGroupName(BillingGroupNameT&& value) { SetBillingGroupName(std::forward<BillingGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
