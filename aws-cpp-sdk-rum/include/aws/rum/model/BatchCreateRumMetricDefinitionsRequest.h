/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/MetricDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rum/model/MetricDefinitionRequest.h>
#include <utility>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class BatchCreateRumMetricDefinitionsRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API BatchCreateRumMetricDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateRumMetricDefinitions"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the CloudWatch RUM app monitor that is to send the metrics.</p>
     */
    inline const Aws::String& GetAppMonitorName() const{ return m_appMonitorName; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is to send the metrics.</p>
     */
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is to send the metrics.</p>
     */
    inline void SetAppMonitorName(const Aws::String& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = value; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is to send the metrics.</p>
     */
    inline void SetAppMonitorName(Aws::String&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::move(value); }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is to send the metrics.</p>
     */
    inline void SetAppMonitorName(const char* value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName.assign(value); }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is to send the metrics.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithAppMonitorName(const Aws::String& value) { SetAppMonitorName(value); return *this;}

    /**
     * <p>The name of the CloudWatch RUM app monitor that is to send the metrics.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithAppMonitorName(Aws::String&& value) { SetAppMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch RUM app monitor that is to send the metrics.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithAppMonitorName(const char* value) { SetAppMonitorName(value); return *this;}


    /**
     * <p>The destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that will receive the metrics and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline const MetricDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that will receive the metrics and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that will receive the metrics and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline void SetDestination(const MetricDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that will receive the metrics and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline void SetDestination(MetricDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that will receive the metrics and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithDestination(const MetricDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that will receive the metrics and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithDestination(MetricDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>An array of structures which define the metrics that you want to send.</p>
     */
    inline const Aws::Vector<MetricDefinitionRequest>& GetMetricDefinitions() const{ return m_metricDefinitions; }

    /**
     * <p>An array of structures which define the metrics that you want to send.</p>
     */
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }

    /**
     * <p>An array of structures which define the metrics that you want to send.</p>
     */
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinitionRequest>& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = value; }

    /**
     * <p>An array of structures which define the metrics that you want to send.</p>
     */
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinitionRequest>&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::move(value); }

    /**
     * <p>An array of structures which define the metrics that you want to send.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithMetricDefinitions(const Aws::Vector<MetricDefinitionRequest>& value) { SetMetricDefinitions(value); return *this;}

    /**
     * <p>An array of structures which define the metrics that you want to send.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& WithMetricDefinitions(Aws::Vector<MetricDefinitionRequest>&& value) { SetMetricDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of structures which define the metrics that you want to send.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& AddMetricDefinitions(const MetricDefinitionRequest& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of structures which define the metrics that you want to send.</p>
     */
    inline BatchCreateRumMetricDefinitionsRequest& AddMetricDefinitions(MetricDefinitionRequest&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    MetricDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::Vector<MetricDefinitionRequest> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
