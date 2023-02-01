/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/CreateVirtualGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreateVirtualGatewayRequest::CreateVirtualGatewayRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_meshNameHasBeenSet(false),
    m_meshOwnerHasBeenSet(false),
    m_specHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_virtualGatewayNameHasBeenSet(false)
{
}

Aws::String CreateVirtualGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_specHasBeenSet)
  {
   payload.WithObject("spec", m_spec.Jsonize());

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

  if(m_virtualGatewayNameHasBeenSet)
  {
   payload.WithString("virtualGatewayName", m_virtualGatewayName);

  }

  return payload.View().WriteReadable();
}

void CreateVirtualGatewayRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_meshOwnerHasBeenSet)
    {
      ss << m_meshOwner;
      uri.AddQueryStringParameter("meshOwner", ss.str());
      ss.str("");
    }

}



