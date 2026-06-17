/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/IterableFormItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

IterableFormItem::IterableFormItem(JsonView jsonValue) { *this = jsonValue; }

IterableFormItem& IterableFormItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ItemId")) {
    m_itemId = jsonValue.GetString("ItemId");
    m_itemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ItemName")) {
    m_itemName = jsonValue.GetString("ItemName");
    m_itemNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GlossaryTerms")) {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("GlossaryTerms");
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Forms")) {
    Aws::Map<Aws::String, JsonView> formsJsonMap = jsonValue.GetObject("Forms").GetAllObjects();
    for (auto& formsItem : formsJsonMap) {
      m_forms[formsItem.first] = formsItem.second.AsObject();
    }
    m_formsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Attachments")) {
    Aws::Map<Aws::String, JsonView> attachmentsJsonMap = jsonValue.GetObject("Attachments").GetAllObjects();
    for (auto& attachmentsItem : attachmentsJsonMap) {
      m_attachments[attachmentsItem.first] = attachmentsItem.second.AsObject();
    }
    m_attachmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue IterableFormItem::Jsonize() const {
  JsonValue payload;

  if (m_itemIdHasBeenSet) {
    payload.WithString("ItemId", m_itemId);
  }

  if (m_itemNameHasBeenSet) {
    payload.WithString("ItemName", m_itemName);
  }

  if (m_glossaryTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      glossaryTermsJsonList[glossaryTermsIndex].AsString(m_glossaryTerms[glossaryTermsIndex]);
    }
    payload.WithArray("GlossaryTerms", std::move(glossaryTermsJsonList));
  }

  if (m_formsHasBeenSet) {
    JsonValue formsJsonMap;
    for (auto& formsItem : m_forms) {
      formsJsonMap.WithObject(formsItem.first, formsItem.second.Jsonize());
    }
    payload.WithObject("Forms", std::move(formsJsonMap));
  }

  if (m_attachmentsHasBeenSet) {
    JsonValue attachmentsJsonMap;
    for (auto& attachmentsItem : m_attachments) {
      attachmentsJsonMap.WithObject(attachmentsItem.first, attachmentsItem.second.Jsonize());
    }
    payload.WithObject("Attachments", std::move(attachmentsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
