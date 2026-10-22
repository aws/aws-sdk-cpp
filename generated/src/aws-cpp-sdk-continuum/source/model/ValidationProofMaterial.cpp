/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ValidationProofMaterial.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ValidationProofMaterial::ValidationProofMaterial(JsonView jsonValue) { *this = jsonValue; }

ValidationProofMaterial& ValidationProofMaterial::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationProofMaterial::Jsonize() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
