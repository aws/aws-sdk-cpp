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
   * <p>The filter that specifies the Amazon Resource Names (ARNs) of pricing plans,
   * to retrieve pricing plan information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListPricingPlansFilter">AWS
   * API Reference</a></p>
   */
  class ListPricingPlansFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingPlansFilter() = default;
    AWS_BILLINGCONDUCTOR_API ListPricingPlansFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListPricingPlansFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of pricing plan Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const { return m_arns; }
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    void SetArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns = std::forward<ArnsT>(value); }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    ListPricingPlansFilter& WithArns(ArnsT&& value) { SetArns(std::forward<ArnsT>(value)); return *this;}
    template<typename ArnsT = Aws::String>
    ListPricingPlansFilter& AddArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns.emplace_back(std::forward<ArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
