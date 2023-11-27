/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/SuppressionType.h>
#include <aws/logs/model/SuppressionPeriod.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class UpdateAnomalyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API UpdateAnomalyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnomaly"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline const Aws::String& GetAnomalyId() const{ return m_anomalyId; }

    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }

    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline void SetAnomalyId(const Aws::String& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = value; }

    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline void SetAnomalyId(Aws::String&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::move(value); }

    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline void SetAnomalyId(const char* value) { m_anomalyIdHasBeenSet = true; m_anomalyId.assign(value); }

    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline UpdateAnomalyRequest& WithAnomalyId(const Aws::String& value) { SetAnomalyId(value); return *this;}

    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline UpdateAnomalyRequest& WithAnomalyId(Aws::String&& value) { SetAnomalyId(std::move(value)); return *this;}

    /**
     * <p>If you are suppressing or unsuppressing an anomaly, specify its unique ID
     * here. You can find anomaly IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline UpdateAnomalyRequest& WithAnomalyId(const char* value) { SetAnomalyId(value); return *this;}


    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline const Aws::String& GetPatternId() const{ return m_patternId; }

    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline bool PatternIdHasBeenSet() const { return m_patternIdHasBeenSet; }

    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline void SetPatternId(const Aws::String& value) { m_patternIdHasBeenSet = true; m_patternId = value; }

    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline void SetPatternId(Aws::String&& value) { m_patternIdHasBeenSet = true; m_patternId = std::move(value); }

    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline void SetPatternId(const char* value) { m_patternIdHasBeenSet = true; m_patternId.assign(value); }

    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline UpdateAnomalyRequest& WithPatternId(const Aws::String& value) { SetPatternId(value); return *this;}

    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline UpdateAnomalyRequest& WithPatternId(Aws::String&& value) { SetPatternId(std::move(value)); return *this;}

    /**
     * <p>If you are suppressing or unsuppressing an pattern, specify its unique ID
     * here. You can find pattern IDs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListAnomalies.html">ListAnomalies</a>
     * operation.</p>
     */
    inline UpdateAnomalyRequest& WithPatternId(const char* value) { SetPatternId(value); return *this;}


    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline UpdateAnomalyRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline UpdateAnomalyRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the anomaly detector that this operation is to act on.</p>
     */
    inline UpdateAnomalyRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>Use this to specify whether the suppression to be temporary or infinite. If
     * you specify <code>LIMITED</code>, you must also specify a
     * <code>suppressionPeriod</code>. If you specify <code>INFINITE</code>, any value
     * for <code>suppressionPeriod</code> is ignored. </p>
     */
    inline const SuppressionType& GetSuppressionType() const{ return m_suppressionType; }

    /**
     * <p>Use this to specify whether the suppression to be temporary or infinite. If
     * you specify <code>LIMITED</code>, you must also specify a
     * <code>suppressionPeriod</code>. If you specify <code>INFINITE</code>, any value
     * for <code>suppressionPeriod</code> is ignored. </p>
     */
    inline bool SuppressionTypeHasBeenSet() const { return m_suppressionTypeHasBeenSet; }

    /**
     * <p>Use this to specify whether the suppression to be temporary or infinite. If
     * you specify <code>LIMITED</code>, you must also specify a
     * <code>suppressionPeriod</code>. If you specify <code>INFINITE</code>, any value
     * for <code>suppressionPeriod</code> is ignored. </p>
     */
    inline void SetSuppressionType(const SuppressionType& value) { m_suppressionTypeHasBeenSet = true; m_suppressionType = value; }

    /**
     * <p>Use this to specify whether the suppression to be temporary or infinite. If
     * you specify <code>LIMITED</code>, you must also specify a
     * <code>suppressionPeriod</code>. If you specify <code>INFINITE</code>, any value
     * for <code>suppressionPeriod</code> is ignored. </p>
     */
    inline void SetSuppressionType(SuppressionType&& value) { m_suppressionTypeHasBeenSet = true; m_suppressionType = std::move(value); }

    /**
     * <p>Use this to specify whether the suppression to be temporary or infinite. If
     * you specify <code>LIMITED</code>, you must also specify a
     * <code>suppressionPeriod</code>. If you specify <code>INFINITE</code>, any value
     * for <code>suppressionPeriod</code> is ignored. </p>
     */
    inline UpdateAnomalyRequest& WithSuppressionType(const SuppressionType& value) { SetSuppressionType(value); return *this;}

    /**
     * <p>Use this to specify whether the suppression to be temporary or infinite. If
     * you specify <code>LIMITED</code>, you must also specify a
     * <code>suppressionPeriod</code>. If you specify <code>INFINITE</code>, any value
     * for <code>suppressionPeriod</code> is ignored. </p>
     */
    inline UpdateAnomalyRequest& WithSuppressionType(SuppressionType&& value) { SetSuppressionType(std::move(value)); return *this;}


    /**
     * <p>If you are temporarily suppressing an anomaly or pattern, use this structure
     * to specify how long the suppression is to last.</p>
     */
    inline const SuppressionPeriod& GetSuppressionPeriod() const{ return m_suppressionPeriod; }

    /**
     * <p>If you are temporarily suppressing an anomaly or pattern, use this structure
     * to specify how long the suppression is to last.</p>
     */
    inline bool SuppressionPeriodHasBeenSet() const { return m_suppressionPeriodHasBeenSet; }

    /**
     * <p>If you are temporarily suppressing an anomaly or pattern, use this structure
     * to specify how long the suppression is to last.</p>
     */
    inline void SetSuppressionPeriod(const SuppressionPeriod& value) { m_suppressionPeriodHasBeenSet = true; m_suppressionPeriod = value; }

    /**
     * <p>If you are temporarily suppressing an anomaly or pattern, use this structure
     * to specify how long the suppression is to last.</p>
     */
    inline void SetSuppressionPeriod(SuppressionPeriod&& value) { m_suppressionPeriodHasBeenSet = true; m_suppressionPeriod = std::move(value); }

    /**
     * <p>If you are temporarily suppressing an anomaly or pattern, use this structure
     * to specify how long the suppression is to last.</p>
     */
    inline UpdateAnomalyRequest& WithSuppressionPeriod(const SuppressionPeriod& value) { SetSuppressionPeriod(value); return *this;}

    /**
     * <p>If you are temporarily suppressing an anomaly or pattern, use this structure
     * to specify how long the suppression is to last.</p>
     */
    inline UpdateAnomalyRequest& WithSuppressionPeriod(SuppressionPeriod&& value) { SetSuppressionPeriod(std::move(value)); return *this;}

  private:

    Aws::String m_anomalyId;
    bool m_anomalyIdHasBeenSet = false;

    Aws::String m_patternId;
    bool m_patternIdHasBeenSet = false;

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    SuppressionType m_suppressionType;
    bool m_suppressionTypeHasBeenSet = false;

    SuppressionPeriod m_suppressionPeriod;
    bool m_suppressionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
