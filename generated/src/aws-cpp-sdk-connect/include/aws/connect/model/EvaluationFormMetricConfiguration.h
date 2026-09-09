/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormMetricType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about the metric configuration for an evaluation form question.
 * Use this to associate a business outcome metric with a question.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormMetricConfiguration">AWS
 * API Reference</a></p>
 */
class EvaluationFormMetricConfiguration {
 public:
  AWS_CONNECT_API EvaluationFormMetricConfiguration() = default;
  AWS_CONNECT_API EvaluationFormMetricConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormMetricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of metric. Currently, only <code>BUSINESS_OUTCOME</code> is
   * supported.</p>
   */
  inline EvaluationFormMetricType GetMetricType() const { return m_metricType; }
  inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }
  inline void SetMetricType(EvaluationFormMetricType value) {
    m_metricTypeHasBeenSet = true;
    m_metricType = value;
  }
  inline EvaluationFormMetricConfiguration& WithMetricType(EvaluationFormMetricType value) {
    SetMetricType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the metric. Valid values are:</p> <ul> <li> <p>
   * <code>SALE_SUCCESS</code> – Sale success.</p> </li> <li> <p> <code>CSAT</code> –
   * Customer satisfaction.</p> </li> <li> <p> <code>CHURN_PROPENSITY</code> – Churn
   * propensity.</p> </li> <li> <p> <code>SELF_SERVICE_SUCCESS</code> – Self-service
   * success.</p> </li> <li> <p> <code>PARTIAL_SELF_SERVICE_SUCCESS</code> – Partial
   * self-service success.</p> </li> </ul>
   */
  inline const Aws::String& GetMetricName() const { return m_metricName; }
  inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
  template <typename MetricNameT = Aws::String>
  void SetMetricName(MetricNameT&& value) {
    m_metricNameHasBeenSet = true;
    m_metricName = std::forward<MetricNameT>(value);
  }
  template <typename MetricNameT = Aws::String>
  EvaluationFormMetricConfiguration& WithMetricName(MetricNameT&& value) {
    SetMetricName(std::forward<MetricNameT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormMetricType m_metricType{EvaluationFormMetricType::NOT_SET};

  Aws::String m_metricName;
  bool m_metricTypeHasBeenSet = false;
  bool m_metricNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
