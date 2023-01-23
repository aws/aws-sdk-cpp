/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CreateApiKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApiKeyRequest::CreateApiKeyRequest() : 
    m_apiIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expires(0),
    m_expiresHasBeenSet(false)
{
}

Aws::String CreateApiKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_expiresHasBeenSet)
  {
   payload.WithInt64("expires", m_expires);

  }

  return payload.View().WriteReadable();
}




