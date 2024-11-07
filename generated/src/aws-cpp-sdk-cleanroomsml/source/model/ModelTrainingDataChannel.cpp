/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ModelTrainingDataChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

ModelTrainingDataChannel::ModelTrainingDataChannel() : 
    m_mlInputChannelArnHasBeenSet(false),
    m_channelNameHasBeenSet(false)
{
}

ModelTrainingDataChannel::ModelTrainingDataChannel(JsonView jsonValue)
  : ModelTrainingDataChannel()
{
  *this = jsonValue;
}

ModelTrainingDataChannel& ModelTrainingDataChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mlInputChannelArn"))
  {
    m_mlInputChannelArn = jsonValue.GetString("mlInputChannelArn");

    m_mlInputChannelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");

    m_channelNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelTrainingDataChannel::Jsonize() const
{
  JsonValue payload;

  if(m_mlInputChannelArnHasBeenSet)
  {
   payload.WithString("mlInputChannelArn", m_mlInputChannelArn);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
