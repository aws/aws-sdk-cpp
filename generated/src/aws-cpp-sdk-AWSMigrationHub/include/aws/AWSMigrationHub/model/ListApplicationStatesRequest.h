/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class ListApplicationStatesRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API ListApplicationStatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationStates"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIds() const{ return m_applicationIds; }

    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline bool ApplicationIdsHasBeenSet() const { return m_applicationIdsHasBeenSet; }

    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline void SetApplicationIds(const Aws::Vector<Aws::String>& value) { m_applicationIdsHasBeenSet = true; m_applicationIds = value; }

    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline void SetApplicationIds(Aws::Vector<Aws::String>&& value) { m_applicationIdsHasBeenSet = true; m_applicationIds = std::move(value); }

    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline ListApplicationStatesRequest& WithApplicationIds(const Aws::Vector<Aws::String>& value) { SetApplicationIds(value); return *this;}

    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline ListApplicationStatesRequest& WithApplicationIds(Aws::Vector<Aws::String>&& value) { SetApplicationIds(std::move(value)); return *this;}

    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline ListApplicationStatesRequest& AddApplicationIds(const Aws::String& value) { m_applicationIdsHasBeenSet = true; m_applicationIds.push_back(value); return *this; }

    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline ListApplicationStatesRequest& AddApplicationIds(Aws::String&& value) { m_applicationIdsHasBeenSet = true; m_applicationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline ListApplicationStatesRequest& AddApplicationIds(const char* value) { m_applicationIdsHasBeenSet = true; m_applicationIds.push_back(value); return *this; }


    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline ListApplicationStatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline ListApplicationStatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline ListApplicationStatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum number of results to be returned per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to be returned per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to be returned per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to be returned per page.</p>
     */
    inline ListApplicationStatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_applicationIds;
    bool m_applicationIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
