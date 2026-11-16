/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ClinicalNoteGenerationSettingsResponse.h>
#include <aws/connecthealth/model/MedicalCodeGenerationSettingsResponse.h>
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
 * <p>Response containing settings for post-stream actions</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribePostStreamActionSettingsResponse">AWS
 * API Reference</a></p>
 */
class MedicalScribePostStreamActionSettingsResponse {
 public:
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionSettingsResponse() = default;
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionSettingsResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionSettingsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetOutputS3Uri() const { return m_outputS3Uri; }
  inline bool OutputS3UriHasBeenSet() const { return m_outputS3UriHasBeenSet; }
  template <typename OutputS3UriT = Aws::String>
  void SetOutputS3Uri(OutputS3UriT&& value) {
    m_outputS3UriHasBeenSet = true;
    m_outputS3Uri = std::forward<OutputS3UriT>(value);
  }
  template <typename OutputS3UriT = Aws::String>
  MedicalScribePostStreamActionSettingsResponse& WithOutputS3Uri(OutputS3UriT&& value) {
    SetOutputS3Uri(std::forward<OutputS3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for clinical note generation</p>
   */
  inline const ClinicalNoteGenerationSettingsResponse& GetClinicalNoteGenerationSettings() const {
    return m_clinicalNoteGenerationSettings;
  }
  inline bool ClinicalNoteGenerationSettingsHasBeenSet() const { return m_clinicalNoteGenerationSettingsHasBeenSet; }
  template <typename ClinicalNoteGenerationSettingsT = ClinicalNoteGenerationSettingsResponse>
  void SetClinicalNoteGenerationSettings(ClinicalNoteGenerationSettingsT&& value) {
    m_clinicalNoteGenerationSettingsHasBeenSet = true;
    m_clinicalNoteGenerationSettings = std::forward<ClinicalNoteGenerationSettingsT>(value);
  }
  template <typename ClinicalNoteGenerationSettingsT = ClinicalNoteGenerationSettingsResponse>
  MedicalScribePostStreamActionSettingsResponse& WithClinicalNoteGenerationSettings(ClinicalNoteGenerationSettingsT&& value) {
    SetClinicalNoteGenerationSettings(std::forward<ClinicalNoteGenerationSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for medical code generation. Returned only if you specified
   * medicalCodeGenerationSettings when you started the session.</p>
   */
  inline const MedicalCodeGenerationSettingsResponse& GetMedicalCodeGenerationSettings() const { return m_medicalCodeGenerationSettings; }
  inline bool MedicalCodeGenerationSettingsHasBeenSet() const { return m_medicalCodeGenerationSettingsHasBeenSet; }
  template <typename MedicalCodeGenerationSettingsT = MedicalCodeGenerationSettingsResponse>
  void SetMedicalCodeGenerationSettings(MedicalCodeGenerationSettingsT&& value) {
    m_medicalCodeGenerationSettingsHasBeenSet = true;
    m_medicalCodeGenerationSettings = std::forward<MedicalCodeGenerationSettingsT>(value);
  }
  template <typename MedicalCodeGenerationSettingsT = MedicalCodeGenerationSettingsResponse>
  MedicalScribePostStreamActionSettingsResponse& WithMedicalCodeGenerationSettings(MedicalCodeGenerationSettingsT&& value) {
    SetMedicalCodeGenerationSettings(std::forward<MedicalCodeGenerationSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputS3Uri;

  ClinicalNoteGenerationSettingsResponse m_clinicalNoteGenerationSettings;

  MedicalCodeGenerationSettingsResponse m_medicalCodeGenerationSettings;
  bool m_outputS3UriHasBeenSet = false;
  bool m_clinicalNoteGenerationSettingsHasBeenSet = false;
  bool m_medicalCodeGenerationSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
