/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/Pronouns.h>
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
 * <p>Details for a patient</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/PatientInsightsPatientContext">AWS
 * API Reference</a></p>
 */
class PatientInsightsPatientContext {
 public:
  AWS_CONNECTHEALTH_API PatientInsightsPatientContext() = default;
  AWS_CONNECTHEALTH_API PatientInsightsPatientContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API PatientInsightsPatientContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the patient</p>
   */
  inline const Aws::String& GetPatientId() const { return m_patientId; }
  inline bool PatientIdHasBeenSet() const { return m_patientIdHasBeenSet; }
  template <typename PatientIdT = Aws::String>
  void SetPatientId(PatientIdT&& value) {
    m_patientIdHasBeenSet = true;
    m_patientId = std::forward<PatientIdT>(value);
  }
  template <typename PatientIdT = Aws::String>
  PatientInsightsPatientContext& WithPatientId(PatientIdT&& value) {
    SetPatientId(std::forward<PatientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Date of birth of the patient.</p>
   */
  inline const Aws::String& GetDateOfBirth() const { return m_dateOfBirth; }
  inline bool DateOfBirthHasBeenSet() const { return m_dateOfBirthHasBeenSet; }
  template <typename DateOfBirthT = Aws::String>
  void SetDateOfBirth(DateOfBirthT&& value) {
    m_dateOfBirthHasBeenSet = true;
    m_dateOfBirth = std::forward<DateOfBirthT>(value);
  }
  template <typename DateOfBirthT = Aws::String>
  PatientInsightsPatientContext& WithDateOfBirth(DateOfBirthT&& value) {
    SetDateOfBirth(std::forward<DateOfBirthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pronouns preferred by the patient.</p>
   */
  inline Pronouns GetPronouns() const { return m_pronouns; }
  inline bool PronounsHasBeenSet() const { return m_pronounsHasBeenSet; }
  inline void SetPronouns(Pronouns value) {
    m_pronounsHasBeenSet = true;
    m_pronouns = value;
  }
  inline PatientInsightsPatientContext& WithPronouns(Pronouns value) {
    SetPronouns(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_patientId;

  Aws::String m_dateOfBirth;

  Pronouns m_pronouns{Pronouns::NOT_SET};
  bool m_patientIdHasBeenSet = false;
  bool m_dateOfBirthHasBeenSet = false;
  bool m_pronounsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
