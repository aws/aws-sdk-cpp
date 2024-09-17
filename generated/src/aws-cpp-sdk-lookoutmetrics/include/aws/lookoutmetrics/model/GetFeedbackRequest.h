/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyGroupTimeSeries.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class GetFeedbackRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API GetFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFeedback"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline GetFeedbackRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline GetFeedbackRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline GetFeedbackRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anomalous metric and group ID.</p>
     */
    inline const AnomalyGroupTimeSeries& GetAnomalyGroupTimeSeriesFeedback() const{ return m_anomalyGroupTimeSeriesFeedback; }
    inline bool AnomalyGroupTimeSeriesFeedbackHasBeenSet() const { return m_anomalyGroupTimeSeriesFeedbackHasBeenSet; }
    inline void SetAnomalyGroupTimeSeriesFeedback(const AnomalyGroupTimeSeries& value) { m_anomalyGroupTimeSeriesFeedbackHasBeenSet = true; m_anomalyGroupTimeSeriesFeedback = value; }
    inline void SetAnomalyGroupTimeSeriesFeedback(AnomalyGroupTimeSeries&& value) { m_anomalyGroupTimeSeriesFeedbackHasBeenSet = true; m_anomalyGroupTimeSeriesFeedback = std::move(value); }
    inline GetFeedbackRequest& WithAnomalyGroupTimeSeriesFeedback(const AnomalyGroupTimeSeries& value) { SetAnomalyGroupTimeSeriesFeedback(value); return *this;}
    inline GetFeedbackRequest& WithAnomalyGroupTimeSeriesFeedback(AnomalyGroupTimeSeries&& value) { SetAnomalyGroupTimeSeriesFeedback(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetFeedbackRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetFeedbackRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetFeedbackRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetFeedbackRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    AnomalyGroupTimeSeries m_anomalyGroupTimeSeriesFeedback;
    bool m_anomalyGroupTimeSeriesFeedbackHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
