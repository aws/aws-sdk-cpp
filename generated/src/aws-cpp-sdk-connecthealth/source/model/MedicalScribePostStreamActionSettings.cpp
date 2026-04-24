/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribePostStreamActionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribePostStreamActionSettings::MedicalScribePostStreamActionSettings(JsonView jsonValue) { *this = jsonValue; }

MedicalScribePostStreamActionSettings& MedicalScribePostStreamActionSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outputS3Uri")) {
    m_outputS3Uri = jsonValue.GetString("outputS3Uri");
    m_outputS3UriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clinicalNoteGenerationSettings")) {
    m_clinicalNoteGenerationSettings = jsonValue.GetObject("clinicalNoteGenerationSettings");
    m_clinicalNoteGenerationSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribePostStreamActionSettings::Jsonize() const {
  JsonValue payload;

  if (m_outputS3UriHasBeenSet) {
    payload.WithString("outputS3Uri", m_outputS3Uri);
  }

  if (m_clinicalNoteGenerationSettingsHasBeenSet) {
    payload.WithObject("clinicalNoteGenerationSettings", m_clinicalNoteGenerationSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
