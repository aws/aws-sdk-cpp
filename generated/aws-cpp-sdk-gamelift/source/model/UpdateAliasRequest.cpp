/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAliasRequest::UpdateAliasRequest() : 
    m_aliasIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routingStrategyHasBeenSet(false)
{
}

Aws::String UpdateAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aliasIdHasBeenSet)
  {
   payload.WithString("AliasId", m_aliasId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_routingStrategyHasBeenSet)
  {
   payload.WithObject("RoutingStrategy", m_routingStrategy.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAliasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateAlias"));
  return headers;

}




