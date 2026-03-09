/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/NoteTemplateSettingsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

NoteTemplateSettingsResponse::NoteTemplateSettingsResponse(JsonView jsonValue) { *this = jsonValue; }

NoteTemplateSettingsResponse& NoteTemplateSettingsResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managedTemplate")) {
    m_managedTemplate = jsonValue.GetObject("managedTemplate");
    m_managedTemplateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customTemplate")) {
    m_customTemplate = jsonValue.GetObject("customTemplate");
    m_customTemplateHasBeenSet = true;
  }
  return *this;
}

JsonValue NoteTemplateSettingsResponse::Jsonize() const {
  JsonValue payload;

  if (m_managedTemplateHasBeenSet) {
    payload.WithObject("managedTemplate", m_managedTemplate.Jsonize());
  }

  if (m_customTemplateHasBeenSet) {
    payload.WithObject("customTemplate", m_customTemplate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
