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
    AWS_BCMPRICINGCALCULATOR_API ListBillScenariosRequest() = default;

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
    inline const Aws::Vector<ListBillScenariosFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<ListBillScenariosFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<ListBillScenariosFilter>>
    ListBillScenariosRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = ListBillScenariosFilter>
    ListBillScenariosRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Filter bill scenarios based on the creation date. </p>
     */
    inline const FilterTimestamp& GetCreatedAtFilter() const { return m_createdAtFilter; }
    inline bool CreatedAtFilterHasBeenSet() const { return m_createdAtFilterHasBeenSet; }
    template<typename CreatedAtFilterT = FilterTimestamp>
    void SetCreatedAtFilter(CreatedAtFilterT&& value) { m_createdAtFilterHasBeenSet = true; m_createdAtFilter = std::forward<CreatedAtFilterT>(value); }
    template<typename CreatedAtFilterT = FilterTimestamp>
    ListBillScenariosRequest& WithCreatedAtFilter(CreatedAtFilterT&& value) { SetCreatedAtFilter(std::forward<CreatedAtFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filter bill scenarios based on the expiration date. </p>
     */
    inline const FilterTimestamp& GetExpiresAtFilter() const { return m_expiresAtFilter; }
    inline bool ExpiresAtFilterHasBeenSet() const { return m_expiresAtFilterHasBeenSet; }
    template<typename ExpiresAtFilterT = FilterTimestamp>
    void SetExpiresAtFilter(ExpiresAtFilterT&& value) { m_expiresAtFilterHasBeenSet = true; m_expiresAtFilter = std::forward<ExpiresAtFilterT>(value); }
    template<typename ExpiresAtFilterT = FilterTimestamp>
    ListBillScenariosRequest& WithExpiresAtFilter(ExpiresAtFilterT&& value) { SetExpiresAtFilter(std::forward<ExpiresAtFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBillScenariosRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
