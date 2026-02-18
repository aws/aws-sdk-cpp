/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kms/model/ReEncryptRequest.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ReEncryptRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ciphertextBlobHasBeenSet) {
    payload.WithString("CiphertextBlob", HashingUtils::Base64Encode(m_ciphertextBlob));
  }

  if (m_sourceEncryptionContextHasBeenSet) {
    JsonValue sourceEncryptionContextJsonMap;
    for (auto& sourceEncryptionContextItem : m_sourceEncryptionContext) {
      sourceEncryptionContextJsonMap.WithString(sourceEncryptionContextItem.first, sourceEncryptionContextItem.second);
    }
    payload.WithObject("SourceEncryptionContext", std::move(sourceEncryptionContextJsonMap));
  }

  if (m_sourceKeyIdHasBeenSet) {
    payload.WithString("SourceKeyId", m_sourceKeyId);
  }

  if (m_destinationKeyIdHasBeenSet) {
    payload.WithString("DestinationKeyId", m_destinationKeyId);
  }

  if (m_destinationEncryptionContextHasBeenSet) {
    JsonValue destinationEncryptionContextJsonMap;
    for (auto& destinationEncryptionContextItem : m_destinationEncryptionContext) {
      destinationEncryptionContextJsonMap.WithString(destinationEncryptionContextItem.first, destinationEncryptionContextItem.second);
    }
    payload.WithObject("DestinationEncryptionContext", std::move(destinationEncryptionContextJsonMap));
  }

  if (m_sourceEncryptionAlgorithmHasBeenSet) {
    payload.WithString("SourceEncryptionAlgorithm",
                       EncryptionAlgorithmSpecMapper::GetNameForEncryptionAlgorithmSpec(m_sourceEncryptionAlgorithm));
  }

  if (m_destinationEncryptionAlgorithmHasBeenSet) {
    payload.WithString("DestinationEncryptionAlgorithm",
                       EncryptionAlgorithmSpecMapper::GetNameForEncryptionAlgorithmSpec(m_destinationEncryptionAlgorithm));
  }

  if (m_grantTokensHasBeenSet) {
    Aws::Utils::Array<JsonValue> grantTokensJsonList(m_grantTokens.size());
    for (unsigned grantTokensIndex = 0; grantTokensIndex < grantTokensJsonList.GetLength(); ++grantTokensIndex) {
      grantTokensJsonList[grantTokensIndex].AsString(m_grantTokens[grantTokensIndex]);
    }
    payload.WithArray("GrantTokens", std::move(grantTokensJsonList));
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

Aws::Http::HeaderValueCollection ReEncryptRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ReEncrypt"));
  return headers;
}
