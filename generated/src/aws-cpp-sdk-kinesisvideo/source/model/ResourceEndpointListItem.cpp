/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ResourceEndpointListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

ResourceEndpointListItem::ResourceEndpointListItem() : 
    m_protocol(ChannelProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_resourceEndpointHasBeenSet(false)
{
}

ResourceEndpointListItem::ResourceEndpointListItem(JsonView jsonValue) : 
    m_protocol(ChannelProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_resourceEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceEndpointListItem& ResourceEndpointListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = ChannelProtocolMapper::GetChannelProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceEndpoint"))
  {
    m_resourceEndpoint = jsonValue.GetString("ResourceEndpoint");

    m_resourceEndpointHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceEndpointListItem::Jsonize() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", ChannelProtocolMapper::GetNameForChannelProtocol(m_protocol));
  }

  if(m_resourceEndpointHasBeenSet)
  {
   payload.WithString("ResourceEndpoint", m_resourceEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
