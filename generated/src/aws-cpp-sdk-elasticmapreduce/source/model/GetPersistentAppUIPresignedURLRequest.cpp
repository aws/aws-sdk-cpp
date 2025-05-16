/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/GetPersistentAppUIPresignedURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetPersistentAppUIPresignedURLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_persistentAppUIIdHasBeenSet)
  {
   payload.WithString("PersistentAppUIId", m_persistentAppUIId);

  }

  if(m_persistentAppUITypeHasBeenSet)
  {
   payload.WithString("PersistentAppUIType", PersistentAppUITypeMapper::GetNameForPersistentAppUIType(m_persistentAppUIType));
  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_authProxyCallHasBeenSet)
  {
   payload.WithBool("AuthProxyCall", m_authProxyCall);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetPersistentAppUIPresignedURLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.GetPersistentAppUIPresignedURL"));
  return headers;

}




