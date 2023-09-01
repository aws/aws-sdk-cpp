/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamSourceTaskConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

KinesisVideoStreamSourceTaskConfiguration::KinesisVideoStreamSourceTaskConfiguration() : 
    m_streamArnHasBeenSet(false),
    m_channelId(0),
    m_channelIdHasBeenSet(false),
    m_fragmentNumberHasBeenSet(false)
{
}

KinesisVideoStreamSourceTaskConfiguration::KinesisVideoStreamSourceTaskConfiguration(JsonView jsonValue) : 
    m_streamArnHasBeenSet(false),
    m_channelId(0),
    m_channelIdHasBeenSet(false),
    m_fragmentNumberHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamSourceTaskConfiguration& KinesisVideoStreamSourceTaskConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelId"))
  {
    m_channelId = jsonValue.GetInteger("ChannelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FragmentNumber"))
  {
    m_fragmentNumber = jsonValue.GetString("FragmentNumber");

    m_fragmentNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamSourceTaskConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_channelIdHasBeenSet)
  {
   payload.WithInteger("ChannelId", m_channelId);

  }

  if(m_fragmentNumberHasBeenSet)
  {
   payload.WithString("FragmentNumber", m_fragmentNumber);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
