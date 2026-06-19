/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/GlossaryTermItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

GlossaryTermItem::GlossaryTermItem(JsonView jsonValue) { *this = jsonValue; }

GlossaryTermItem& GlossaryTermItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShortDescription")) {
    m_shortDescription = jsonValue.GetString("ShortDescription");
    m_shortDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue GlossaryTermItem::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_shortDescriptionHasBeenSet) {
    payload.WithString("ShortDescription", m_shortDescription);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
