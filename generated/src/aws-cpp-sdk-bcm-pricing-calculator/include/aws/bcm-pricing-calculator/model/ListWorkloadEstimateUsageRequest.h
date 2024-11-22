/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/ListUsageFilter.h>
#include <utility>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   */
  class ListWorkloadEstimateUsageRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListWorkloadEstimateUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkloadEstimateUsage"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The unique identifier of the workload estimate to list usage for. </p>
     */
    inline const Aws::String& GetWorkloadEstimateId() const{ return m_workloadEstimateId; }
    inline bool WorkloadEstimateIdHasBeenSet() const { return m_workloadEstimateIdHasBeenSet; }
    inline void SetWorkloadEstimateId(const Aws::String& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = value; }
    inline void SetWorkloadEstimateId(Aws::String&& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = std::move(value); }
    inline void SetWorkloadEstimateId(const char* value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId.assign(value); }
    inline ListWorkloadEstimateUsageRequest& WithWorkloadEstimateId(const Aws::String& value) { SetWorkloadEstimateId(value); return *this;}
    inline ListWorkloadEstimateUsageRequest& WithWorkloadEstimateId(Aws::String&& value) { SetWorkloadEstimateId(std::move(value)); return *this;}
    inline ListWorkloadEstimateUsageRequest& WithWorkloadEstimateId(const char* value) { SetWorkloadEstimateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters to apply to the list of usage items. </p>
     */
    inline const Aws::Vector<ListUsageFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<ListUsageFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<ListUsageFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListWorkloadEstimateUsageRequest& WithFilters(const Aws::Vector<ListUsageFilter>& value) { SetFilters(value); return *this;}
    inline ListWorkloadEstimateUsageRequest& WithFilters(Aws::Vector<ListUsageFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListWorkloadEstimateUsageRequest& AddFilters(const ListUsageFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListWorkloadEstimateUsageRequest& AddFilters(ListUsageFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListWorkloadEstimateUsageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkloadEstimateUsageRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkloadEstimateUsageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkloadEstimateUsageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_workloadEstimateId;
    bool m_workloadEstimateIdHasBeenSet = false;

    Aws::Vector<ListUsageFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
