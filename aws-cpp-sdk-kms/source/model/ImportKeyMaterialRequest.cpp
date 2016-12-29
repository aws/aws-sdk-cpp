/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kms/model/ImportKeyMaterialRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportKeyMaterialRequest::ImportKeyMaterialRequest() : 
    m_keyIdHasBeenSet(false),
    m_importTokenHasBeenSet(false),
    m_encryptedKeyMaterialHasBeenSet(false),
    m_validToHasBeenSet(false),
    m_expirationModel(ExpirationModelType::NOT_SET),
    m_expirationModelHasBeenSet(false)
{
}

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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ImportKeyMaterialRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ImportKeyMaterial"));
  return headers;

}



