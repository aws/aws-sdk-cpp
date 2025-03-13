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
    AWS_MIGRATIONHUB_API ListApplicationStatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationStates"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The configurationIds from the Application Discovery Service that uniquely
     * identifies your applications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIds() const { return m_applicationIds; }
    inline bool ApplicationIdsHasBeenSet() const { return m_applicationIdsHasBeenSet; }
    template<typename ApplicationIdsT = Aws::Vector<Aws::String>>
    void SetApplicationIds(ApplicationIdsT&& value) { m_applicationIdsHasBeenSet = true; m_applicationIds = std::forward<ApplicationIdsT>(value); }
    template<typename ApplicationIdsT = Aws::Vector<Aws::String>>
    ListApplicationStatesRequest& WithApplicationIds(ApplicationIdsT&& value) { SetApplicationIds(std::forward<ApplicationIdsT>(value)); return *this;}
    template<typename ApplicationIdsT = Aws::String>
    ListApplicationStatesRequest& AddApplicationIds(ApplicationIdsT&& value) { m_applicationIdsHasBeenSet = true; m_applicationIds.emplace_back(std::forward<ApplicationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationStatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to be returned per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListApplicationStatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationIds;
    bool m_applicationIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
