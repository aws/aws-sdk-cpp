/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/RemoteNetworkConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

RemoteNetworkConfigRequest::RemoteNetworkConfigRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

RemoteNetworkConfigRequest& RemoteNetworkConfigRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("remoteNodeNetworks"))
  {
    Aws::Utils::Array<JsonView> remoteNodeNetworksJsonList = jsonValue.GetArray("remoteNodeNetworks");
    for(unsigned remoteNodeNetworksIndex = 0; remoteNodeNetworksIndex < remoteNodeNetworksJsonList.GetLength(); ++remoteNodeNetworksIndex)
    {
      m_remoteNodeNetworks.push_back(remoteNodeNetworksJsonList[remoteNodeNetworksIndex].AsObject());
    }
    m_remoteNodeNetworksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remotePodNetworks"))
  {
    Aws::Utils::Array<JsonView> remotePodNetworksJsonList = jsonValue.GetArray("remotePodNetworks");
    for(unsigned remotePodNetworksIndex = 0; remotePodNetworksIndex < remotePodNetworksJsonList.GetLength(); ++remotePodNetworksIndex)
    {
      m_remotePodNetworks.push_back(remotePodNetworksJsonList[remotePodNetworksIndex].AsObject());
    }
    m_remotePodNetworksHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoteNetworkConfigRequest::Jsonize() const
{
  JsonValue payload;

  if(m_remoteNodeNetworksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> remoteNodeNetworksJsonList(m_remoteNodeNetworks.size());
   for(unsigned remoteNodeNetworksIndex = 0; remoteNodeNetworksIndex < remoteNodeNetworksJsonList.GetLength(); ++remoteNodeNetworksIndex)
   {
     remoteNodeNetworksJsonList[remoteNodeNetworksIndex].AsObject(m_remoteNodeNetworks[remoteNodeNetworksIndex].Jsonize());
   }
   payload.WithArray("remoteNodeNetworks", std::move(remoteNodeNetworksJsonList));

  }

  if(m_remotePodNetworksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> remotePodNetworksJsonList(m_remotePodNetworks.size());
   for(unsigned remotePodNetworksIndex = 0; remotePodNetworksIndex < remotePodNetworksJsonList.GetLength(); ++remotePodNetworksIndex)
   {
     remotePodNetworksJsonList[remotePodNetworksIndex].AsObject(m_remotePodNetworks[remotePodNetworksIndex].Jsonize());
   }
   payload.WithArray("remotePodNetworks", std::move(remotePodNetworksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
