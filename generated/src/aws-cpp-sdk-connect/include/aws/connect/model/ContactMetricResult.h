/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactMetricName.h>
#include <aws/connect/model/ContactMetricValue.h>

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
 * <p>Contains the result of a requested metric for the contact. This object is
 * returned as part of the GetContactMetrics response and includes both the metric
 * name and its calculated value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactMetricResult">AWS
 * API Reference</a></p>
 */
class ContactMetricResult {
 public:
  AWS_CONNECT_API ContactMetricResult() = default;
  AWS_CONNECT_API ContactMetricResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the metric that was retrieved. This corresponds to the metric
   * name specified in the request, such as POSITION_IN_QUEUE or
   * ESTIMATED_WAIT_TIME.</p>
   */
  inline ContactMetricName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(ContactMetricName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline ContactMetricResult& WithName(ContactMetricName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calculated value for the requested metric. This object contains the
   * numeric result based on the contact's current state in the queue.</p>
   */
  inline const ContactMetricValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = ContactMetricValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = ContactMetricValue>
  ContactMetricResult& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  ContactMetricName m_name{ContactMetricName::NOT_SET};

  ContactMetricValue m_value;
  bool m_nameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
