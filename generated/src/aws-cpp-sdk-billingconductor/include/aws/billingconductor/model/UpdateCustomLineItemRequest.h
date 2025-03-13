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
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomLineItem"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ARN of the custom line item to be updated. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateCustomLineItemRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new name for the custom line item. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCustomLineItemRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new line item description of the custom line item. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCustomLineItemRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the new charge
     * details for the custom line item. </p>
     */
    inline const UpdateCustomLineItemChargeDetails& GetChargeDetails() const { return m_chargeDetails; }
    inline bool ChargeDetailsHasBeenSet() const { return m_chargeDetailsHasBeenSet; }
    template<typename ChargeDetailsT = UpdateCustomLineItemChargeDetails>
    void SetChargeDetails(ChargeDetailsT&& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = std::forward<ChargeDetailsT>(value); }
    template<typename ChargeDetailsT = UpdateCustomLineItemChargeDetails>
    UpdateCustomLineItemRequest& WithChargeDetails(ChargeDetailsT&& value) { SetChargeDetails(std::forward<ChargeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomLineItemBillingPeriodRange& GetBillingPeriodRange() const { return m_billingPeriodRange; }
    inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }
    template<typename BillingPeriodRangeT = CustomLineItemBillingPeriodRange>
    void SetBillingPeriodRange(BillingPeriodRangeT&& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = std::forward<BillingPeriodRangeT>(value); }
    template<typename BillingPeriodRangeT = CustomLineItemBillingPeriodRange>
    UpdateCustomLineItemRequest& WithBillingPeriodRange(BillingPeriodRangeT&& value) { SetBillingPeriodRange(std::forward<BillingPeriodRangeT>(value)); return *this;}
    ///@}
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
