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
   * <code>BillingGroupCostReportElements</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListBillingGroupCostReportsFilter">AWS
   * API Reference</a></p>
   */
  class ListBillingGroupCostReportsFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsFilter();
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline const Aws::Vector<Aws::String>& GetBillingGroupArns() const{ return m_billingGroupArns; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline bool BillingGroupArnsHasBeenSet() const { return m_billingGroupArnsHasBeenSet; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline void SetBillingGroupArns(const Aws::Vector<Aws::String>& value) { m_billingGroupArnsHasBeenSet = true; m_billingGroupArns = value; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline void SetBillingGroupArns(Aws::Vector<Aws::String>&& value) { m_billingGroupArnsHasBeenSet = true; m_billingGroupArns = std::move(value); }

    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline ListBillingGroupCostReportsFilter& WithBillingGroupArns(const Aws::Vector<Aws::String>& value) { SetBillingGroupArns(value); return *this;}

    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline ListBillingGroupCostReportsFilter& WithBillingGroupArns(Aws::Vector<Aws::String>&& value) { SetBillingGroupArns(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline ListBillingGroupCostReportsFilter& AddBillingGroupArns(const Aws::String& value) { m_billingGroupArnsHasBeenSet = true; m_billingGroupArns.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline ListBillingGroupCostReportsFilter& AddBillingGroupArns(Aws::String&& value) { m_billingGroupArnsHasBeenSet = true; m_billingGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Resource Names (ARNs) used to filter billing groups to
     * retrieve reports. </p>
     */
    inline ListBillingGroupCostReportsFilter& AddBillingGroupArns(const char* value) { m_billingGroupArnsHasBeenSet = true; m_billingGroupArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_billingGroupArns;
    bool m_billingGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
