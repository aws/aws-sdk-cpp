/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/StartTimeRange.h>
#include <aws/devops-guru/model/SearchInsightsFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightType.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class SearchInsightsRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API SearchInsightsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchInsights"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The start of the time range passed in. Returned insights occurred after this
     * time. </p>
     */
    inline const StartTimeRange& GetStartTimeRange() const { return m_startTimeRange; }
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }
    template<typename StartTimeRangeT = StartTimeRange>
    void SetStartTimeRange(StartTimeRangeT&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::forward<StartTimeRangeT>(value); }
    template<typename StartTimeRangeT = StartTimeRange>
    SearchInsightsRequest& WithStartTimeRange(StartTimeRangeT&& value) { SetStartTimeRange(std::forward<StartTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>SearchInsightsFilters</code> object that is used to set the severity
     * and status filters on your insight search. </p>
     */
    inline const SearchInsightsFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = SearchInsightsFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = SearchInsightsFilters>
    SearchInsightsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchInsightsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchInsightsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of insights you are searching for (<code>REACTIVE</code> or
     * <code>PROACTIVE</code>). </p>
     */
    inline InsightType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InsightType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SearchInsightsRequest& WithType(InsightType value) { SetType(value); return *this;}
    ///@}
  private:

    StartTimeRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet = false;

    SearchInsightsFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    InsightType m_type{InsightType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
