/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/MWAARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa/model/MetricDatum.h>
#include <utility>

namespace Aws
{
namespace MWAA
{
namespace Model
{

  /**
   */
  class AWS_MWAA_API PublishMetricsRequest : public MWAARequest
  {
  public:
    PublishMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishMetrics"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Publishes environment metric data to Amazon CloudWatch.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>Publishes environment metric data to Amazon CloudWatch.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>Publishes environment metric data to Amazon CloudWatch.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>Publishes environment metric data to Amazon CloudWatch.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>Publishes environment metric data to Amazon CloudWatch.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>Publishes environment metric data to Amazon CloudWatch.</p>
     */
    inline PublishMetricsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>Publishes environment metric data to Amazon CloudWatch.</p>
     */
    inline PublishMetricsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>Publishes environment metric data to Amazon CloudWatch.</p>
     */
    inline PublishMetricsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
     * data points with the specified metrica.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricData() const{ return m_metricData; }

    /**
     * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
     * data points with the specified metrica.</p>
     */
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }

    /**
     * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
     * data points with the specified metrica.</p>
     */
    inline void SetMetricData(const Aws::Vector<MetricDatum>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    /**
     * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
     * data points with the specified metrica.</p>
     */
    inline void SetMetricData(Aws::Vector<MetricDatum>&& value) { m_metricDataHasBeenSet = true; m_metricData = std::move(value); }

    /**
     * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
     * data points with the specified metrica.</p>
     */
    inline PublishMetricsRequest& WithMetricData(const Aws::Vector<MetricDatum>& value) { SetMetricData(value); return *this;}

    /**
     * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
     * data points with the specified metrica.</p>
     */
    inline PublishMetricsRequest& WithMetricData(Aws::Vector<MetricDatum>&& value) { SetMetricData(std::move(value)); return *this;}

    /**
     * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
     * data points with the specified metrica.</p>
     */
    inline PublishMetricsRequest& AddMetricData(const MetricDatum& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

    /**
     * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
     * data points with the specified metrica.</p>
     */
    inline PublishMetricsRequest& AddMetricData(MetricDatum&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::Vector<MetricDatum> m_metricData;
    bool m_metricDataHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
