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
