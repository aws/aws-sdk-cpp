/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/EncounterType.h>
#include <aws/connecthealth/model/PatientStatus.h>
#include <aws/connecthealth/model/Sex.h>
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
 * <p>Patient and encounter context for medical code generation. Providing this
 * information can improve the accuracy of the medical codes. To provide it, you
 * must also set enabled to true in medicalCodeGenerationSettings. All fields are
 * optional. The service generates medical codes without any field that you leave
 * out.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodingContext">AWS
 * API Reference</a></p>
 */
class MedicalCodingContext {
 public:
  AWS_CONNECTHEALTH_API MedicalCodingContext() = default;
  AWS_CONNECTHEALTH_API MedicalCodingContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodingContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The sex of the patient.</p>
   */
  inline Sex GetSex() const { return m_sex; }
  inline bool SexHasBeenSet() const { return m_sexHasBeenSet; }
  inline void SetSex(Sex value) {
    m_sexHasBeenSet = true;
    m_sex = value;
  }
  inline MedicalCodingContext& WithSex(Sex value) {
    SetSex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the patient, either new or established.</p>
   */
  inline PatientStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PatientStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MedicalCodingContext& WithStatus(PatientStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date of birth of the patient, in YYYY-MM-DD format. The date can't be
   * after the current date in UTC.</p>
   */
  inline const Aws::String& GetDateOfBirth() const { return m_dateOfBirth; }
  inline bool DateOfBirthHasBeenSet() const { return m_dateOfBirthHasBeenSet; }
  template <typename DateOfBirthT = Aws::String>
  void SetDateOfBirth(DateOfBirthT&& value) {
    m_dateOfBirthHasBeenSet = true;
    m_dateOfBirth = std::forward<DateOfBirthT>(value);
  }
  template <typename DateOfBirthT = Aws::String>
  MedicalCodingContext& WithDateOfBirth(DateOfBirthT&& value) {
    SetDateOfBirth(std::forward<DateOfBirthT>(value));
    return *this;
  }
  ///@}

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
  inline MedicalCodingContext& WithEncounterType(EncounterType value) {
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
  MedicalCodingContext& WithEncounterReason(EncounterReasonT&& value) {
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
  inline MedicalCodingContext& WithAfterHours(bool value) {
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
  MedicalCodingContext& WithEncounterDate(EncounterDateT&& value) {
    SetEncounterDate(std::forward<EncounterDateT>(value));
    return *this;
  }
  ///@}
 private:
  Sex m_sex{Sex::NOT_SET};

  PatientStatus m_status{PatientStatus::NOT_SET};

  Aws::String m_dateOfBirth;

  EncounterType m_encounterType{EncounterType::NOT_SET};

  Aws::String m_encounterReason;

  bool m_afterHours{false};

  Aws::String m_encounterDate;
  bool m_sexHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_dateOfBirthHasBeenSet = false;
  bool m_encounterTypeHasBeenSet = false;
  bool m_encounterReasonHasBeenSet = false;
  bool m_afterHoursHasBeenSet = false;
  bool m_encounterDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
