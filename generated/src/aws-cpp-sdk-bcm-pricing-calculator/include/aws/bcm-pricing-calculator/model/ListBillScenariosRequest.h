/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/FilterTimestamp.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenariosFilter.h>
#include <utility>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   */
  class ListBillScenariosRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListBillScenariosRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBillScenarios"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Filters to apply to the list of bill scenarios. </p>
     */
    inline const Aws::Vector<ListBillScenariosFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<ListBillScenariosFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<ListBillScenariosFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListBillScenariosRequest& WithFilters(const Aws::Vector<ListBillScenariosFilter>& value) { SetFilters(value); return *this;}
    inline ListBillScenariosRequest& WithFilters(Aws::Vector<ListBillScenariosFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListBillScenariosRequest& AddFilters(const ListBillScenariosFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListBillScenariosRequest& AddFilters(ListBillScenariosFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Filter bill scenarios based on their creation date. </p>
     */
    inline const FilterTimestamp& GetCreatedAtFilter() const{ return m_createdAtFilter; }
    inline bool CreatedAtFilterHasBeenSet() const { return m_createdAtFilterHasBeenSet; }
    inline void SetCreatedAtFilter(const FilterTimestamp& value) { m_createdAtFilterHasBeenSet = true; m_createdAtFilter = value; }
    inline void SetCreatedAtFilter(FilterTimestamp&& value) { m_createdAtFilterHasBeenSet = true; m_createdAtFilter = std::move(value); }
    inline ListBillScenariosRequest& WithCreatedAtFilter(const FilterTimestamp& value) { SetCreatedAtFilter(value); return *this;}
    inline ListBillScenariosRequest& WithCreatedAtFilter(FilterTimestamp&& value) { SetCreatedAtFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filter bill scenarios based on their expiration date. </p>
     */
    inline const FilterTimestamp& GetExpiresAtFilter() const{ return m_expiresAtFilter; }
    inline bool ExpiresAtFilterHasBeenSet() const { return m_expiresAtFilterHasBeenSet; }
    inline void SetExpiresAtFilter(const FilterTimestamp& value) { m_expiresAtFilterHasBeenSet = true; m_expiresAtFilter = value; }
    inline void SetExpiresAtFilter(FilterTimestamp&& value) { m_expiresAtFilterHasBeenSet = true; m_expiresAtFilter = std::move(value); }
    inline ListBillScenariosRequest& WithExpiresAtFilter(const FilterTimestamp& value) { SetExpiresAtFilter(value); return *this;}
    inline ListBillScenariosRequest& WithExpiresAtFilter(FilterTimestamp&& value) { SetExpiresAtFilter(std::move(value)); return *this;}
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
    inline ListBillScenariosRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBillScenariosRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBillScenariosRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBillScenariosRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<ListBillScenariosFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    FilterTimestamp m_createdAtFilter;
    bool m_createdAtFilterHasBeenSet = false;

    FilterTimestamp m_expiresAtFilter;
    bool m_expiresAtFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
