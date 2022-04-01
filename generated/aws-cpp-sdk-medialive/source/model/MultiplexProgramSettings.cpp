/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexProgramSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MultiplexProgramSettings::MultiplexProgramSettings() : 
    m_preferredChannelPipeline(PreferredChannelPipeline::NOT_SET),
    m_preferredChannelPipelineHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_serviceDescriptorHasBeenSet(false),
    m_videoSettingsHasBeenSet(false)
{
}

MultiplexProgramSettings::MultiplexProgramSettings(JsonView jsonValue) : 
    m_preferredChannelPipeline(PreferredChannelPipeline::NOT_SET),
    m_preferredChannelPipelineHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_serviceDescriptorHasBeenSet(false),
    m_videoSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexProgramSettings& MultiplexProgramSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("preferredChannelPipeline"))
  {
    m_preferredChannelPipeline = PreferredChannelPipelineMapper::GetPreferredChannelPipelineForName(jsonValue.GetString("preferredChannelPipeline"));

    m_preferredChannelPipelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNumber"))
  {
    m_programNumber = jsonValue.GetInteger("programNumber");

    m_programNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceDescriptor"))
  {
    m_serviceDescriptor = jsonValue.GetObject("serviceDescriptor");

    m_serviceDescriptorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoSettings"))
  {
    m_videoSettings = jsonValue.GetObject("videoSettings");

    m_videoSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexProgramSettings::Jsonize() const
{
  JsonValue payload;

  if(m_preferredChannelPipelineHasBeenSet)
  {
   payload.WithString("preferredChannelPipeline", PreferredChannelPipelineMapper::GetNameForPreferredChannelPipeline(m_preferredChannelPipeline));
  }

  if(m_programNumberHasBeenSet)
  {
   payload.WithInteger("programNumber", m_programNumber);

  }

  if(m_serviceDescriptorHasBeenSet)
  {
   payload.WithObject("serviceDescriptor", m_serviceDescriptor.Jsonize());

  }

  if(m_videoSettingsHasBeenSet)
  {
   payload.WithObject("videoSettings", m_videoSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
