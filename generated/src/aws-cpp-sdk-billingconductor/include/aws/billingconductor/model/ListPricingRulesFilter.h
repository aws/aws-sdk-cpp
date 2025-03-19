/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BillingConductor
{
namespace Model
{

  /**
   * <p> The filter that specifies criteria that the pricing rules returned by the
   * <code>ListPricingRules</code> API will adhere to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListPricingRulesFilter">AWS
   * API Reference</a></p>
   */
  class ListPricingRulesFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingRulesFilter() = default;
    AWS_BILLINGCONDUCTOR_API ListPricingRulesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListPricingRulesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list containing the pricing rule Amazon Resource Names (ARNs) to include in
     * the API response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const { return m_arns; }
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    void SetArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns = std::forward<ArnsT>(value); }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    ListPricingRulesFilter& WithArns(ArnsT&& value) { SetArns(std::forward<ArnsT>(value)); return *this;}
    template<typename ArnsT = Aws::String>
    ListPricingRulesFilter& AddArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns.emplace_back(std::forward<ArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
