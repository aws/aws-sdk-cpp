/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_recoveryWindowInDaysHasBeenSet(false),
    m_forceDeleteWithoutRecovery(false),
    m_forceDeleteWithoutRecoveryHasBeenSet(false)
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

  if(m_forceDeleteWithoutRecoveryHasBeenSet)
  {
   payload.WithBool("ForceDeleteWithoutRecovery", m_forceDeleteWithoutRecovery);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSecretRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.DeleteSecret"));
  return headers;

}




