/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/ListingSummaryItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

ListingSummaryItem::ListingSummaryItem(JsonView jsonValue) { *this = jsonValue; }

ListingSummaryItem& ListingSummaryItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("listingId")) {
    m_listingId = jsonValue.GetString("listingId");
    m_listingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingRevision")) {
    m_listingRevision = jsonValue.GetString("listingRevision");
    m_listingRevisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("glossaryTerms")) {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsObject());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingSummaryItem::Jsonize() const {
  JsonValue payload;

  if (m_listingIdHasBeenSet) {
    payload.WithString("listingId", m_listingId);
  }

  if (m_listingRevisionHasBeenSet) {
    payload.WithString("listingRevision", m_listingRevision);
  }

  if (m_glossaryTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      glossaryTermsJsonList[glossaryTermsIndex].AsObject(m_glossaryTerms[glossaryTermsIndex].Jsonize());
    }
    payload.WithArray("glossaryTerms", std::move(glossaryTermsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
