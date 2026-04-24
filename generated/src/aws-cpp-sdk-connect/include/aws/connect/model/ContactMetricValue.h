/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
 * <p>Contains the numeric value of a contact metric result.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactMetricValue">AWS
 * API Reference</a></p>
 */
class ContactMetricValue {
 public:
  AWS_CONNECT_API ContactMetricValue() = default;
  AWS_CONNECT_API ContactMetricValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactMetricValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The numeric value of the metric result. For POSITION_IN_QUEUE, this
   * represents the contact's current position in the queue (e.g., 3.00 means third
   * in line). For ESTIMATED_WAIT_TIME, this represents the predicted wait time in
   * seconds (e.g., 120.00 means approximately 2 minutes).</p>
   */
  inline double GetNumber() const { return m_number; }
  inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
  inline void SetNumber(double value) {
    m_numberHasBeenSet = true;
    m_number = value;
  }
  inline ContactMetricValue& WithNumber(double value) {
    SetNumber(value);
    return *this;
  }
  ///@}
 private:
  double m_number{0.0};
  bool m_numberHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
