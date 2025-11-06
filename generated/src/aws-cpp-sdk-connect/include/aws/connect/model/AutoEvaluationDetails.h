/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AutoEvaluationStatus.h>

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
 * <p>Details about automated evaluations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AutoEvaluationDetails">AWS
 * API Reference</a></p>
 */
class AutoEvaluationDetails {
 public:
  AWS_CONNECT_API AutoEvaluationDetails() = default;
  AWS_CONNECT_API AutoEvaluationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AutoEvaluationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether automated evaluation is enabled.</p>
   */
  inline bool GetAutoEvaluationEnabled() const { return m_autoEvaluationEnabled; }
  inline bool AutoEvaluationEnabledHasBeenSet() const { return m_autoEvaluationEnabledHasBeenSet; }
  inline void SetAutoEvaluationEnabled(bool value) {
    m_autoEvaluationEnabledHasBeenSet = true;
    m_autoEvaluationEnabled = value;
  }
  inline AutoEvaluationDetails& WithAutoEvaluationEnabled(bool value) {
    SetAutoEvaluationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the contact auto-evaluation. </p>
   */
  inline AutoEvaluationStatus GetAutoEvaluationStatus() const { return m_autoEvaluationStatus; }
  inline bool AutoEvaluationStatusHasBeenSet() const { return m_autoEvaluationStatusHasBeenSet; }
  inline void SetAutoEvaluationStatus(AutoEvaluationStatus value) {
    m_autoEvaluationStatusHasBeenSet = true;
    m_autoEvaluationStatus = value;
  }
  inline AutoEvaluationDetails& WithAutoEvaluationStatus(AutoEvaluationStatus value) {
    SetAutoEvaluationStatus(value);
    return *this;
  }
  ///@}
 private:
  bool m_autoEvaluationEnabled{false};
  bool m_autoEvaluationEnabledHasBeenSet = false;

  AutoEvaluationStatus m_autoEvaluationStatus{AutoEvaluationStatus::NOT_SET};
  bool m_autoEvaluationStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
