/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ItemError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ItemError::ItemError(JsonView jsonValue) { *this = jsonValue; }

ItemError& ItemError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ItemIdentifier")) {
    m_itemIdentifier = jsonValue.GetString("ItemIdentifier");
    m_itemIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Code")) {
    m_code = jsonValue.GetString("Code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue ItemError::Jsonize() const {
  JsonValue payload;

  if (m_itemIdentifierHasBeenSet) {
    payload.WithString("ItemIdentifier", m_itemIdentifier);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("Code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
