/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/InstanceCommunicationLimitsConfig.h>
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

InstanceCommunicationLimitsConfig::InstanceCommunicationLimitsConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceCommunicationLimitsConfig& InstanceCommunicationLimitsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allChannelSubtypes"))
  {
    m_allChannelSubtypes = jsonValue.GetObject("allChannelSubtypes");
    m_allChannelSubtypesHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceCommunicationLimitsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_allChannelSubtypesHasBeenSet)
  {
   payload.WithObject("allChannelSubtypes", m_allChannelSubtypes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
