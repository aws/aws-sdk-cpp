/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/VoiceEnhancementSinkConfiguration.h>
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

VoiceEnhancementSinkConfiguration::VoiceEnhancementSinkConfiguration() : 
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
}

VoiceEnhancementSinkConfiguration::VoiceEnhancementSinkConfiguration(JsonView jsonValue) : 
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceEnhancementSinkConfiguration& VoiceEnhancementSinkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceEnhancementSinkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
