/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PrometheusService {
namespace Model {

/**
 * <p>Specifies the action to take when data is missing during anomaly detection
 * evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/AnomalyDetectorMissingDataAction">AWS
 * API Reference</a></p>
 */
class AnomalyDetectorMissingDataAction {
 public:
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorMissingDataAction() = default;
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorMissingDataAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorMissingDataAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Marks missing data points as anomalies.</p>
   */
  inline bool GetMarkAsAnomaly() const { return m_markAsAnomaly; }
  inline bool MarkAsAnomalyHasBeenSet() const { return m_markAsAnomalyHasBeenSet; }
  inline void SetMarkAsAnomaly(bool value) {
    m_markAsAnomalyHasBeenSet = true;
    m_markAsAnomaly = value;
  }
  inline AnomalyDetectorMissingDataAction& WithMarkAsAnomaly(bool value) {
    SetMarkAsAnomaly(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Skips evaluation when data is missing.</p>
   */
  inline bool GetSkip() const { return m_skip; }
  inline bool SkipHasBeenSet() const { return m_skipHasBeenSet; }
  inline void SetSkip(bool value) {
    m_skipHasBeenSet = true;
    m_skip = value;
  }
  inline AnomalyDetectorMissingDataAction& WithSkip(bool value) {
    SetSkip(value);
    return *this;
  }
  ///@}
 private:
  bool m_markAsAnomaly{false};
  bool m_markAsAnomalyHasBeenSet = false;

  bool m_skip{false};
  bool m_skipHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
