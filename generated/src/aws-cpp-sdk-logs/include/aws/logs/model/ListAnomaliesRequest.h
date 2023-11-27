/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/SuppressionState.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class ListAnomaliesRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListAnomaliesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAnomalies"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Use this to optionally limit the results to only the anomalies found by a
     * certain anomaly detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>Use this to optionally limit the results to only the anomalies found by a
     * certain anomaly detector.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>Use this to optionally limit the results to only the anomalies found by a
     * certain anomaly detector.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>Use this to optionally limit the results to only the anomalies found by a
     * certain anomaly detector.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>Use this to optionally limit the results to only the anomalies found by a
     * certain anomaly detector.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>Use this to optionally limit the results to only the anomalies found by a
     * certain anomaly detector.</p>
     */
    inline ListAnomaliesRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>Use this to optionally limit the results to only the anomalies found by a
     * certain anomaly detector.</p>
     */
    inline ListAnomaliesRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>Use this to optionally limit the results to only the anomalies found by a
     * certain anomaly detector.</p>
     */
    inline ListAnomaliesRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>You can specify this parameter if you want to the operation to return only
     * anomalies that are currently either suppressed or unsuppressed.</p>
     */
    inline const SuppressionState& GetSuppressionState() const{ return m_suppressionState; }

    /**
     * <p>You can specify this parameter if you want to the operation to return only
     * anomalies that are currently either suppressed or unsuppressed.</p>
     */
    inline bool SuppressionStateHasBeenSet() const { return m_suppressionStateHasBeenSet; }

    /**
     * <p>You can specify this parameter if you want to the operation to return only
     * anomalies that are currently either suppressed or unsuppressed.</p>
     */
    inline void SetSuppressionState(const SuppressionState& value) { m_suppressionStateHasBeenSet = true; m_suppressionState = value; }

    /**
     * <p>You can specify this parameter if you want to the operation to return only
     * anomalies that are currently either suppressed or unsuppressed.</p>
     */
    inline void SetSuppressionState(SuppressionState&& value) { m_suppressionStateHasBeenSet = true; m_suppressionState = std::move(value); }

    /**
     * <p>You can specify this parameter if you want to the operation to return only
     * anomalies that are currently either suppressed or unsuppressed.</p>
     */
    inline ListAnomaliesRequest& WithSuppressionState(const SuppressionState& value) { SetSuppressionState(value); return *this;}

    /**
     * <p>You can specify this parameter if you want to the operation to return only
     * anomalies that are currently either suppressed or unsuppressed.</p>
     */
    inline ListAnomaliesRequest& WithSuppressionState(SuppressionState&& value) { SetSuppressionState(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline ListAnomaliesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListAnomaliesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAnomaliesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAnomaliesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    SuppressionState m_suppressionState;
    bool m_suppressionStateHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
