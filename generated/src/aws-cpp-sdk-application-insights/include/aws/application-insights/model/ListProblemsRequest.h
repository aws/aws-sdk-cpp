/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-insights/model/Visibility.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class ListProblemsRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListProblemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProblems"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the resource group owner.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ListProblemsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ListProblemsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ListProblemsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }
    inline ListProblemsRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline ListProblemsRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline ListProblemsRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the problem was detected, in epoch seconds. If you don't
     * specify a time frame for the request, problems within the past seven days are
     * returned.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListProblemsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListProblemsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the problem ended, in epoch seconds. If not specified, problems
     * within the past seven days are returned.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListProblemsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListProblemsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListProblemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListProblemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProblemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProblemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the component. </p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline ListProblemsRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline ListProblemsRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline ListProblemsRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not you can view the problem. If not specified, visible
     * and ignored problems are returned.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline ListProblemsRequest& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline ListProblemsRequest& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
