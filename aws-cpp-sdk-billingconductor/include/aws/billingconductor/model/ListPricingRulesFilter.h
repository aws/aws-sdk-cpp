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
   * <code>ListPricingRules</code> API will adhere to. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListPricingRulesFilter">AWS
   * API Reference</a></p>
   */
  class ListPricingRulesFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingRulesFilter();
    AWS_BILLINGCONDUCTOR_API ListPricingRulesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListPricingRulesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const{ return m_arns; }

    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }

    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline void SetArns(const Aws::Vector<Aws::String>& value) { m_arnsHasBeenSet = true; m_arns = value; }

    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline void SetArns(Aws::Vector<Aws::String>&& value) { m_arnsHasBeenSet = true; m_arns = std::move(value); }

    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline ListPricingRulesFilter& WithArns(const Aws::Vector<Aws::String>& value) { SetArns(value); return *this;}

    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline ListPricingRulesFilter& WithArns(Aws::Vector<Aws::String>&& value) { SetArns(std::move(value)); return *this;}

    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline ListPricingRulesFilter& AddArns(const Aws::String& value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }

    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline ListPricingRulesFilter& AddArns(Aws::String&& value) { m_arnsHasBeenSet = true; m_arns.push_back(std::move(value)); return *this; }

    /**
     * <p> A list containing the pricing rule Amazon Resource Names (ARNs) to include
     * in the API response. </p>
     */
    inline ListPricingRulesFilter& AddArns(const char* value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
