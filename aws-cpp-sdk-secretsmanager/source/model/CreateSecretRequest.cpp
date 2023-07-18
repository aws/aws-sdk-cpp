/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/CreateSecretRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSecretRequest::CreateSecretRequest() : 
    m_nameHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_secretBinaryHasBeenSet(false),
    m_secretStringHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_addReplicaRegionsHasBeenSet(false),
    m_forceOverwriteReplicaSecret(false),
    m_forceOverwriteReplicaSecretHasBeenSet(false)
{
}

Aws::String CreateSecretRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_secretBinaryHasBeenSet)
  {
   payload.WithString("SecretBinary", HashingUtils::Base64Encode(m_secretBinary));
  }

  if(m_secretStringHasBeenSet)
  {
   payload.WithString("SecretString", m_secretString);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_addReplicaRegionsHasBeenSet)
  {
   Array<JsonValue> addReplicaRegionsJsonList(m_addReplicaRegions.size());
   for(unsigned addReplicaRegionsIndex = 0; addReplicaRegionsIndex < addReplicaRegionsJsonList.GetLength(); ++addReplicaRegionsIndex)
   {
     addReplicaRegionsJsonList[addReplicaRegionsIndex].AsObject(m_addReplicaRegions[addReplicaRegionsIndex].Jsonize());
   }
   payload.WithArray("AddReplicaRegions", std::move(addReplicaRegionsJsonList));

  }

  if(m_forceOverwriteReplicaSecretHasBeenSet)
  {
   payload.WithBool("ForceOverwriteReplicaSecret", m_forceOverwriteReplicaSecret);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSecretRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.CreateSecret"));
  return headers;

}




