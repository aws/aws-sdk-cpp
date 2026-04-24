/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/NoteTemplateSettings.h>

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
 * <p>Settings for generating clinical notes from the audio stream</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ClinicalNoteGenerationSettings">AWS
 * API Reference</a></p>
 */
class ClinicalNoteGenerationSettings {
 public:
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationSettings() = default;
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Settings for the note template to use</p>
   */
  inline const NoteTemplateSettings& GetNoteTemplateSettings() const { return m_noteTemplateSettings; }
  inline bool NoteTemplateSettingsHasBeenSet() const { return m_noteTemplateSettingsHasBeenSet; }
  template <typename NoteTemplateSettingsT = NoteTemplateSettings>
  void SetNoteTemplateSettings(NoteTemplateSettingsT&& value) {
    m_noteTemplateSettingsHasBeenSet = true;
    m_noteTemplateSettings = std::forward<NoteTemplateSettingsT>(value);
  }
  template <typename NoteTemplateSettingsT = NoteTemplateSettings>
  ClinicalNoteGenerationSettings& WithNoteTemplateSettings(NoteTemplateSettingsT&& value) {
    SetNoteTemplateSettings(std::forward<NoteTemplateSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  NoteTemplateSettings m_noteTemplateSettings;
  bool m_noteTemplateSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
