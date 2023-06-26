/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-insights/model/ConfigurationEventStatus.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class ListConfigurationHistoryRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListConfigurationHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigurationHistory"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Resource group to which the application belongs. </p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>Resource group to which the application belongs. </p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>Resource group to which the application belongs. </p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>Resource group to which the application belongs. </p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>Resource group to which the application belongs. </p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>Resource group to which the application belongs. </p>
     */
    inline ListConfigurationHistoryRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>Resource group to which the application belongs. </p>
     */
    inline ListConfigurationHistoryRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>Resource group to which the application belongs. </p>
     */
    inline ListConfigurationHistoryRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>The start time of the event. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the event. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the event. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the event. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the event. </p>
     */
    inline ListConfigurationHistoryRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the event. </p>
     */
    inline ListConfigurationHistoryRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the event.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the event.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the event.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the event.</p>
     */
    inline ListConfigurationHistoryRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the event.</p>
     */
    inline ListConfigurationHistoryRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR.</p>
     */
    inline const ConfigurationEventStatus& GetEventStatus() const{ return m_eventStatus; }

    /**
     * <p>The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR.</p>
     */
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }

    /**
     * <p>The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR.</p>
     */
    inline void SetEventStatus(const ConfigurationEventStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }

    /**
     * <p>The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR.</p>
     */
    inline void SetEventStatus(ConfigurationEventStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }

    /**
     * <p>The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR.</p>
     */
    inline ListConfigurationHistoryRequest& WithEventStatus(const ConfigurationEventStatus& value) { SetEventStatus(value); return *this;}

    /**
     * <p>The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR.</p>
     */
    inline ListConfigurationHistoryRequest& WithEventStatus(ConfigurationEventStatus&& value) { SetEventStatus(std::move(value)); return *this;}


    /**
     * <p> The maximum number of results returned by
     * <code>ListConfigurationHistory</code> in paginated output. When this parameter
     * is used, <code>ListConfigurationHistory</code> returns only
     * <code>MaxResults</code> in a single page along with a <code>NextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListConfigurationHistory</code> request with the returned
     * <code>NextToken</code> value. If this parameter is not used, then
     * <code>ListConfigurationHistory</code> returns all results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results returned by
     * <code>ListConfigurationHistory</code> in paginated output. When this parameter
     * is used, <code>ListConfigurationHistory</code> returns only
     * <code>MaxResults</code> in a single page along with a <code>NextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListConfigurationHistory</code> request with the returned
     * <code>NextToken</code> value. If this parameter is not used, then
     * <code>ListConfigurationHistory</code> returns all results. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results returned by
     * <code>ListConfigurationHistory</code> in paginated output. When this parameter
     * is used, <code>ListConfigurationHistory</code> returns only
     * <code>MaxResults</code> in a single page along with a <code>NextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListConfigurationHistory</code> request with the returned
     * <code>NextToken</code> value. If this parameter is not used, then
     * <code>ListConfigurationHistory</code> returns all results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results returned by
     * <code>ListConfigurationHistory</code> in paginated output. When this parameter
     * is used, <code>ListConfigurationHistory</code> returns only
     * <code>MaxResults</code> in a single page along with a <code>NextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListConfigurationHistory</code> request with the returned
     * <code>NextToken</code> value. If this parameter is not used, then
     * <code>ListConfigurationHistory</code> returns all results. </p>
     */
    inline ListConfigurationHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>ListConfigurationHistory</code> request where <code>MaxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>NextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>ListConfigurationHistory</code> request where <code>MaxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>NextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>ListConfigurationHistory</code> request where <code>MaxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>NextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>ListConfigurationHistory</code> request where <code>MaxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>NextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>ListConfigurationHistory</code> request where <code>MaxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>NextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>ListConfigurationHistory</code> request where <code>MaxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>NextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline ListConfigurationHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>ListConfigurationHistory</code> request where <code>MaxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>NextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline ListConfigurationHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>ListConfigurationHistory</code> request where <code>MaxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>NextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline ListConfigurationHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ConfigurationEventStatus m_eventStatus;
    bool m_eventStatusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
