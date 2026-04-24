/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NextContactEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

NextContactEntry::NextContactEntry(JsonView jsonValue) { *this = jsonValue; }

NextContactEntry& NextContactEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = NextContactTypeMapper::GetNextContactTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextContactMetadata")) {
    m_nextContactMetadata = jsonValue.GetObject("NextContactMetadata");
    m_nextContactMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue NextContactEntry::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", NextContactTypeMapper::GetNameForNextContactType(m_type));
  }

  if (m_nextContactMetadataHasBeenSet) {
    payload.WithObject("NextContactMetadata", m_nextContactMetadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
