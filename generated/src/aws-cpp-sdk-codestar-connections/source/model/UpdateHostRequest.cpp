/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/UpdateHostRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateHostRequest::UpdateHostRequest() : 
    m_hostArnHasBeenSet(false),
    m_providerEndpointHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
}

Aws::String UpdateHostRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hostArnHasBeenSet)
  {
   payload.WithString("HostArn", m_hostArn);

  }

  if(m_providerEndpointHasBeenSet)
  {
   payload.WithString("ProviderEndpoint", m_providerEndpoint);

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateHostRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codestar.connections.CodeStar_connections_20191201.UpdateHost"));
  return headers;

}




