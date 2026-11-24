/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/AssetFormInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

AssetFormInput::AssetFormInput(JsonView jsonValue) { *this = jsonValue; }

AssetFormInput& AssetFormInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FormTypeIdentifier")) {
    m_formTypeIdentifier = jsonValue.GetString("FormTypeIdentifier");
    m_formTypeIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Content")) {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetFormInput::Jsonize() const {
  JsonValue payload;

  if (m_formTypeIdentifierHasBeenSet) {
    payload.WithString("FormTypeIdentifier", m_formTypeIdentifier);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("Content", m_content);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
