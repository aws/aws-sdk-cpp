/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetAnomalyMonitorsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetAnomalyMonitorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAnomalyMonitors"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMonitorArnList() const{ return m_monitorArnList; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline bool MonitorArnListHasBeenSet() const { return m_monitorArnListHasBeenSet; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline void SetMonitorArnList(const Aws::Vector<Aws::String>& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = value; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline void SetMonitorArnList(Aws::Vector<Aws::String>&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = std::move(value); }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline GetAnomalyMonitorsRequest& WithMonitorArnList(const Aws::Vector<Aws::String>& value) { SetMonitorArnList(value); return *this;}

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline GetAnomalyMonitorsRequest& WithMonitorArnList(Aws::Vector<Aws::String>&& value) { SetMonitorArnList(std::move(value)); return *this;}

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline GetAnomalyMonitorsRequest& AddMonitorArnList(const Aws::String& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline GetAnomalyMonitorsRequest& AddMonitorArnList(Aws::String&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline GetAnomalyMonitorsRequest& AddMonitorArnList(const char* value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline GetAnomalyMonitorsRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline GetAnomalyMonitorsRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline GetAnomalyMonitorsRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The number of entries that a paginated response contains. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of entries that a paginated response contains. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of entries that a paginated response contains. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of entries that a paginated response contains. </p>
     */
    inline GetAnomalyMonitorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_monitorArnList;
    bool m_monitorArnListHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
