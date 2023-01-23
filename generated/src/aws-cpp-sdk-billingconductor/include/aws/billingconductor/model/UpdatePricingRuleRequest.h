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
    AWS_BILLINGCONDUCTOR_API UpdatePricingRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePricingRule"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline UpdatePricingRuleRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline UpdatePricingRuleRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing rule to update. </p>
     */
    inline UpdatePricingRuleRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline UpdatePricingRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline UpdatePricingRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline UpdatePricingRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The new pricing rule type. </p>
     */
    inline const PricingRuleType& GetType() const{ return m_type; }

    /**
     * <p> The new pricing rule type. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The new pricing rule type. </p>
     */
    inline void SetType(const PricingRuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The new pricing rule type. </p>
     */
    inline void SetType(PricingRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The new pricing rule type. </p>
     */
    inline UpdatePricingRuleRequest& WithType(const PricingRuleType& value) { SetType(value); return *this;}

    /**
     * <p> The new pricing rule type. </p>
     */
    inline UpdatePricingRuleRequest& WithType(PricingRuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline double GetModifierPercentage() const{ return m_modifierPercentage; }

    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline bool ModifierPercentageHasBeenSet() const { return m_modifierPercentageHasBeenSet; }

    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline void SetModifierPercentage(double value) { m_modifierPercentageHasBeenSet = true; m_modifierPercentage = value; }

    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline UpdatePricingRuleRequest& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}


    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const UpdateTieringInput& GetTiering() const{ return m_tiering; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline bool TieringHasBeenSet() const { return m_tieringHasBeenSet; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline void SetTiering(const UpdateTieringInput& value) { m_tieringHasBeenSet = true; m_tiering = value; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline void SetTiering(UpdateTieringInput&& value) { m_tieringHasBeenSet = true; m_tiering = std::move(value); }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline UpdatePricingRuleRequest& WithTiering(const UpdateTieringInput& value) { SetTiering(value); return *this;}

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline UpdatePricingRuleRequest& WithTiering(UpdateTieringInput&& value) { SetTiering(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PricingRuleType m_type;
    bool m_typeHasBeenSet = false;

    double m_modifierPercentage;
    bool m_modifierPercentageHasBeenSet = false;

    UpdateTieringInput m_tiering;
    bool m_tieringHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
