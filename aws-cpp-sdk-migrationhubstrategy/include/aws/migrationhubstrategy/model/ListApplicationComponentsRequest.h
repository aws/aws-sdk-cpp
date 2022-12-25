/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/SortOrder.h>
#include <aws/migrationhubstrategy/model/Group.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class ListApplicationComponentsRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationComponents"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p> Criteria for filtering the list of application components. </p>
     */
    inline const ApplicationComponentCriteria& GetApplicationComponentCriteria() const{ return m_applicationComponentCriteria; }

    /**
     * <p> Criteria for filtering the list of application components. </p>
     */
    inline bool ApplicationComponentCriteriaHasBeenSet() const { return m_applicationComponentCriteriaHasBeenSet; }

    /**
     * <p> Criteria for filtering the list of application components. </p>
     */
    inline void SetApplicationComponentCriteria(const ApplicationComponentCriteria& value) { m_applicationComponentCriteriaHasBeenSet = true; m_applicationComponentCriteria = value; }

    /**
     * <p> Criteria for filtering the list of application components. </p>
     */
    inline void SetApplicationComponentCriteria(ApplicationComponentCriteria&& value) { m_applicationComponentCriteriaHasBeenSet = true; m_applicationComponentCriteria = std::move(value); }

    /**
     * <p> Criteria for filtering the list of application components. </p>
     */
    inline ListApplicationComponentsRequest& WithApplicationComponentCriteria(const ApplicationComponentCriteria& value) { SetApplicationComponentCriteria(value); return *this;}

    /**
     * <p> Criteria for filtering the list of application components. </p>
     */
    inline ListApplicationComponentsRequest& WithApplicationComponentCriteria(ApplicationComponentCriteria&& value) { SetApplicationComponentCriteria(std::move(value)); return *this;}


    /**
     * <p> Specify the value based on the application component criteria type. For
     * example, if <code>applicationComponentCriteria</code> is set to
     * <code>SERVER_ID</code> and <code>filterValue</code> is set to
     * <code>server1</code>, then <a>ListApplicationComponents</a> returns all the
     * application components running on server1. </p>
     */
    inline const Aws::String& GetFilterValue() const{ return m_filterValue; }

    /**
     * <p> Specify the value based on the application component criteria type. For
     * example, if <code>applicationComponentCriteria</code> is set to
     * <code>SERVER_ID</code> and <code>filterValue</code> is set to
     * <code>server1</code>, then <a>ListApplicationComponents</a> returns all the
     * application components running on server1. </p>
     */
    inline bool FilterValueHasBeenSet() const { return m_filterValueHasBeenSet; }

    /**
     * <p> Specify the value based on the application component criteria type. For
     * example, if <code>applicationComponentCriteria</code> is set to
     * <code>SERVER_ID</code> and <code>filterValue</code> is set to
     * <code>server1</code>, then <a>ListApplicationComponents</a> returns all the
     * application components running on server1. </p>
     */
    inline void SetFilterValue(const Aws::String& value) { m_filterValueHasBeenSet = true; m_filterValue = value; }

    /**
     * <p> Specify the value based on the application component criteria type. For
     * example, if <code>applicationComponentCriteria</code> is set to
     * <code>SERVER_ID</code> and <code>filterValue</code> is set to
     * <code>server1</code>, then <a>ListApplicationComponents</a> returns all the
     * application components running on server1. </p>
     */
    inline void SetFilterValue(Aws::String&& value) { m_filterValueHasBeenSet = true; m_filterValue = std::move(value); }

    /**
     * <p> Specify the value based on the application component criteria type. For
     * example, if <code>applicationComponentCriteria</code> is set to
     * <code>SERVER_ID</code> and <code>filterValue</code> is set to
     * <code>server1</code>, then <a>ListApplicationComponents</a> returns all the
     * application components running on server1. </p>
     */
    inline void SetFilterValue(const char* value) { m_filterValueHasBeenSet = true; m_filterValue.assign(value); }

    /**
     * <p> Specify the value based on the application component criteria type. For
     * example, if <code>applicationComponentCriteria</code> is set to
     * <code>SERVER_ID</code> and <code>filterValue</code> is set to
     * <code>server1</code>, then <a>ListApplicationComponents</a> returns all the
     * application components running on server1. </p>
     */
    inline ListApplicationComponentsRequest& WithFilterValue(const Aws::String& value) { SetFilterValue(value); return *this;}

    /**
     * <p> Specify the value based on the application component criteria type. For
     * example, if <code>applicationComponentCriteria</code> is set to
     * <code>SERVER_ID</code> and <code>filterValue</code> is set to
     * <code>server1</code>, then <a>ListApplicationComponents</a> returns all the
     * application components running on server1. </p>
     */
    inline ListApplicationComponentsRequest& WithFilterValue(Aws::String&& value) { SetFilterValue(std::move(value)); return *this;}

    /**
     * <p> Specify the value based on the application component criteria type. For
     * example, if <code>applicationComponentCriteria</code> is set to
     * <code>SERVER_ID</code> and <code>filterValue</code> is set to
     * <code>server1</code>, then <a>ListApplicationComponents</a> returns all the
     * application components running on server1. </p>
     */
    inline ListApplicationComponentsRequest& WithFilterValue(const char* value) { SetFilterValue(value); return *this;}


    /**
     * <p> The group ID specified in to filter on. </p>
     */
    inline const Aws::Vector<Group>& GetGroupIdFilter() const{ return m_groupIdFilter; }

    /**
     * <p> The group ID specified in to filter on. </p>
     */
    inline bool GroupIdFilterHasBeenSet() const { return m_groupIdFilterHasBeenSet; }

    /**
     * <p> The group ID specified in to filter on. </p>
     */
    inline void SetGroupIdFilter(const Aws::Vector<Group>& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter = value; }

    /**
     * <p> The group ID specified in to filter on. </p>
     */
    inline void SetGroupIdFilter(Aws::Vector<Group>&& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter = std::move(value); }

    /**
     * <p> The group ID specified in to filter on. </p>
     */
    inline ListApplicationComponentsRequest& WithGroupIdFilter(const Aws::Vector<Group>& value) { SetGroupIdFilter(value); return *this;}

    /**
     * <p> The group ID specified in to filter on. </p>
     */
    inline ListApplicationComponentsRequest& WithGroupIdFilter(Aws::Vector<Group>&& value) { SetGroupIdFilter(std::move(value)); return *this;}

    /**
     * <p> The group ID specified in to filter on. </p>
     */
    inline ListApplicationComponentsRequest& AddGroupIdFilter(const Group& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter.push_back(value); return *this; }

    /**
     * <p> The group ID specified in to filter on. </p>
     */
    inline ListApplicationComponentsRequest& AddGroupIdFilter(Group&& value) { m_groupIdFilterHasBeenSet = true; m_groupIdFilter.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum number of items to include in the response. The maximum value is
     * 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of items to include in the response. The maximum value is
     * 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of items to include in the response. The maximum value is
     * 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of items to include in the response. The maximum value is
     * 100. </p>
     */
    inline ListApplicationComponentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline ListApplicationComponentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline ListApplicationComponentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set <code>maxResults</code> to 10. You'll receive a set of 10 results along
     * with a token. You then use the returned token to retrieve the next set of 10.
     * </p>
     */
    inline ListApplicationComponentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Specifies whether to sort by ascending (<code>ASC</code>) or descending
     * (<code>DESC</code>) order. </p>
     */
    inline const SortOrder& GetSort() const{ return m_sort; }

    /**
     * <p> Specifies whether to sort by ascending (<code>ASC</code>) or descending
     * (<code>DESC</code>) order. </p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p> Specifies whether to sort by ascending (<code>ASC</code>) or descending
     * (<code>DESC</code>) order. </p>
     */
    inline void SetSort(const SortOrder& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p> Specifies whether to sort by ascending (<code>ASC</code>) or descending
     * (<code>DESC</code>) order. </p>
     */
    inline void SetSort(SortOrder&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p> Specifies whether to sort by ascending (<code>ASC</code>) or descending
     * (<code>DESC</code>) order. </p>
     */
    inline ListApplicationComponentsRequest& WithSort(const SortOrder& value) { SetSort(value); return *this;}

    /**
     * <p> Specifies whether to sort by ascending (<code>ASC</code>) or descending
     * (<code>DESC</code>) order. </p>
     */
    inline ListApplicationComponentsRequest& WithSort(SortOrder&& value) { SetSort(std::move(value)); return *this;}

  private:

    ApplicationComponentCriteria m_applicationComponentCriteria;
    bool m_applicationComponentCriteriaHasBeenSet = false;

    Aws::String m_filterValue;
    bool m_filterValueHasBeenSet = false;

    Aws::Vector<Group> m_groupIdFilter;
    bool m_groupIdFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortOrder m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
