/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/RegisterClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterClientRequest::RegisterClientRequest() : 
    m_clientNameHasBeenSet(false),
    m_clientTypeHasBeenSet(false),
    m_scopesHasBeenSet(false)
{
}

Aws::String RegisterClientRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientNameHasBeenSet)
  {
   payload.WithString("clientName", m_clientName);

  }

  if(m_clientTypeHasBeenSet)
  {
   payload.WithString("clientType", m_clientType);

  }

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
   }
   payload.WithArray("scopes", std::move(scopesJsonList));

  }

  return payload.View().WriteReadable();
}




