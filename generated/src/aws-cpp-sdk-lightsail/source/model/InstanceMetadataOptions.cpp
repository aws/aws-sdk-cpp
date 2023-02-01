/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceMetadataOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceMetadataOptions::InstanceMetadataOptions() : 
    m_state(InstanceMetadataState::NOT_SET),
    m_stateHasBeenSet(false),
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

InstanceMetadataOptions::InstanceMetadataOptions(JsonView jsonValue) : 
    m_state(InstanceMetadataState::NOT_SET),
    m_stateHasBeenSet(false),
    m_httpTokens(HttpTokens::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpEndpoint(HttpEndpoint::NOT_SET),
    m_httpEndpointHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpProtocolIpv6(HttpProtocolIpv6::NOT_SET),
    m_httpProtocolIpv6HasBeenSet(false)
{
  *this = jsonValue;
}

InstanceMetadataOptions& InstanceMetadataOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = InstanceMetadataStateMapper::GetInstanceMetadataStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpTokens"))
  {
    m_httpTokens = HttpTokensMapper::GetHttpTokensForName(jsonValue.GetString("httpTokens"));

    m_httpTokensHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpEndpoint"))
  {
    m_httpEndpoint = HttpEndpointMapper::GetHttpEndpointForName(jsonValue.GetString("httpEndpoint"));

    m_httpEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpPutResponseHopLimit"))
  {
    m_httpPutResponseHopLimit = jsonValue.GetInteger("httpPutResponseHopLimit");

    m_httpPutResponseHopLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpProtocolIpv6"))
  {
    m_httpProtocolIpv6 = HttpProtocolIpv6Mapper::GetHttpProtocolIpv6ForName(jsonValue.GetString("httpProtocolIpv6"));

    m_httpProtocolIpv6HasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceMetadataOptions::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", InstanceMetadataStateMapper::GetNameForInstanceMetadataState(m_state));
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

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
