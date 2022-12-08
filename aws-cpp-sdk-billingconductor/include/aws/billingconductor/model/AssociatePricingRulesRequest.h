/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class AssociatePricingRulesRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API AssociatePricingRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePricingRules"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline AssociatePricingRulesRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline AssociatePricingRulesRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline AssociatePricingRulesRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetPricingRuleArns() const{ return m_pricingRuleArns; }

    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline bool PricingRuleArnsHasBeenSet() const { return m_pricingRuleArnsHasBeenSet; }

    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline void SetPricingRuleArns(const Aws::Vector<Aws::String>& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns = value; }

    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline void SetPricingRuleArns(Aws::Vector<Aws::String>&& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns = std::move(value); }

    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline AssociatePricingRulesRequest& WithPricingRuleArns(const Aws::Vector<Aws::String>& value) { SetPricingRuleArns(value); return *this;}

    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline AssociatePricingRulesRequest& WithPricingRuleArns(Aws::Vector<Aws::String>&& value) { SetPricingRuleArns(std::move(value)); return *this;}

    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline AssociatePricingRulesRequest& AddPricingRuleArns(const Aws::String& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns.push_back(value); return *this; }

    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline AssociatePricingRulesRequest& AddPricingRuleArns(Aws::String&& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns.push_back(std::move(value)); return *this; }

    /**
     * <p> The <code>PricingRuleArns</code> that are associated with the Pricing Plan.
     * </p>
     */
    inline AssociatePricingRulesRequest& AddPricingRuleArns(const char* value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns.push_back(value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_pricingRuleArns;
    bool m_pricingRuleArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
