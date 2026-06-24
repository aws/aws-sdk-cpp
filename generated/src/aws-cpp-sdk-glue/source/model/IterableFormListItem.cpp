/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/IterableFormListItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

IterableFormListItem::IterableFormListItem(JsonView jsonValue) { *this = jsonValue; }

IterableFormListItem& IterableFormListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ItemId")) {
    m_itemId = jsonValue.GetString("ItemId");
    m_itemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ItemName")) {
    m_itemName = jsonValue.GetString("ItemName");
    m_itemNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GlossaryTerms")) {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("GlossaryTerms");
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  return *this;
}

JsonValue IterableFormListItem::Jsonize() const {
  JsonValue payload;

  if (m_itemIdHasBeenSet) {
    payload.WithString("ItemId", m_itemId);
  }

  if (m_itemNameHasBeenSet) {
    payload.WithString("ItemName", m_itemName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_glossaryTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      glossaryTermsJsonList[glossaryTermsIndex].AsString(m_glossaryTerms[glossaryTermsIndex]);
    }
    payload.WithArray("GlossaryTerms", std::move(glossaryTermsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
