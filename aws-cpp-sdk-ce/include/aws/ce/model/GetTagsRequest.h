/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/SortDefinition.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetTagsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTags"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The value that you want to search for.</p>
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = std::move(value); }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline GetTagsRequest& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    /**
     * <p>The value that you want to search for.</p>
     */
    inline GetTagsRequest& WithSearchString(Aws::String&& value) { SetSearchString(std::move(value)); return *this;}

    /**
     * <p>The value that you want to search for.</p>
     */
    inline GetTagsRequest& WithSearchString(const char* value) { SetSearchString(value); return *this;}


    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline GetTagsRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline GetTagsRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline GetTagsRequest& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline GetTagsRequest& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline GetTagsRequest& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    
    inline const Expression& GetFilter() const{ return m_filter; }

    
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    
    inline GetTagsRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    
    inline GetTagsRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use <code>SortBy</code>,
     * <code>NextPageToken</code> and <code>SearchString</code> aren't supported.</p>
     */
    inline const Aws::Vector<SortDefinition>& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use <code>SortBy</code>,
     * <code>NextPageToken</code> and <code>SearchString</code> aren't supported.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use <code>SortBy</code>,
     * <code>NextPageToken</code> and <code>SearchString</code> aren't supported.</p>
     */
    inline void SetSortBy(const Aws::Vector<SortDefinition>& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use <code>SortBy</code>,
     * <code>NextPageToken</code> and <code>SearchString</code> aren't supported.</p>
     */
    inline void SetSortBy(Aws::Vector<SortDefinition>&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use <code>SortBy</code>,
     * <code>NextPageToken</code> and <code>SearchString</code> aren't supported.</p>
     */
    inline GetTagsRequest& WithSortBy(const Aws::Vector<SortDefinition>& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use <code>SortBy</code>,
     * <code>NextPageToken</code> and <code>SearchString</code> aren't supported.</p>
     */
    inline GetTagsRequest& WithSortBy(Aws::Vector<SortDefinition>&& value) { SetSortBy(std::move(value)); return *this;}

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use <code>SortBy</code>,
     * <code>NextPageToken</code> and <code>SearchString</code> aren't supported.</p>
     */
    inline GetTagsRequest& AddSortBy(const SortDefinition& value) { m_sortByHasBeenSet = true; m_sortBy.push_back(value); return *this; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The key represents cost
     * and usage metrics. The following values are supported:</p> <ul> <li> <p>
     * <code>BlendedCost</code> </p> </li> <li> <p> <code>UnblendedCost</code> </p>
     * </li> <li> <p> <code>AmortizedCost</code> </p> </li> <li> <p>
     * <code>NetAmortizedCost</code> </p> </li> <li> <p> <code>NetUnblendedCost</code>
     * </p> </li> <li> <p> <code>UsageQuantity</code> </p> </li> <li> <p>
     * <code>NormalizedUsageAmount</code> </p> </li> </ul> <p>The supported values for
     * <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p> <p>When you use <code>SortBy</code>,
     * <code>NextPageToken</code> and <code>SearchString</code> aren't supported.</p>
     */
    inline GetTagsRequest& AddSortBy(SortDefinition&& value) { m_sortByHasBeenSet = true; m_sortBy.push_back(std::move(value)); return *this; }


    /**
     * <p>This field is only used when SortBy is provided in the request. The maximum
     * number of objects that are returned for this request. If MaxResults isn't
     * specified with SortBy, the request returns 1000 results as the default value for
     * this parameter.</p> <p>For <code>GetTags</code>, MaxResults has an upper quota
     * of 1000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>This field is only used when SortBy is provided in the request. The maximum
     * number of objects that are returned for this request. If MaxResults isn't
     * specified with SortBy, the request returns 1000 results as the default value for
     * this parameter.</p> <p>For <code>GetTags</code>, MaxResults has an upper quota
     * of 1000.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>This field is only used when SortBy is provided in the request. The maximum
     * number of objects that are returned for this request. If MaxResults isn't
     * specified with SortBy, the request returns 1000 results as the default value for
     * this parameter.</p> <p>For <code>GetTags</code>, MaxResults has an upper quota
     * of 1000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>This field is only used when SortBy is provided in the request. The maximum
     * number of objects that are returned for this request. If MaxResults isn't
     * specified with SortBy, the request returns 1000 results as the default value for
     * this parameter.</p> <p>For <code>GetTags</code>, MaxResults has an upper quota
     * of 1000.</p>
     */
    inline GetTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetTagsRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetTagsRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetTagsRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::String m_searchString;
    bool m_searchStringHasBeenSet = false;

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<SortDefinition> m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
