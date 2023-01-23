/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/CustomLineItemBillingPeriodRange.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class DeleteCustomLineItemRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API DeleteCustomLineItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomLineItem"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p> The ARN of the custom line item to be deleted. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the custom line item to be deleted. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the custom line item to be deleted. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the custom line item to be deleted. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the custom line item to be deleted. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the custom line item to be deleted. </p>
     */
    inline DeleteCustomLineItemRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the custom line item to be deleted. </p>
     */
    inline DeleteCustomLineItemRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the custom line item to be deleted. </p>
     */
    inline DeleteCustomLineItemRequest& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const CustomLineItemBillingPeriodRange& GetBillingPeriodRange() const{ return m_billingPeriodRange; }

    
    inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }

    
    inline void SetBillingPeriodRange(const CustomLineItemBillingPeriodRange& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = value; }

    
    inline void SetBillingPeriodRange(CustomLineItemBillingPeriodRange&& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = std::move(value); }

    
    inline DeleteCustomLineItemRequest& WithBillingPeriodRange(const CustomLineItemBillingPeriodRange& value) { SetBillingPeriodRange(value); return *this;}

    
    inline DeleteCustomLineItemRequest& WithBillingPeriodRange(CustomLineItemBillingPeriodRange&& value) { SetBillingPeriodRange(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CustomLineItemBillingPeriodRange m_billingPeriodRange;
    bool m_billingPeriodRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
