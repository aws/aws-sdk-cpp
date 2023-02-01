/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ElasticChannelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

ElasticChannelConfiguration::ElasticChannelConfiguration() : 
    m_maximumSubChannels(0),
    m_maximumSubChannelsHasBeenSet(false),
    m_targetMembershipsPerSubChannel(0),
    m_targetMembershipsPerSubChannelHasBeenSet(false),
    m_minimumMembershipPercentage(0),
    m_minimumMembershipPercentageHasBeenSet(false)
{
}

ElasticChannelConfiguration::ElasticChannelConfiguration(JsonView jsonValue) : 
    m_maximumSubChannels(0),
    m_maximumSubChannelsHasBeenSet(false),
    m_targetMembershipsPerSubChannel(0),
    m_targetMembershipsPerSubChannelHasBeenSet(false),
    m_minimumMembershipPercentage(0),
    m_minimumMembershipPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticChannelConfiguration& ElasticChannelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaximumSubChannels"))
  {
    m_maximumSubChannels = jsonValue.GetInteger("MaximumSubChannels");

    m_maximumSubChannelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetMembershipsPerSubChannel"))
  {
    m_targetMembershipsPerSubChannel = jsonValue.GetInteger("TargetMembershipsPerSubChannel");

    m_targetMembershipsPerSubChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumMembershipPercentage"))
  {
    m_minimumMembershipPercentage = jsonValue.GetInteger("MinimumMembershipPercentage");

    m_minimumMembershipPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticChannelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maximumSubChannelsHasBeenSet)
  {
   payload.WithInteger("MaximumSubChannels", m_maximumSubChannels);

  }

  if(m_targetMembershipsPerSubChannelHasBeenSet)
  {
   payload.WithInteger("TargetMembershipsPerSubChannel", m_targetMembershipsPerSubChannel);

  }

  if(m_minimumMembershipPercentageHasBeenSet)
  {
   payload.WithInteger("MinimumMembershipPercentage", m_minimumMembershipPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
