/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/CreateAppAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppAuthorizationRequest::CreateAppAuthorizationRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_appHasBeenSet(false),
    m_credentialHasBeenSet(false),
    m_tenantHasBeenSet(false),
    m_authType(AuthType::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAppAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appHasBeenSet)
  {
   payload.WithString("app", m_app);

  }

  if(m_credentialHasBeenSet)
  {
   payload.WithObject("credential", m_credential.Jsonize());

  }

  if(m_tenantHasBeenSet)
  {
   payload.WithObject("tenant", m_tenant.Jsonize());

  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




