/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
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
 * <p>Patient context for a medical coding job. All fields are
 * optional.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodesPatientContext">AWS
 * API Reference</a></p>
 */
class MedicalCodesPatientContext {
 public:
  AWS_CONNECTHEALTH_API MedicalCodesPatientContext() = default;
  AWS_CONNECTHEALTH_API MedicalCodesPatientContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodesPatientContext& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline MedicalCodesPatientContext& WithSex(Sex value) {
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
  inline MedicalCodesPatientContext& WithStatus(PatientStatus value) {
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
  MedicalCodesPatientContext& WithDateOfBirth(DateOfBirthT&& value) {
    SetDateOfBirth(std::forward<DateOfBirthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The insurance of the patient.</p>
   */
  inline const Aws::String& GetInsurance() const { return m_insurance; }
  inline bool InsuranceHasBeenSet() const { return m_insuranceHasBeenSet; }
  template <typename InsuranceT = Aws::String>
  void SetInsurance(InsuranceT&& value) {
    m_insuranceHasBeenSet = true;
    m_insurance = std::forward<InsuranceT>(value);
  }
  template <typename InsuranceT = Aws::String>
  MedicalCodesPatientContext& WithInsurance(InsuranceT&& value) {
    SetInsurance(std::forward<InsuranceT>(value));
    return *this;
  }
  ///@}
 private:
  Sex m_sex{Sex::NOT_SET};

  PatientStatus m_status{PatientStatus::NOT_SET};

  Aws::String m_dateOfBirth;

  Aws::String m_insurance;
  bool m_sexHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_dateOfBirthHasBeenSet = false;
  bool m_insuranceHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
