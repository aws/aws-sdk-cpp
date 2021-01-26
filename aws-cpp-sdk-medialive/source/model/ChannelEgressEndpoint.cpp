/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ChannelEgressEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ChannelEgressEndpoint::ChannelEgressEndpoint() : 
    m_sourceIpHasBeenSet(false)
{
}

ChannelEgressEndpoint::ChannelEgressEndpoint(JsonView jsonValue) : 
    m_sourceIpHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelEgressEndpoint& ChannelEgressEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceIp"))
  {
    m_sourceIp = jsonValue.GetString("sourceIp");

    m_sourceIpHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelEgressEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIpHasBeenSet)
  {
   payload.WithString("sourceIp", m_sourceIp);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
