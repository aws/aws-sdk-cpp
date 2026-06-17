/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/AssetTypeFormReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

AssetTypeFormReference::AssetTypeFormReference(JsonView jsonValue) { *this = jsonValue; }

AssetTypeFormReference& AssetTypeFormReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FormTypeIdentifier")) {
    m_formTypeIdentifier = jsonValue.GetString("FormTypeIdentifier");
    m_formTypeIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetTypeFormReference::Jsonize() const {
  JsonValue payload;

  if (m_formTypeIdentifierHasBeenSet) {
    payload.WithString("FormTypeIdentifier", m_formTypeIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
