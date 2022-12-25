/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DashboardSearchFilter.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class SearchDashboardsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API SearchDashboardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchDashboards"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the user whose
     * dashboards you're searching for. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the user whose
     * dashboards you're searching for. </p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the user whose
     * dashboards you're searching for. </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the user whose
     * dashboards you're searching for. </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the user whose
     * dashboards you're searching for. </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the user whose
     * dashboards you're searching for. </p>
     */
    inline SearchDashboardsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the user whose
     * dashboards you're searching for. </p>
     */
    inline SearchDashboardsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the user whose
     * dashboards you're searching for. </p>
     */
    inline SearchDashboardsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The filters to apply to the search. Currently, you can search only by user
     * name, for example, <code>"Filters": [ { "Name": "QUICKSIGHT_USER", "Operator":
     * "StringEquals", "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"
     * } ]</code> </p>
     */
    inline const Aws::Vector<DashboardSearchFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters to apply to the search. Currently, you can search only by user
     * name, for example, <code>"Filters": [ { "Name": "QUICKSIGHT_USER", "Operator":
     * "StringEquals", "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"
     * } ]</code> </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters to apply to the search. Currently, you can search only by user
     * name, for example, <code>"Filters": [ { "Name": "QUICKSIGHT_USER", "Operator":
     * "StringEquals", "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"
     * } ]</code> </p>
     */
    inline void SetFilters(const Aws::Vector<DashboardSearchFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters to apply to the search. Currently, you can search only by user
     * name, for example, <code>"Filters": [ { "Name": "QUICKSIGHT_USER", "Operator":
     * "StringEquals", "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"
     * } ]</code> </p>
     */
    inline void SetFilters(Aws::Vector<DashboardSearchFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters to apply to the search. Currently, you can search only by user
     * name, for example, <code>"Filters": [ { "Name": "QUICKSIGHT_USER", "Operator":
     * "StringEquals", "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"
     * } ]</code> </p>
     */
    inline SearchDashboardsRequest& WithFilters(const Aws::Vector<DashboardSearchFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters to apply to the search. Currently, you can search only by user
     * name, for example, <code>"Filters": [ { "Name": "QUICKSIGHT_USER", "Operator":
     * "StringEquals", "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"
     * } ]</code> </p>
     */
    inline SearchDashboardsRequest& WithFilters(Aws::Vector<DashboardSearchFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters to apply to the search. Currently, you can search only by user
     * name, for example, <code>"Filters": [ { "Name": "QUICKSIGHT_USER", "Operator":
     * "StringEquals", "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"
     * } ]</code> </p>
     */
    inline SearchDashboardsRequest& AddFilters(const DashboardSearchFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters to apply to the search. Currently, you can search only by user
     * name, for example, <code>"Filters": [ { "Name": "QUICKSIGHT_USER", "Operator":
     * "StringEquals", "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"
     * } ]</code> </p>
     */
    inline SearchDashboardsRequest& AddFilters(DashboardSearchFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline SearchDashboardsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline SearchDashboardsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline SearchDashboardsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline SearchDashboardsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<DashboardSearchFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
