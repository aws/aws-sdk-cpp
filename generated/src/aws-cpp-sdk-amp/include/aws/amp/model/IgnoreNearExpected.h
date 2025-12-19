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
 * <p>Configuration for threshold settings that determine when values near expected
 * values should be ignored during anomaly detection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/IgnoreNearExpected">AWS
 * API Reference</a></p>
 */
class IgnoreNearExpected {
 public:
  AWS_PROMETHEUSSERVICE_API IgnoreNearExpected() = default;
  AWS_PROMETHEUSSERVICE_API IgnoreNearExpected(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API IgnoreNearExpected& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The absolute amount by which values can differ from expected values before
   * being considered anomalous.</p>
   */
  inline double GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  inline void SetAmount(double value) {
    m_amountHasBeenSet = true;
    m_amount = value;
  }
  inline IgnoreNearExpected& WithAmount(double value) {
    SetAmount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ratio by which values can differ from expected values before being
   * considered anomalous.</p>
   */
  inline double GetRatio() const { return m_ratio; }
  inline bool RatioHasBeenSet() const { return m_ratioHasBeenSet; }
  inline void SetRatio(double value) {
    m_ratioHasBeenSet = true;
    m_ratio = value;
  }
  inline IgnoreNearExpected& WithRatio(double value) {
    SetRatio(value);
    return *this;
  }
  ///@}
 private:
  double m_amount{0.0};

  double m_ratio{0.0};
  bool m_amountHasBeenSet = false;
  bool m_ratioHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
