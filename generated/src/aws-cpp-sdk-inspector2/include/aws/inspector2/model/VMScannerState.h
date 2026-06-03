/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/VMScannerStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The state of the Amazon Inspector VM scanner.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/VMScannerState">AWS
 * API Reference</a></p>
 */
class VMScannerState {
 public:
  AWS_INSPECTOR2_API VMScannerState() = default;
  AWS_INSPECTOR2_API VMScannerState(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API VMScannerState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the VM scanner is activated.</p>
   */
  inline bool GetActivated() const { return m_activated; }
  inline bool ActivatedHasBeenSet() const { return m_activatedHasBeenSet; }
  inline void SetActivated(bool value) {
    m_activatedHasBeenSet = true;
    m_activated = value;
  }
  inline VMScannerState& WithActivated(bool value) {
    SetActivated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the VM scanner was activated.</p>
   */
  inline const Aws::Utils::DateTime& GetActivatedAt() const { return m_activatedAt; }
  inline bool ActivatedAtHasBeenSet() const { return m_activatedAtHasBeenSet; }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  void SetActivatedAt(ActivatedAtT&& value) {
    m_activatedAtHasBeenSet = true;
    m_activatedAt = std::forward<ActivatedAtT>(value);
  }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  VMScannerState& WithActivatedAt(ActivatedAtT&& value) {
    SetActivatedAt(std::forward<ActivatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the VM scanner.</p>
   */
  inline VMScannerStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(VMScannerStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline VMScannerState& WithStatus(VMScannerStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  bool m_activated{false};

  Aws::Utils::DateTime m_activatedAt{};

  VMScannerStatus m_status{VMScannerStatus::NOT_SET};
  bool m_activatedHasBeenSet = false;
  bool m_activatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
