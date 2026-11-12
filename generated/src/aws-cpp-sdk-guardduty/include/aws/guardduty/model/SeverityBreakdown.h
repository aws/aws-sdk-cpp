/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains the number of findings at each severity level.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SeverityBreakdown">AWS
 * API Reference</a></p>
 */
class SeverityBreakdown {
 public:
  AWS_GUARDDUTY_API SeverityBreakdown() = default;
  AWS_GUARDDUTY_API SeverityBreakdown(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API SeverityBreakdown& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of findings that have Critical severity.</p>
   */
  inline int GetCritical() const { return m_critical; }
  inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
  inline void SetCritical(int value) {
    m_criticalHasBeenSet = true;
    m_critical = value;
  }
  inline SeverityBreakdown& WithCritical(int value) {
    SetCritical(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings that have High severity.</p>
   */
  inline int GetHigh() const { return m_high; }
  inline bool HighHasBeenSet() const { return m_highHasBeenSet; }
  inline void SetHigh(int value) {
    m_highHasBeenSet = true;
    m_high = value;
  }
  inline SeverityBreakdown& WithHigh(int value) {
    SetHigh(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings that have Medium severity.</p>
   */
  inline int GetMedium() const { return m_medium; }
  inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }
  inline void SetMedium(int value) {
    m_mediumHasBeenSet = true;
    m_medium = value;
  }
  inline SeverityBreakdown& WithMedium(int value) {
    SetMedium(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings that have Low severity.</p>
   */
  inline int GetLow() const { return m_low; }
  inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }
  inline void SetLow(int value) {
    m_lowHasBeenSet = true;
    m_low = value;
  }
  inline SeverityBreakdown& WithLow(int value) {
    SetLow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings that have Info severity.</p>
   */
  inline int GetInfo() const { return m_info; }
  inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
  inline void SetInfo(int value) {
    m_infoHasBeenSet = true;
    m_info = value;
  }
  inline SeverityBreakdown& WithInfo(int value) {
    SetInfo(value);
    return *this;
  }
  ///@}
 private:
  int m_critical{0};

  int m_high{0};

  int m_medium{0};

  int m_low{0};

  int m_info{0};
  bool m_criticalHasBeenSet = false;
  bool m_highHasBeenSet = false;
  bool m_mediumHasBeenSet = false;
  bool m_lowHasBeenSet = false;
  bool m_infoHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
