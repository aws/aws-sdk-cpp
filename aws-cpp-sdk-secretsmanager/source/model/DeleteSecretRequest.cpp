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

#include <aws/secretsmanager/model/DeleteSecretRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSecretRequest::DeleteSecretRequest() : 
    m_secretIdHasBeenSet(false),
    m_recoveryWindowInDays(0),
    m_recoveryWindowInDaysHasBeenSet(false)
{
}

Aws::String DeleteSecretRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_recoveryWindowInDaysHasBeenSet)
  {
   payload.WithInt64("RecoveryWindowInDays", m_recoveryWindowInDays);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSecretRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.DeleteSecret"));
  return headers;

}




