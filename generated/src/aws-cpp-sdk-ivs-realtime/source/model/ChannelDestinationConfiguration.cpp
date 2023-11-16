/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ChannelDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

ChannelDestinationConfiguration::ChannelDestinationConfiguration() : 
    m_channelArnHasBeenSet(false),
    m_encoderConfigurationArnHasBeenSet(false)
{
}

ChannelDestinationConfiguration::ChannelDestinationConfiguration(JsonView jsonValue) : 
    m_channelArnHasBeenSet(false),
    m_encoderConfigurationArnHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelDestinationConfiguration& ChannelDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelArn"))
  {
    m_channelArn = jsonValue.GetString("channelArn");

    m_channelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encoderConfigurationArn"))
  {
    m_encoderConfigurationArn = jsonValue.GetString("encoderConfigurationArn");

    m_encoderConfigurationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  if(m_encoderConfigurationArnHasBeenSet)
  {
   payload.WithString("encoderConfigurationArn", m_encoderConfigurationArn);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
