/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/ClinicalNoteGenerationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

ClinicalNoteGenerationSettings::ClinicalNoteGenerationSettings(JsonView jsonValue) { *this = jsonValue; }

ClinicalNoteGenerationSettings& ClinicalNoteGenerationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("noteTemplateSettings")) {
    m_noteTemplateSettings = jsonValue.GetObject("noteTemplateSettings");
    m_noteTemplateSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClinicalNoteGenerationSettings::Jsonize() const {
  JsonValue payload;

  if (m_noteTemplateSettingsHasBeenSet) {
    payload.WithObject("noteTemplateSettings", m_noteTemplateSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
