/*
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

#include <aws/secretsmanager/model/UpdateSecretVersionStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSecretVersionStageRequest::UpdateSecretVersionStageRequest() : 
    m_secretIdHasBeenSet(false),
    m_versionStageHasBeenSet(false),
    m_removeFromVersionIdHasBeenSet(false),
    m_moveToVersionIdHasBeenSet(false)
{
}

Aws::String UpdateSecretVersionStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_versionStageHasBeenSet)
  {
   payload.WithString("VersionStage", m_versionStage);

  }

  if(m_removeFromVersionIdHasBeenSet)
  {
   payload.WithString("RemoveFromVersionId", m_removeFromVersionId);

  }

  if(m_moveToVersionIdHasBeenSet)
  {
   payload.WithString("MoveToVersionId", m_moveToVersionId);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSecretVersionStageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.UpdateSecretVersionStage"));
  return headers;

}




