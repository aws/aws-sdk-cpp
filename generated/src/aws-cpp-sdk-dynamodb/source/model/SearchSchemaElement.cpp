/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/SearchSchemaElement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

SearchSchemaElement::SearchSchemaElement(JsonView jsonValue) { *this = jsonValue; }

SearchSchemaElement& SearchSchemaElement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttributeName")) {
    m_attributeName = jsonValue.GetString("AttributeName");
    m_attributeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SearchSchemaElementType")) {
    m_searchSchemaElementType =
        SearchSchemaElementTypeMapper::GetSearchSchemaElementTypeForName(jsonValue.GetString("SearchSchemaElementType"));
    m_searchSchemaElementTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchSchemaElement::Jsonize() const {
  JsonValue payload;

  if (m_attributeNameHasBeenSet) {
    payload.WithString("AttributeName", m_attributeName);
  }

  if (m_searchSchemaElementTypeHasBeenSet) {
    payload.WithString("SearchSchemaElementType",
                       SearchSchemaElementTypeMapper::GetNameForSearchSchemaElementType(m_searchSchemaElementType));
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
