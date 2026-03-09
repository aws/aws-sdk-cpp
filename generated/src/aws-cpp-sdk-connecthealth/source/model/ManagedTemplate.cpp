/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/ManagedTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

ManagedTemplate::ManagedTemplate(JsonView jsonValue) { *this = jsonValue; }

ManagedTemplate& ManagedTemplate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateType")) {
    m_templateType = ManagedNoteTemplateMapper::GetManagedNoteTemplateForName(jsonValue.GetString("templateType"));
    m_templateTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedTemplate::Jsonize() const {
  JsonValue payload;

  if (m_templateTypeHasBeenSet) {
    payload.WithString("templateType", ManagedNoteTemplateMapper::GetNameForManagedNoteTemplate(m_templateType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
