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
  class DisassociatePricingRulesRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API DisassociatePricingRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociatePricingRules"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The pricing plan Amazon Resource Name (ARN) to disassociate pricing rules
     * from. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DisassociatePricingRulesRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list containing the Amazon Resource Name (ARN) of the pricing rules that
     * will be disassociated. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPricingRuleArns() const { return m_pricingRuleArns; }
    inline bool PricingRuleArnsHasBeenSet() const { return m_pricingRuleArnsHasBeenSet; }
    template<typename PricingRuleArnsT = Aws::Vector<Aws::String>>
    void SetPricingRuleArns(PricingRuleArnsT&& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns = std::forward<PricingRuleArnsT>(value); }
    template<typename PricingRuleArnsT = Aws::Vector<Aws::String>>
    DisassociatePricingRulesRequest& WithPricingRuleArns(PricingRuleArnsT&& value) { SetPricingRuleArns(std::forward<PricingRuleArnsT>(value)); return *this;}
    template<typename PricingRuleArnsT = Aws::String>
    DisassociatePricingRulesRequest& AddPricingRuleArns(PricingRuleArnsT&& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns.emplace_back(std::forward<PricingRuleArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_pricingRuleArns;
    bool m_pricingRuleArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
