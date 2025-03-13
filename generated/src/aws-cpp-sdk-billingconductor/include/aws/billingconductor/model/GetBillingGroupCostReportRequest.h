/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingPeriodRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/GroupByAttributeName.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class GetBillingGroupCostReportRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API GetBillingGroupCostReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBillingGroupCostReport"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) that uniquely identifies the billing
     * group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetBillingGroupCostReportRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time range for which the margin summary is effective. You can specify up to
     * 12 months.</p>
     */
    inline const BillingPeriodRange& GetBillingPeriodRange() const { return m_billingPeriodRange; }
    inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }
    template<typename BillingPeriodRangeT = BillingPeriodRange>
    void SetBillingPeriodRange(BillingPeriodRangeT&& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = std::forward<BillingPeriodRangeT>(value); }
    template<typename BillingPeriodRangeT = BillingPeriodRange>
    GetBillingGroupCostReportRequest& WithBillingPeriodRange(BillingPeriodRangeT&& value) { SetBillingPeriodRange(std::forward<BillingPeriodRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings that specify the attributes that are used to break down
     * costs in the margin summary reports for the billing group. For example, you can
     * view your costs by the Amazon Web Service name or the billing period.</p>
     */
    inline const Aws::Vector<GroupByAttributeName>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<GroupByAttributeName>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<GroupByAttributeName>>
    GetBillingGroupCostReportRequest& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    inline GetBillingGroupCostReportRequest& AddGroupBy(GroupByAttributeName value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of margin summary reports to retrieve.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetBillingGroupCostReportRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBillingGroupCostReportRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    BillingPeriodRange m_billingPeriodRange;
    bool m_billingPeriodRangeHasBeenSet = false;

    Aws::Vector<GroupByAttributeName> m_groupBy;
    bool m_groupByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
