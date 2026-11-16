/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ClinicalNoteGenerationResult.h>
#include <aws/connecthealth/model/MedicalCodeGenerationResult.h>

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
 * <p>Results of post-stream actions performed after the audio stream
 * ended</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribePostStreamActionsResult">AWS
 * API Reference</a></p>
 */
class MedicalScribePostStreamActionsResult {
 public:
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionsResult() = default;
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionsResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Results of clinical note generation</p>
   */
  inline const ClinicalNoteGenerationResult& GetClinicalNoteGenerationResult() const { return m_clinicalNoteGenerationResult; }
  inline bool ClinicalNoteGenerationResultHasBeenSet() const { return m_clinicalNoteGenerationResultHasBeenSet; }
  template <typename ClinicalNoteGenerationResultT = ClinicalNoteGenerationResult>
  void SetClinicalNoteGenerationResult(ClinicalNoteGenerationResultT&& value) {
    m_clinicalNoteGenerationResultHasBeenSet = true;
    m_clinicalNoteGenerationResult = std::forward<ClinicalNoteGenerationResultT>(value);
  }
  template <typename ClinicalNoteGenerationResultT = ClinicalNoteGenerationResult>
  MedicalScribePostStreamActionsResult& WithClinicalNoteGenerationResult(ClinicalNoteGenerationResultT&& value) {
    SetClinicalNoteGenerationResult(std::forward<ClinicalNoteGenerationResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Results of medical code generation. Returned if medical code generation runs
   * for the session. Not returned if you set enabled to false in
   * medicalCodeGenerationSettings.</p>
   */
  inline const MedicalCodeGenerationResult& GetMedicalCodeGenerationResult() const { return m_medicalCodeGenerationResult; }
  inline bool MedicalCodeGenerationResultHasBeenSet() const { return m_medicalCodeGenerationResultHasBeenSet; }
  template <typename MedicalCodeGenerationResultT = MedicalCodeGenerationResult>
  void SetMedicalCodeGenerationResult(MedicalCodeGenerationResultT&& value) {
    m_medicalCodeGenerationResultHasBeenSet = true;
    m_medicalCodeGenerationResult = std::forward<MedicalCodeGenerationResultT>(value);
  }
  template <typename MedicalCodeGenerationResultT = MedicalCodeGenerationResult>
  MedicalScribePostStreamActionsResult& WithMedicalCodeGenerationResult(MedicalCodeGenerationResultT&& value) {
    SetMedicalCodeGenerationResult(std::forward<MedicalCodeGenerationResultT>(value));
    return *this;
  }
  ///@}
 private:
  ClinicalNoteGenerationResult m_clinicalNoteGenerationResult;

  MedicalCodeGenerationResult m_medicalCodeGenerationResult;
  bool m_clinicalNoteGenerationResultHasBeenSet = false;
  bool m_medicalCodeGenerationResultHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
