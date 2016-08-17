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
#include <aws/storagegateway/model/UpdateChapCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateChapCredentialsRequest::UpdateChapCredentialsRequest() : 
    m_targetARNHasBeenSet(false),
    m_secretToAuthenticateInitiatorHasBeenSet(false),
    m_initiatorNameHasBeenSet(false),
    m_secretToAuthenticateTargetHasBeenSet(false)
{
}

Aws::String UpdateChapCredentialsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetARNHasBeenSet)
  {
   payload.WithString("TargetARN", m_targetARN);

  }

  if(m_secretToAuthenticateInitiatorHasBeenSet)
  {
   payload.WithString("SecretToAuthenticateInitiator", m_secretToAuthenticateInitiator);

  }

  if(m_initiatorNameHasBeenSet)
  {
   payload.WithString("InitiatorName", m_initiatorName);

  }

  if(m_secretToAuthenticateTargetHasBeenSet)
  {
   payload.WithString("SecretToAuthenticateTarget", m_secretToAuthenticateTarget);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateChapCredentialsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateChapCredentials"));
  return headers;

}



