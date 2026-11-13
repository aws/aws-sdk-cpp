/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyMetricCategoryRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyMetricCategoryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyMetricCategory"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the metric category.</p>
   */
  inline const Aws::String& GetMetricCategoryId() const { return m_metricCategoryId; }
  inline bool MetricCategoryIdHasBeenSet() const { return m_metricCategoryIdHasBeenSet; }
  template <typename MetricCategoryIdT = Aws::String>
  void SetMetricCategoryId(MetricCategoryIdT&& value) {
    m_metricCategoryIdHasBeenSet = true;
    m_metricCategoryId = std::forward<MetricCategoryIdT>(value);
  }
  template <typename MetricCategoryIdT = Aws::String>
  ModifyMetricCategoryRequest& WithMetricCategoryId(MetricCategoryIdT&& value) {
    SetMetricCategoryId(std::forward<MetricCategoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the metrics for the metric category. These metrics replace the
   * existing metrics, and must differ from the current set.</p> <p>Specify each
   * metric by its Amazon CloudWatch metric name or its OpenTelemetry metric name.
   * The two names for a measurement are separate entries, and you can include
   * both.</p> <p>In Regions where Amazon CloudWatch OpenTelemetry metrics aren't
   * available, you can't specify OpenTelemetry metric names.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = Aws::Vector<Aws::String>>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = Aws::Vector<Aws::String>>
  ModifyMetricCategoryRequest& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  template <typename MetricsT = Aws::String>
  ModifyMetricCategoryRequest& AddMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics.emplace_back(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyMetricCategoryRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_metricCategoryId;

  Aws::Vector<Aws::String> m_metrics;

  bool m_dryRun{false};
  bool m_metricCategoryIdHasBeenSet = false;
  bool m_metricsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
