/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/StreamConfiguration.h>
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

StreamConfiguration::StreamConfiguration() : 
    m_streamArnHasBeenSet(false),
    m_fragmentNumberHasBeenSet(false),
    m_streamChannelDefinitionHasBeenSet(false)
{
}

StreamConfiguration::StreamConfiguration(JsonView jsonValue) : 
    m_streamArnHasBeenSet(false),
    m_fragmentNumberHasBeenSet(false),
    m_streamChannelDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

StreamConfiguration& StreamConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FragmentNumber"))
  {
    m_fragmentNumber = jsonValue.GetString("FragmentNumber");

    m_fragmentNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamChannelDefinition"))
  {
    m_streamChannelDefinition = jsonValue.GetObject("StreamChannelDefinition");

    m_streamChannelDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_fragmentNumberHasBeenSet)
  {
   payload.WithString("FragmentNumber", m_fragmentNumber);

  }

  if(m_streamChannelDefinitionHasBeenSet)
  {
   payload.WithObject("StreamChannelDefinition", m_streamChannelDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
