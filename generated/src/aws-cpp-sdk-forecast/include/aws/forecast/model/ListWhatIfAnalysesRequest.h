﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Filter.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class ListWhatIfAnalysesRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API ListWhatIfAnalysesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWhatIfAnalyses"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWhatIfAnalysesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWhatIfAnalysesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of filters. For each filter, you provide a condition and a match
     * statement. The condition is either <code>IS</code> or <code>IS_NOT</code>, which
     * specifies whether to include or exclude the what-if analysis jobs that match the
     * statement from the list, respectively. The match statement consists of a key and
     * a value.</p> <p> <b>Filter properties</b> </p> <ul> <li> <p>
     * <code>Condition</code> - The condition to apply. Valid values are
     * <code>IS</code> and <code>IS_NOT</code>. To include the what-if analysis jobs
     * that match the statement, specify <code>IS</code>. To exclude matching what-if
     * analysis jobs, specify <code>IS_NOT</code>.</p> </li> <li> <p> <code>Key</code>
     * - The name of the parameter to filter on. Valid values are
     * <code>WhatIfAnalysisArn</code> and <code>Status</code>.</p> </li> <li> <p>
     * <code>Value</code> - The value to match.</p> </li> </ul> <p>For example, to list
     * all jobs that export a forecast named <i>electricityWhatIf</i>, specify the
     * following filter:</p> <p> <code>"Filters": [ { "Condition": "IS", "Key":
     * "WhatIfAnalysisArn", "Value":
     * "arn:aws:forecast:us-west-2:&lt;acct-id&gt;:forecast/electricityWhatIf" }
     * ]</code> </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListWhatIfAnalysesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListWhatIfAnalysesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
