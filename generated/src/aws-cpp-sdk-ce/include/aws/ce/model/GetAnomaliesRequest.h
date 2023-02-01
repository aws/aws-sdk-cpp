/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnomalyDateInterval.h>
#include <aws/ce/model/AnomalyFeedbackType.h>
#include <aws/ce/model/TotalImpactFilter.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetAnomaliesRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetAnomaliesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAnomalies"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }

    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }

    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }

    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }

    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline GetAnomaliesRequest& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline GetAnomaliesRequest& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>Retrieves all of the cost anomalies detected for a specific cost anomaly
     * monitor Amazon Resource Name (ARN). </p>
     */
    inline GetAnomaliesRequest& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}


    /**
     * <p>Assigns the start and end dates for retrieving cost anomalies. The returned
     * anomaly object will have an <code>AnomalyEndDate</code> in the specified time
     * range. </p>
     */
    inline const AnomalyDateInterval& GetDateInterval() const{ return m_dateInterval; }

    /**
     * <p>Assigns the start and end dates for retrieving cost anomalies. The returned
     * anomaly object will have an <code>AnomalyEndDate</code> in the specified time
     * range. </p>
     */
    inline bool DateIntervalHasBeenSet() const { return m_dateIntervalHasBeenSet; }

    /**
     * <p>Assigns the start and end dates for retrieving cost anomalies. The returned
     * anomaly object will have an <code>AnomalyEndDate</code> in the specified time
     * range. </p>
     */
    inline void SetDateInterval(const AnomalyDateInterval& value) { m_dateIntervalHasBeenSet = true; m_dateInterval = value; }

    /**
     * <p>Assigns the start and end dates for retrieving cost anomalies. The returned
     * anomaly object will have an <code>AnomalyEndDate</code> in the specified time
     * range. </p>
     */
    inline void SetDateInterval(AnomalyDateInterval&& value) { m_dateIntervalHasBeenSet = true; m_dateInterval = std::move(value); }

    /**
     * <p>Assigns the start and end dates for retrieving cost anomalies. The returned
     * anomaly object will have an <code>AnomalyEndDate</code> in the specified time
     * range. </p>
     */
    inline GetAnomaliesRequest& WithDateInterval(const AnomalyDateInterval& value) { SetDateInterval(value); return *this;}

    /**
     * <p>Assigns the start and end dates for retrieving cost anomalies. The returned
     * anomaly object will have an <code>AnomalyEndDate</code> in the specified time
     * range. </p>
     */
    inline GetAnomaliesRequest& WithDateInterval(AnomalyDateInterval&& value) { SetDateInterval(std::move(value)); return *this;}


    /**
     * <p>Filters anomaly results by the feedback field on the anomaly object. </p>
     */
    inline const AnomalyFeedbackType& GetFeedback() const{ return m_feedback; }

    /**
     * <p>Filters anomaly results by the feedback field on the anomaly object. </p>
     */
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }

    /**
     * <p>Filters anomaly results by the feedback field on the anomaly object. </p>
     */
    inline void SetFeedback(const AnomalyFeedbackType& value) { m_feedbackHasBeenSet = true; m_feedback = value; }

    /**
     * <p>Filters anomaly results by the feedback field on the anomaly object. </p>
     */
    inline void SetFeedback(AnomalyFeedbackType&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }

    /**
     * <p>Filters anomaly results by the feedback field on the anomaly object. </p>
     */
    inline GetAnomaliesRequest& WithFeedback(const AnomalyFeedbackType& value) { SetFeedback(value); return *this;}

    /**
     * <p>Filters anomaly results by the feedback field on the anomaly object. </p>
     */
    inline GetAnomaliesRequest& WithFeedback(AnomalyFeedbackType&& value) { SetFeedback(std::move(value)); return *this;}


    /**
     * <p>Filters anomaly results by the total impact field on the anomaly object. For
     * example, you can filter anomalies <code>GREATER_THAN 200.00</code> to retrieve
     * anomalies, with an estimated dollar impact greater than 200. </p>
     */
    inline const TotalImpactFilter& GetTotalImpact() const{ return m_totalImpact; }

    /**
     * <p>Filters anomaly results by the total impact field on the anomaly object. For
     * example, you can filter anomalies <code>GREATER_THAN 200.00</code> to retrieve
     * anomalies, with an estimated dollar impact greater than 200. </p>
     */
    inline bool TotalImpactHasBeenSet() const { return m_totalImpactHasBeenSet; }

    /**
     * <p>Filters anomaly results by the total impact field on the anomaly object. For
     * example, you can filter anomalies <code>GREATER_THAN 200.00</code> to retrieve
     * anomalies, with an estimated dollar impact greater than 200. </p>
     */
    inline void SetTotalImpact(const TotalImpactFilter& value) { m_totalImpactHasBeenSet = true; m_totalImpact = value; }

    /**
     * <p>Filters anomaly results by the total impact field on the anomaly object. For
     * example, you can filter anomalies <code>GREATER_THAN 200.00</code> to retrieve
     * anomalies, with an estimated dollar impact greater than 200. </p>
     */
    inline void SetTotalImpact(TotalImpactFilter&& value) { m_totalImpactHasBeenSet = true; m_totalImpact = std::move(value); }

    /**
     * <p>Filters anomaly results by the total impact field on the anomaly object. For
     * example, you can filter anomalies <code>GREATER_THAN 200.00</code> to retrieve
     * anomalies, with an estimated dollar impact greater than 200. </p>
     */
    inline GetAnomaliesRequest& WithTotalImpact(const TotalImpactFilter& value) { SetTotalImpact(value); return *this;}

    /**
     * <p>Filters anomaly results by the total impact field on the anomaly object. For
     * example, you can filter anomalies <code>GREATER_THAN 200.00</code> to retrieve
     * anomalies, with an estimated dollar impact greater than 200. </p>
     */
    inline GetAnomaliesRequest& WithTotalImpact(TotalImpactFilter&& value) { SetTotalImpact(std::move(value)); return *this;}


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
    inline GetAnomaliesRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline GetAnomaliesRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline GetAnomaliesRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The number of entries a paginated response contains. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of entries a paginated response contains. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of entries a paginated response contains. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of entries a paginated response contains. </p>
     */
    inline GetAnomaliesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    AnomalyDateInterval m_dateInterval;
    bool m_dateIntervalHasBeenSet = false;

    AnomalyFeedbackType m_feedback;
    bool m_feedbackHasBeenSet = false;

    TotalImpactFilter m_totalImpact;
    bool m_totalImpactHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
