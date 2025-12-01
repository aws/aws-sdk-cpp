/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MediaItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

MediaItem::MediaItem(JsonView jsonValue) { *this = jsonValue; }

MediaItem& MediaItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = MediaTypeMapper::GetMediaTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetString("Source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaItem::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", MediaTypeMapper::GetNameForMediaType(m_type));
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("Source", m_source);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
