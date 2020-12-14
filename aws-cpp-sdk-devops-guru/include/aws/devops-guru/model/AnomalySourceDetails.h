/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/CloudWatchMetricsDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Details about the source of the anomalous operational data that triggered
   * the anomaly. The one supported source is Amazon CloudWatch metrics.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AnomalySourceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API AnomalySourceDetails
  {
  public:
    AnomalySourceDetails();
    AnomalySourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AnomalySourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> object that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline const Aws::Vector<CloudWatchMetricsDetail>& GetCloudWatchMetrics() const{ return m_cloudWatchMetrics; }

    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> object that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline bool CloudWatchMetricsHasBeenSet() const { return m_cloudWatchMetricsHasBeenSet; }

    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> object that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline void SetCloudWatchMetrics(const Aws::Vector<CloudWatchMetricsDetail>& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = value; }

    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> object that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline void SetCloudWatchMetrics(Aws::Vector<CloudWatchMetricsDetail>&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = std::move(value); }

    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> object that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline AnomalySourceDetails& WithCloudWatchMetrics(const Aws::Vector<CloudWatchMetricsDetail>& value) { SetCloudWatchMetrics(value); return *this;}

    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> object that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline AnomalySourceDetails& WithCloudWatchMetrics(Aws::Vector<CloudWatchMetricsDetail>&& value) { SetCloudWatchMetrics(std::move(value)); return *this;}

    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> object that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline AnomalySourceDetails& AddCloudWatchMetrics(const CloudWatchMetricsDetail& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.push_back(value); return *this; }

    /**
     * <p> An array of <code>CloudWatchMetricsDetail</code> object that contains
     * information about the analyzed metrics that displayed anomalous behavior. </p>
     */
    inline AnomalySourceDetails& AddCloudWatchMetrics(CloudWatchMetricsDetail&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CloudWatchMetricsDetail> m_cloudWatchMetrics;
    bool m_cloudWatchMetricsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
