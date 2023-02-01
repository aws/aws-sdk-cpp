/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/UpdateCustomLineItemChargeDetails.h>
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
  class UpdateCustomLineItemRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomLineItem"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline UpdateCustomLineItemRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline UpdateCustomLineItemRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline UpdateCustomLineItemRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The new name for the custom line item. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The new name for the custom line item. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The new name for the custom line item. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The new name for the custom line item. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The new name for the custom line item. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The new name for the custom line item. </p>
     */
    inline UpdateCustomLineItemRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The new name for the custom line item. </p>
     */
    inline UpdateCustomLineItemRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The new name for the custom line item. </p>
     */
    inline UpdateCustomLineItemRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline UpdateCustomLineItemRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline UpdateCustomLineItemRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline UpdateCustomLineItemRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the new charge
     * details for the custom line item. </p>
     */
    inline const UpdateCustomLineItemChargeDetails& GetChargeDetails() const{ return m_chargeDetails; }

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the new charge
     * details for the custom line item. </p>
     */
    inline bool ChargeDetailsHasBeenSet() const { return m_chargeDetailsHasBeenSet; }

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the new charge
     * details for the custom line item. </p>
     */
    inline void SetChargeDetails(const UpdateCustomLineItemChargeDetails& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = value; }

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the new charge
     * details for the custom line item. </p>
     */
    inline void SetChargeDetails(UpdateCustomLineItemChargeDetails&& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = std::move(value); }

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the new charge
     * details for the custom line item. </p>
     */
    inline UpdateCustomLineItemRequest& WithChargeDetails(const UpdateCustomLineItemChargeDetails& value) { SetChargeDetails(value); return *this;}

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the new charge
     * details for the custom line item. </p>
     */
    inline UpdateCustomLineItemRequest& WithChargeDetails(UpdateCustomLineItemChargeDetails&& value) { SetChargeDetails(std::move(value)); return *this;}


    
    inline const CustomLineItemBillingPeriodRange& GetBillingPeriodRange() const{ return m_billingPeriodRange; }

    
    inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }

    
    inline void SetBillingPeriodRange(const CustomLineItemBillingPeriodRange& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = value; }

    
    inline void SetBillingPeriodRange(CustomLineItemBillingPeriodRange&& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = std::move(value); }

    
    inline UpdateCustomLineItemRequest& WithBillingPeriodRange(const CustomLineItemBillingPeriodRange& value) { SetBillingPeriodRange(value); return *this;}

    
    inline UpdateCustomLineItemRequest& WithBillingPeriodRange(CustomLineItemBillingPeriodRange&& value) { SetBillingPeriodRange(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    UpdateCustomLineItemChargeDetails m_chargeDetails;
    bool m_chargeDetailsHasBeenSet = false;

    CustomLineItemBillingPeriodRange m_billingPeriodRange;
    bool m_billingPeriodRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
