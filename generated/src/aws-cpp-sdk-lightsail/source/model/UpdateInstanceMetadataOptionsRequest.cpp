/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/UpdateInstanceMetadataOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInstanceMetadataOptionsRequest::UpdateInstanceMetadataOptionsRequest() : 
    m_instanceNameHasBeenSet(false),
    m_httpTokens(HttpTokens::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpEndpoint(HttpEndpoint::NOT_SET),
    m_httpEndpointHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpProtocolIpv6(HttpProtocolIpv6::NOT_SET),
    m_httpProtocolIpv6HasBeenSet(false)
{
}

Aws::String UpdateInstanceMetadataOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_httpTokensHasBeenSet)
  {
   payload.WithString("httpTokens", HttpTokensMapper::GetNameForHttpTokens(m_httpTokens));
  }

  if(m_httpEndpointHasBeenSet)
  {
   payload.WithString("httpEndpoint", HttpEndpointMapper::GetNameForHttpEndpoint(m_httpEndpoint));
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
   payload.WithInteger("httpPutResponseHopLimit", m_httpPutResponseHopLimit);

  }

  if(m_httpProtocolIpv6HasBeenSet)
  {
   payload.WithString("httpProtocolIpv6", HttpProtocolIpv6Mapper::GetNameForHttpProtocolIpv6(m_httpProtocolIpv6));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInstanceMetadataOptionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateInstanceMetadataOptions"));
  return headers;

}




