/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/NoteTemplateSettingsResponse.h>

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
 * <p>Response containing settings for clinical note generation</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ClinicalNoteGenerationSettingsResponse">AWS
 * API Reference</a></p>
 */
class ClinicalNoteGenerationSettingsResponse {
 public:
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationSettingsResponse() = default;
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationSettingsResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationSettingsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Settings for the note template used</p>
   */
  inline const NoteTemplateSettingsResponse& GetNoteTemplateSettings() const { return m_noteTemplateSettings; }
  inline bool NoteTemplateSettingsHasBeenSet() const { return m_noteTemplateSettingsHasBeenSet; }
  template <typename NoteTemplateSettingsT = NoteTemplateSettingsResponse>
  void SetNoteTemplateSettings(NoteTemplateSettingsT&& value) {
    m_noteTemplateSettingsHasBeenSet = true;
    m_noteTemplateSettings = std::forward<NoteTemplateSettingsT>(value);
  }
  template <typename NoteTemplateSettingsT = NoteTemplateSettingsResponse>
  ClinicalNoteGenerationSettingsResponse& WithNoteTemplateSettings(NoteTemplateSettingsT&& value) {
    SetNoteTemplateSettings(std::forward<NoteTemplateSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  NoteTemplateSettingsResponse m_noteTemplateSettings;
  bool m_noteTemplateSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
