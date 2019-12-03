/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/networkmanager/model/LinkAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

LinkAssociation::LinkAssociation() : 
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_linkAssociationState(LinkAssociationState::NOT_SET),
    m_linkAssociationStateHasBeenSet(false)
{
}

LinkAssociation::LinkAssociation(JsonView jsonValue) : 
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_linkAssociationState(LinkAssociationState::NOT_SET),
    m_linkAssociationStateHasBeenSet(false)
{
  *this = jsonValue;
}

LinkAssociation& LinkAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlobalNetworkId"))
  {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");

    m_globalNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkId"))
  {
    m_linkId = jsonValue.GetString("LinkId");

    m_linkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkAssociationState"))
  {
    m_linkAssociationState = LinkAssociationStateMapper::GetLinkAssociationStateForName(jsonValue.GetString("LinkAssociationState"));

    m_linkAssociationStateHasBeenSet = true;
  }

  return *this;
}

JsonValue LinkAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_globalNetworkIdHasBeenSet)
  {
   payload.WithString("GlobalNetworkId", m_globalNetworkId);

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_linkIdHasBeenSet)
  {
   payload.WithString("LinkId", m_linkId);

  }

  if(m_linkAssociationStateHasBeenSet)
  {
   payload.WithString("LinkAssociationState", LinkAssociationStateMapper::GetNameForLinkAssociationState(m_linkAssociationState));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
