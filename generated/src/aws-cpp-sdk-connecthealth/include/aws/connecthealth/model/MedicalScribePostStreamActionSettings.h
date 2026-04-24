/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ClinicalNoteGenerationSettings.h>
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
 * <p>Settings for actions to perform after the audio stream ends</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribePostStreamActionSettings">AWS
 * API Reference</a></p>
 */
class MedicalScribePostStreamActionSettings {
 public:
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionSettings() = default;
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribePostStreamActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  MedicalScribePostStreamActionSettings& WithOutputS3Uri(OutputS3UriT&& value) {
    SetOutputS3Uri(std::forward<OutputS3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for clinical note generation</p>
   */
  inline const ClinicalNoteGenerationSettings& GetClinicalNoteGenerationSettings() const { return m_clinicalNoteGenerationSettings; }
  inline bool ClinicalNoteGenerationSettingsHasBeenSet() const { return m_clinicalNoteGenerationSettingsHasBeenSet; }
  template <typename ClinicalNoteGenerationSettingsT = ClinicalNoteGenerationSettings>
  void SetClinicalNoteGenerationSettings(ClinicalNoteGenerationSettingsT&& value) {
    m_clinicalNoteGenerationSettingsHasBeenSet = true;
    m_clinicalNoteGenerationSettings = std::forward<ClinicalNoteGenerationSettingsT>(value);
  }
  template <typename ClinicalNoteGenerationSettingsT = ClinicalNoteGenerationSettings>
  MedicalScribePostStreamActionSettings& WithClinicalNoteGenerationSettings(ClinicalNoteGenerationSettingsT&& value) {
    SetClinicalNoteGenerationSettings(std::forward<ClinicalNoteGenerationSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputS3Uri;

  ClinicalNoteGenerationSettings m_clinicalNoteGenerationSettings;
  bool m_outputS3UriHasBeenSet = false;
  bool m_clinicalNoteGenerationSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
