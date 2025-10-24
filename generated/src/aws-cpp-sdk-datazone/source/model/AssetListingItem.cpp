﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/AssetListingItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

AssetListingItem::AssetListingItem(JsonView jsonValue) { *this = jsonValue; }

AssetListingItem& AssetListingItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("additionalAttributes")) {
    m_additionalAttributes = jsonValue.GetObject("additionalAttributes");
    m_additionalAttributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityId")) {
    m_entityId = jsonValue.GetString("entityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityRevision")) {
    m_entityRevision = jsonValue.GetString("entityRevision");
    m_entityRevisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityType")) {
    m_entityType = jsonValue.GetString("entityType");
    m_entityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("glossaryTerms")) {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsObject());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("governedGlossaryTerms")) {
    Aws::Utils::Array<JsonView> governedGlossaryTermsJsonList = jsonValue.GetArray("governedGlossaryTerms");
    for (unsigned governedGlossaryTermsIndex = 0; governedGlossaryTermsIndex < governedGlossaryTermsJsonList.GetLength();
         ++governedGlossaryTermsIndex) {
      m_governedGlossaryTerms.push_back(governedGlossaryTermsJsonList[governedGlossaryTermsIndex].AsObject());
    }
    m_governedGlossaryTermsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingCreatedBy")) {
    m_listingCreatedBy = jsonValue.GetString("listingCreatedBy");
    m_listingCreatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingId")) {
    m_listingId = jsonValue.GetString("listingId");
    m_listingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingRevision")) {
    m_listingRevision = jsonValue.GetString("listingRevision");
    m_listingRevisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingUpdatedBy")) {
    m_listingUpdatedBy = jsonValue.GetString("listingUpdatedBy");
    m_listingUpdatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owningProjectId")) {
    m_owningProjectId = jsonValue.GetString("owningProjectId");
    m_owningProjectIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetListingItem::Jsonize() const {
  JsonValue payload;

  if (m_additionalAttributesHasBeenSet) {
    payload.WithObject("additionalAttributes", m_additionalAttributes.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_entityIdHasBeenSet) {
    payload.WithString("entityId", m_entityId);
  }

  if (m_entityRevisionHasBeenSet) {
    payload.WithString("entityRevision", m_entityRevision);
  }

  if (m_entityTypeHasBeenSet) {
    payload.WithString("entityType", m_entityType);
  }

  if (m_glossaryTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      glossaryTermsJsonList[glossaryTermsIndex].AsObject(m_glossaryTerms[glossaryTermsIndex].Jsonize());
    }
    payload.WithArray("glossaryTerms", std::move(glossaryTermsJsonList));
  }

  if (m_governedGlossaryTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> governedGlossaryTermsJsonList(m_governedGlossaryTerms.size());
    for (unsigned governedGlossaryTermsIndex = 0; governedGlossaryTermsIndex < governedGlossaryTermsJsonList.GetLength();
         ++governedGlossaryTermsIndex) {
      governedGlossaryTermsJsonList[governedGlossaryTermsIndex].AsObject(m_governedGlossaryTerms[governedGlossaryTermsIndex].Jsonize());
    }
    payload.WithArray("governedGlossaryTerms", std::move(governedGlossaryTermsJsonList));
  }

  if (m_listingCreatedByHasBeenSet) {
    payload.WithString("listingCreatedBy", m_listingCreatedBy);
  }

  if (m_listingIdHasBeenSet) {
    payload.WithString("listingId", m_listingId);
  }

  if (m_listingRevisionHasBeenSet) {
    payload.WithString("listingRevision", m_listingRevision);
  }

  if (m_listingUpdatedByHasBeenSet) {
    payload.WithString("listingUpdatedBy", m_listingUpdatedBy);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_owningProjectIdHasBeenSet) {
    payload.WithString("owningProjectId", m_owningProjectId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
