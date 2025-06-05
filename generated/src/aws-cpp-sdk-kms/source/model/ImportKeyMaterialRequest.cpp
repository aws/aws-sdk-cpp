/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ImportKeyMaterialRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportKeyMaterialRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_importTokenHasBeenSet)
  {
   payload.WithString("ImportToken", HashingUtils::Base64Encode(m_importToken));
  }

  if(m_encryptedKeyMaterialHasBeenSet)
  {
   payload.WithString("EncryptedKeyMaterial", HashingUtils::Base64Encode(m_encryptedKeyMaterial));
  }

  if(m_validToHasBeenSet)
  {
   payload.WithDouble("ValidTo", m_validTo.SecondsWithMSPrecision());
  }

  if(m_expirationModelHasBeenSet)
  {
   payload.WithString("ExpirationModel", ExpirationModelTypeMapper::GetNameForExpirationModelType(m_expirationModel));
  }

  if(m_importTypeHasBeenSet)
  {
   payload.WithString("ImportType", ImportTypeMapper::GetNameForImportType(m_importType));
  }

  if(m_keyMaterialDescriptionHasBeenSet)
  {
   payload.WithString("KeyMaterialDescription", m_keyMaterialDescription);

  }

  if(m_keyMaterialIdHasBeenSet)
  {
   payload.WithString("KeyMaterialId", m_keyMaterialId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportKeyMaterialRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ImportKeyMaterial"));
  return headers;

}




