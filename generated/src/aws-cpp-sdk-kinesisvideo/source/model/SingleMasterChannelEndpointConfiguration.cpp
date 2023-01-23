/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/SingleMasterChannelEndpointConfiguration.h>
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

SingleMasterChannelEndpointConfiguration::SingleMasterChannelEndpointConfiguration() : 
    m_protocolsHasBeenSet(false),
    m_role(ChannelRole::NOT_SET),
    m_roleHasBeenSet(false)
{
}

SingleMasterChannelEndpointConfiguration::SingleMasterChannelEndpointConfiguration(JsonView jsonValue) : 
    m_protocolsHasBeenSet(false),
    m_role(ChannelRole::NOT_SET),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

SingleMasterChannelEndpointConfiguration& SingleMasterChannelEndpointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(ChannelProtocolMapper::GetChannelProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = ChannelRoleMapper::GetChannelRoleForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue SingleMasterChannelEndpointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ChannelProtocolMapper::GetNameForChannelProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", ChannelRoleMapper::GetNameForChannelRole(m_role));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
