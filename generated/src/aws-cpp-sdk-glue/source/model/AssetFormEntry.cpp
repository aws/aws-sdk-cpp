/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/AssetFormEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

AssetFormEntry::AssetFormEntry(JsonView jsonValue) { *this = jsonValue; }

AssetFormEntry& AssetFormEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FormTypeId")) {
    m_formTypeId = jsonValue.GetString("FormTypeId");
    m_formTypeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Content")) {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetFormEntry::Jsonize() const {
  JsonValue payload;

  if (m_formTypeIdHasBeenSet) {
    payload.WithString("FormTypeId", m_formTypeId);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("Content", m_content);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
