/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CommunicationLimitsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

CommunicationLimitsConfig::CommunicationLimitsConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CommunicationLimitsConfig& CommunicationLimitsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allChannelSubtypes"))
  {
    m_allChannelSubtypes = jsonValue.GetObject("allChannelSubtypes");
    m_allChannelSubtypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceLimitsHandling"))
  {
    m_instanceLimitsHandling = InstanceLimitsHandlingMapper::GetInstanceLimitsHandlingForName(jsonValue.GetString("instanceLimitsHandling"));
    m_instanceLimitsHandlingHasBeenSet = true;
  }
  return *this;
}

JsonValue CommunicationLimitsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_allChannelSubtypesHasBeenSet)
  {
   payload.WithObject("allChannelSubtypes", m_allChannelSubtypes.Jsonize());

  }

  if(m_instanceLimitsHandlingHasBeenSet)
  {
   payload.WithString("instanceLimitsHandling", InstanceLimitsHandlingMapper::GetNameForInstanceLimitsHandling(m_instanceLimitsHandling));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
