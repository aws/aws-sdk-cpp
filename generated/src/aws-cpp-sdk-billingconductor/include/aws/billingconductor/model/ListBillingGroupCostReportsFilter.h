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
   * <p>The filter used to retrieve specific
   * <code>BillingGroupCostReportElements</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListBillingGroupCostReportsFilter">AWS
   * API Reference</a></p>
   */
  class ListBillingGroupCostReportsFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsFilter() = default;
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline const Aws::Vector<Aws::String>& GetBillingGroupArns() const { return m_billingGroupArns; }
    inline bool BillingGroupArnsHasBeenSet() const { return m_billingGroupArnsHasBeenSet; }
    template<typename BillingGroupArnsT = Aws::Vector<Aws::String>>
    void SetBillingGroupArns(BillingGroupArnsT&& value) { m_billingGroupArnsHasBeenSet = true; m_billingGroupArns = std::forward<BillingGroupArnsT>(value); }
    template<typename BillingGroupArnsT = Aws::Vector<Aws::String>>
    ListBillingGroupCostReportsFilter& WithBillingGroupArns(BillingGroupArnsT&& value) { SetBillingGroupArns(std::forward<BillingGroupArnsT>(value)); return *this;}
    template<typename BillingGroupArnsT = Aws::String>
    ListBillingGroupCostReportsFilter& AddBillingGroupArns(BillingGroupArnsT&& value) { m_billingGroupArnsHasBeenSet = true; m_billingGroupArns.emplace_back(std::forward<BillingGroupArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_billingGroupArns;
    bool m_billingGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
