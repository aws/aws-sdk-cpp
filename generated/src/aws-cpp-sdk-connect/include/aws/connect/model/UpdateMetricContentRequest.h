/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricCalculation.h>
#include <aws/connect/model/MetricUnit.h>
#include <aws/connect/model/TrendIndicator.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateMetricContentRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateMetricContentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMetricContent"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UpdateMetricContentRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the metric to update. Adding the <code>$SAVED</code>
   * qualifier will update the saved version of the metric. Adding
   * <code>$LATEST</code> or omitting a qualifier will update the published
   * version.</p>
   */
  inline const Aws::String& GetMetricId() const { return m_metricId; }
  inline bool MetricIdHasBeenSet() const { return m_metricIdHasBeenSet; }
  template <typename MetricIdT = Aws::String>
  void SetMetricId(MetricIdT&& value) {
    m_metricIdHasBeenSet = true;
    m_metricId = std::forward<MetricIdT>(value);
  }
  template <typename MetricIdT = Aws::String>
  UpdateMetricContentRequest& WithMetricId(MetricIdT&& value) {
    SetMetricId(std::forward<MetricIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated calculation definition for the metric.</p>
   */
  inline const MetricCalculation& GetMetricCalculation() const { return m_metricCalculation; }
  inline bool MetricCalculationHasBeenSet() const { return m_metricCalculationHasBeenSet; }
  template <typename MetricCalculationT = MetricCalculation>
  void SetMetricCalculation(MetricCalculationT&& value) {
    m_metricCalculationHasBeenSet = true;
    m_metricCalculation = std::forward<MetricCalculationT>(value);
  }
  template <typename MetricCalculationT = MetricCalculation>
  UpdateMetricContentRequest& WithMetricCalculation(MetricCalculationT&& value) {
    SetMetricCalculation(std::forward<MetricCalculationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated display unit for the metric.</p>
   */
  inline MetricUnit GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  inline void SetUnit(MetricUnit value) {
    m_unitHasBeenSet = true;
    m_unit = value;
  }
  inline UpdateMetricContentRequest& WithUnit(MetricUnit value) {
    SetUnit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How an increase in the metric value should be interpreted. Valid values:
   * <code>POSITIVE</code>, <code>NEUTRAL</code>, <code>NEGATIVE</code>.</p>
   */
  inline TrendIndicator GetPositiveTrendIndicator() const { return m_positiveTrendIndicator; }
  inline bool PositiveTrendIndicatorHasBeenSet() const { return m_positiveTrendIndicatorHasBeenSet; }
  inline void SetPositiveTrendIndicator(TrendIndicator value) {
    m_positiveTrendIndicatorHasBeenSet = true;
    m_positiveTrendIndicator = value;
  }
  inline UpdateMetricContentRequest& WithPositiveTrendIndicator(TrendIndicator value) {
    SetPositiveTrendIndicator(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_metricId;

  MetricCalculation m_metricCalculation;

  MetricUnit m_unit{MetricUnit::NOT_SET};

  TrendIndicator m_positiveTrendIndicator{TrendIndicator::NOT_SET};
  bool m_instanceIdHasBeenSet = false;
  bool m_metricIdHasBeenSet = false;
  bool m_metricCalculationHasBeenSet = false;
  bool m_unitHasBeenSet = false;
  bool m_positiveTrendIndicatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
