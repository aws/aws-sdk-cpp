﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/secretsmanager/model/PutSecretValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSecretValueRequest::PutSecretValueRequest() : 
    m_secretIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_secretBinaryHasBeenSet(false),
    m_secretStringHasBeenSet(false),
    m_versionStagesHasBeenSet(false)
{
}

Aws::String PutSecretValueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_secretBinaryHasBeenSet)
  {
   payload.WithString("SecretBinary", HashingUtils::Base64Encode(m_secretBinary));
  }

  if(m_secretStringHasBeenSet)
  {
   payload.WithString("SecretString", m_secretString);

  }

  if(m_versionStagesHasBeenSet)
  {
   Array<JsonValue> versionStagesJsonList(m_versionStages.size());
   for(unsigned versionStagesIndex = 0; versionStagesIndex < versionStagesJsonList.GetLength(); ++versionStagesIndex)
   {
     versionStagesJsonList[versionStagesIndex].AsString(m_versionStages[versionStagesIndex]);
   }
   payload.WithArray("VersionStages", std::move(versionStagesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutSecretValueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.PutSecretValue"));
  return headers;

}




