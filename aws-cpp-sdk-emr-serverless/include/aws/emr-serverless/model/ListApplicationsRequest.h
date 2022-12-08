/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/model/ApplicationState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EMRServerless
{
namespace Model
{

  /**
   */
  class ListApplicationsRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API ListApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplications"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_EMRSERVERLESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token for the next set of application results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of application results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of application results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of application results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of application results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of application results.</p>
     */
    inline ListApplicationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of application results.</p>
     */
    inline ListApplicationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of application results.</p>
     */
    inline ListApplicationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of applications that can be listed.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of applications that can be listed.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of applications that can be listed.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of applications that can be listed.</p>
     */
    inline ListApplicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An optional filter for application states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline const Aws::Vector<ApplicationState>& GetStates() const{ return m_states; }

    /**
     * <p>An optional filter for application states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>An optional filter for application states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline void SetStates(const Aws::Vector<ApplicationState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>An optional filter for application states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline void SetStates(Aws::Vector<ApplicationState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>An optional filter for application states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline ListApplicationsRequest& WithStates(const Aws::Vector<ApplicationState>& value) { SetStates(value); return *this;}

    /**
     * <p>An optional filter for application states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline ListApplicationsRequest& WithStates(Aws::Vector<ApplicationState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>An optional filter for application states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline ListApplicationsRequest& AddStates(const ApplicationState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>An optional filter for application states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline ListApplicationsRequest& AddStates(ApplicationState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<ApplicationState> m_states;
    bool m_statesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
