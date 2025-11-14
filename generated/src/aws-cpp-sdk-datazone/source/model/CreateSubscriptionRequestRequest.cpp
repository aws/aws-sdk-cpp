/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/CreateSubscriptionRequestRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSubscriptionRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_assetPermissionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> assetPermissionsJsonList(m_assetPermissions.size());
    for (unsigned assetPermissionsIndex = 0; assetPermissionsIndex < assetPermissionsJsonList.GetLength(); ++assetPermissionsIndex) {
      assetPermissionsJsonList[assetPermissionsIndex].AsObject(m_assetPermissions[assetPermissionsIndex].Jsonize());
    }
    payload.WithArray("assetPermissions", std::move(assetPermissionsJsonList));
  }

  if (m_assetScopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> assetScopesJsonList(m_assetScopes.size());
    for (unsigned assetScopesIndex = 0; assetScopesIndex < assetScopesJsonList.GetLength(); ++assetScopesIndex) {
      assetScopesJsonList[assetScopesIndex].AsObject(m_assetScopes[assetScopesIndex].Jsonize());
    }
    payload.WithArray("assetScopes", std::move(assetScopesJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_metadataFormsHasBeenSet) {
    Aws::Utils::Array<JsonValue> metadataFormsJsonList(m_metadataForms.size());
    for (unsigned metadataFormsIndex = 0; metadataFormsIndex < metadataFormsJsonList.GetLength(); ++metadataFormsIndex) {
      metadataFormsJsonList[metadataFormsIndex].AsObject(m_metadataForms[metadataFormsIndex].Jsonize());
    }
    payload.WithArray("metadataForms", std::move(metadataFormsJsonList));
  }

  if (m_requestReasonHasBeenSet) {
    payload.WithString("requestReason", m_requestReason);
  }

  if (m_subscribedListingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subscribedListingsJsonList(m_subscribedListings.size());
    for (unsigned subscribedListingsIndex = 0; subscribedListingsIndex < subscribedListingsJsonList.GetLength();
         ++subscribedListingsIndex) {
      subscribedListingsJsonList[subscribedListingsIndex].AsObject(m_subscribedListings[subscribedListingsIndex].Jsonize());
    }
    payload.WithArray("subscribedListings", std::move(subscribedListingsJsonList));
  }

  if (m_subscribedPrincipalsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subscribedPrincipalsJsonList(m_subscribedPrincipals.size());
    for (unsigned subscribedPrincipalsIndex = 0; subscribedPrincipalsIndex < subscribedPrincipalsJsonList.GetLength();
         ++subscribedPrincipalsIndex) {
      subscribedPrincipalsJsonList[subscribedPrincipalsIndex].AsObject(m_subscribedPrincipals[subscribedPrincipalsIndex].Jsonize());
    }
    payload.WithArray("subscribedPrincipals", std::move(subscribedPrincipalsJsonList));
  }

  return payload.View().WriteReadable();
}
