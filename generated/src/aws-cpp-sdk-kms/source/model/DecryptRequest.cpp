/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kms/model/DecryptRequest.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DecryptRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ciphertextBlobHasBeenSet) {
    payload.WithString("CiphertextBlob", HashingUtils::Base64Encode(m_ciphertextBlob));
  }

  if (m_encryptionContextHasBeenSet) {
    JsonValue encryptionContextJsonMap;
    for (auto& encryptionContextItem : m_encryptionContext) {
      encryptionContextJsonMap.WithString(encryptionContextItem.first, encryptionContextItem.second);
    }
    payload.WithObject("EncryptionContext", std::move(encryptionContextJsonMap));
  }

  if (m_grantTokensHasBeenSet) {
    Aws::Utils::Array<JsonValue> grantTokensJsonList(m_grantTokens.size());
    for (unsigned grantTokensIndex = 0; grantTokensIndex < grantTokensJsonList.GetLength(); ++grantTokensIndex) {
      grantTokensJsonList[grantTokensIndex].AsString(m_grantTokens[grantTokensIndex]);
    }
    payload.WithArray("GrantTokens", std::move(grantTokensJsonList));
  }

  if (m_keyIdHasBeenSet) {
    payload.WithString("KeyId", m_keyId);
  }

  if (m_encryptionAlgorithmHasBeenSet) {
    payload.WithString("EncryptionAlgorithm", EncryptionAlgorithmSpecMapper::GetNameForEncryptionAlgorithmSpec(m_encryptionAlgorithm));
  }

  if (m_recipientHasBeenSet) {
    payload.WithObject("Recipient", m_recipient.Jsonize());
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("DryRun", m_dryRun);
  }

  if (m_dryRunModifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> dryRunModifiersJsonList(m_dryRunModifiers.size());
    for (unsigned dryRunModifiersIndex = 0; dryRunModifiersIndex < dryRunModifiersJsonList.GetLength(); ++dryRunModifiersIndex) {
      dryRunModifiersJsonList[dryRunModifiersIndex].AsString(
          DryRunModifierTypeMapper::GetNameForDryRunModifierType(m_dryRunModifiers[dryRunModifiersIndex]));
    }
    payload.WithArray("DryRunModifiers", std::move(dryRunModifiersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DecryptRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.Decrypt"));
  return headers;
}
