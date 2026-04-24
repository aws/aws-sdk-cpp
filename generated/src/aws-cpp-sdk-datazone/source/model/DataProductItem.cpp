/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/DataProductItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

DataProductItem::DataProductItem(JsonView jsonValue) { *this = jsonValue; }

DataProductItem& DataProductItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("itemType")) {
    m_itemType = DataProductItemTypeMapper::GetDataProductItemTypeForName(jsonValue.GetString("itemType"));
    m_itemTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revision")) {
    m_revision = jsonValue.GetString("revision");
    m_revisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("glossaryTerms")) {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataProductItem::Jsonize() const {
  JsonValue payload;

  if (m_itemTypeHasBeenSet) {
    payload.WithString("itemType", DataProductItemTypeMapper::GetNameForDataProductItemType(m_itemType));
  }

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_revisionHasBeenSet) {
    payload.WithString("revision", m_revision);
  }

  if (m_glossaryTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      glossaryTermsJsonList[glossaryTermsIndex].AsString(m_glossaryTerms[glossaryTermsIndex]);
    }
    payload.WithArray("glossaryTerms", std::move(glossaryTermsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
