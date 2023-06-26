/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/MediaInsightsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

MediaInsightsConfiguration::MediaInsightsConfiguration() : 
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_configurationArnHasBeenSet(false)
{
}

MediaInsightsConfiguration::MediaInsightsConfiguration(JsonView jsonValue) : 
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_configurationArnHasBeenSet(false)
{
  *this = jsonValue;
}

MediaInsightsConfiguration& MediaInsightsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationArn"))
  {
    m_configurationArn = jsonValue.GetString("ConfigurationArn");

    m_configurationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaInsightsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  if(m_configurationArnHasBeenSet)
  {
   payload.WithString("ConfigurationArn", m_configurationArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
