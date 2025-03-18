/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/PricingRuleType.h>
#include <aws/billingconductor/model/UpdateTieringInput.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class UpdatePricingRuleRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdatePricingRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePricingRule"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdatePricingRuleRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdatePricingRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePricingRuleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new pricing rule type. </p>
     */
    inline PricingRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PricingRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdatePricingRuleRequest& WithType(PricingRuleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline double GetModifierPercentage() const { return m_modifierPercentage; }
    inline bool ModifierPercentageHasBeenSet() const { return m_modifierPercentageHasBeenSet; }
    inline void SetModifierPercentage(double value) { m_modifierPercentageHasBeenSet = true; m_modifierPercentage = value; }
    inline UpdatePricingRuleRequest& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const UpdateTieringInput& GetTiering() const { return m_tiering; }
    inline bool TieringHasBeenSet() const { return m_tieringHasBeenSet; }
    template<typename TieringT = UpdateTieringInput>
    void SetTiering(TieringT&& value) { m_tieringHasBeenSet = true; m_tiering = std::forward<TieringT>(value); }
    template<typename TieringT = UpdateTieringInput>
    UpdatePricingRuleRequest& WithTiering(TieringT&& value) { SetTiering(std::forward<TieringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PricingRuleType m_type{PricingRuleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_modifierPercentage{0.0};
    bool m_modifierPercentageHasBeenSet = false;

    UpdateTieringInput m_tiering;
    bool m_tieringHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
