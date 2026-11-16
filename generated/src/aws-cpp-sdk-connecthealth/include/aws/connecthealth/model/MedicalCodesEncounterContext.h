/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/EncounterType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Encounter context for a medical coding job. All fields are
 * optional.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodesEncounterContext">AWS
 * API Reference</a></p>
 */
class MedicalCodesEncounterContext {
 public:
  AWS_CONNECTHEALTH_API MedicalCodesEncounterContext() = default;
  AWS_CONNECTHEALTH_API MedicalCodesEncounterContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodesEncounterContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the encounter, either in person or telehealth.</p>
   */
  inline EncounterType GetEncounterType() const { return m_encounterType; }
  inline bool EncounterTypeHasBeenSet() const { return m_encounterTypeHasBeenSet; }
  inline void SetEncounterType(EncounterType value) {
    m_encounterTypeHasBeenSet = true;
    m_encounterType = value;
  }
  inline MedicalCodesEncounterContext& WithEncounterType(EncounterType value) {
    SetEncounterType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the encounter. The reason can contain letters, numbers,
   * spaces, periods, commas, and hyphens, and can't contain only spaces.</p>
   */
  inline const Aws::String& GetEncounterReason() const { return m_encounterReason; }
  inline bool EncounterReasonHasBeenSet() const { return m_encounterReasonHasBeenSet; }
  template <typename EncounterReasonT = Aws::String>
  void SetEncounterReason(EncounterReasonT&& value) {
    m_encounterReasonHasBeenSet = true;
    m_encounterReason = std::forward<EncounterReasonT>(value);
  }
  template <typename EncounterReasonT = Aws::String>
  MedicalCodesEncounterContext& WithEncounterReason(EncounterReasonT&& value) {
    SetEncounterReason(std::forward<EncounterReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the encounter took place outside regular business
   * hours.</p>
   */
  inline bool GetAfterHours() const { return m_afterHours; }
  inline bool AfterHoursHasBeenSet() const { return m_afterHoursHasBeenSet; }
  inline void SetAfterHours(bool value) {
    m_afterHoursHasBeenSet = true;
    m_afterHours = value;
  }
  inline MedicalCodesEncounterContext& WithAfterHours(bool value) {
    SetAfterHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date of the encounter, in YYYY-MM-DD format. The date can't be more than
   * one day after the current date in UTC.</p>
   */
  inline const Aws::String& GetEncounterDate() const { return m_encounterDate; }
  inline bool EncounterDateHasBeenSet() const { return m_encounterDateHasBeenSet; }
  template <typename EncounterDateT = Aws::String>
  void SetEncounterDate(EncounterDateT&& value) {
    m_encounterDateHasBeenSet = true;
    m_encounterDate = std::forward<EncounterDateT>(value);
  }
  template <typename EncounterDateT = Aws::String>
  MedicalCodesEncounterContext& WithEncounterDate(EncounterDateT&& value) {
    SetEncounterDate(std::forward<EncounterDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of the encounter, in minutes, from 1 to 1440.</p>
   */
  inline int GetEncounterDurationMinutes() const { return m_encounterDurationMinutes; }
  inline bool EncounterDurationMinutesHasBeenSet() const { return m_encounterDurationMinutesHasBeenSet; }
  inline void SetEncounterDurationMinutes(int value) {
    m_encounterDurationMinutesHasBeenSet = true;
    m_encounterDurationMinutes = value;
  }
  inline MedicalCodesEncounterContext& WithEncounterDurationMinutes(int value) {
    SetEncounterDurationMinutes(value);
    return *this;
  }
  ///@}
 private:
  EncounterType m_encounterType{EncounterType::NOT_SET};

  Aws::String m_encounterReason;

  bool m_afterHours{false};

  Aws::String m_encounterDate;

  int m_encounterDurationMinutes{0};
  bool m_encounterTypeHasBeenSet = false;
  bool m_encounterReasonHasBeenSet = false;
  bool m_afterHoursHasBeenSet = false;
  bool m_encounterDateHasBeenSet = false;
  bool m_encounterDurationMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
