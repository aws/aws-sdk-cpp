/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/PlaybackConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

PlaybackConfiguration::PlaybackConfiguration() : 
    m_adDecisionServerUrlHasBeenSet(false),
    m_availSuppressionHasBeenSet(false),
    m_bumperHasBeenSet(false),
    m_cdnConfigurationHasBeenSet(false),
    m_configurationAliasesHasBeenSet(false),
    m_dashConfigurationHasBeenSet(false),
    m_hlsConfigurationHasBeenSet(false),
    m_livePreRollConfigurationHasBeenSet(false),
    m_manifestProcessingRulesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_personalizationThresholdSeconds(0),
    m_personalizationThresholdSecondsHasBeenSet(false),
    m_playbackConfigurationArnHasBeenSet(false),
    m_playbackEndpointPrefixHasBeenSet(false),
    m_sessionInitializationEndpointPrefixHasBeenSet(false),
    m_slateAdUrlHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_transcodeProfileNameHasBeenSet(false),
    m_videoContentSourceUrlHasBeenSet(false)
{
}

PlaybackConfiguration::PlaybackConfiguration(JsonView jsonValue) : 
    m_adDecisionServerUrlHasBeenSet(false),
    m_availSuppressionHasBeenSet(false),
    m_bumperHasBeenSet(false),
    m_cdnConfigurationHasBeenSet(false),
    m_configurationAliasesHasBeenSet(false),
    m_dashConfigurationHasBeenSet(false),
    m_hlsConfigurationHasBeenSet(false),
    m_livePreRollConfigurationHasBeenSet(false),
    m_manifestProcessingRulesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_personalizationThresholdSeconds(0),
    m_personalizationThresholdSecondsHasBeenSet(false),
    m_playbackConfigurationArnHasBeenSet(false),
    m_playbackEndpointPrefixHasBeenSet(false),
    m_sessionInitializationEndpointPrefixHasBeenSet(false),
    m_slateAdUrlHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_transcodeProfileNameHasBeenSet(false),
    m_videoContentSourceUrlHasBeenSet(false)
{
  *this = jsonValue;
}

PlaybackConfiguration& PlaybackConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdDecisionServerUrl"))
  {
    m_adDecisionServerUrl = jsonValue.GetString("AdDecisionServerUrl");

    m_adDecisionServerUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailSuppression"))
  {
    m_availSuppression = jsonValue.GetObject("AvailSuppression");

    m_availSuppressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bumper"))
  {
    m_bumper = jsonValue.GetObject("Bumper");

    m_bumperHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CdnConfiguration"))
  {
    m_cdnConfiguration = jsonValue.GetObject("CdnConfiguration");

    m_cdnConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationAliases"))
  {
    Aws::Map<Aws::String, JsonView> configurationAliasesJsonMap = jsonValue.GetObject("ConfigurationAliases").GetAllObjects();
    for(auto& configurationAliasesItem : configurationAliasesJsonMap)
    {
      Aws::Map<Aws::String, JsonView> __mapOf__stringJsonMap = configurationAliasesItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> __mapOf__stringMap;
      for(auto& __mapOf__stringItem : __mapOf__stringJsonMap)
      {
        __mapOf__stringMap[__mapOf__stringItem.first] = __mapOf__stringItem.second.AsString();
      }
      m_configurationAliases[configurationAliasesItem.first] = std::move(__mapOf__stringMap);
    }
    m_configurationAliasesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DashConfiguration"))
  {
    m_dashConfiguration = jsonValue.GetObject("DashConfiguration");

    m_dashConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HlsConfiguration"))
  {
    m_hlsConfiguration = jsonValue.GetObject("HlsConfiguration");

    m_hlsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LivePreRollConfiguration"))
  {
    m_livePreRollConfiguration = jsonValue.GetObject("LivePreRollConfiguration");

    m_livePreRollConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManifestProcessingRules"))
  {
    m_manifestProcessingRules = jsonValue.GetObject("ManifestProcessingRules");

    m_manifestProcessingRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PersonalizationThresholdSeconds"))
  {
    m_personalizationThresholdSeconds = jsonValue.GetInteger("PersonalizationThresholdSeconds");

    m_personalizationThresholdSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlaybackConfigurationArn"))
  {
    m_playbackConfigurationArn = jsonValue.GetString("PlaybackConfigurationArn");

    m_playbackConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlaybackEndpointPrefix"))
  {
    m_playbackEndpointPrefix = jsonValue.GetString("PlaybackEndpointPrefix");

    m_playbackEndpointPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionInitializationEndpointPrefix"))
  {
    m_sessionInitializationEndpointPrefix = jsonValue.GetString("SessionInitializationEndpointPrefix");

    m_sessionInitializationEndpointPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlateAdUrl"))
  {
    m_slateAdUrl = jsonValue.GetString("SlateAdUrl");

    m_slateAdUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TranscodeProfileName"))
  {
    m_transcodeProfileName = jsonValue.GetString("TranscodeProfileName");

    m_transcodeProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VideoContentSourceUrl"))
  {
    m_videoContentSourceUrl = jsonValue.GetString("VideoContentSourceUrl");

    m_videoContentSourceUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue PlaybackConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_adDecisionServerUrlHasBeenSet)
  {
   payload.WithString("AdDecisionServerUrl", m_adDecisionServerUrl);

  }

  if(m_availSuppressionHasBeenSet)
  {
   payload.WithObject("AvailSuppression", m_availSuppression.Jsonize());

  }

  if(m_bumperHasBeenSet)
  {
   payload.WithObject("Bumper", m_bumper.Jsonize());

  }

  if(m_cdnConfigurationHasBeenSet)
  {
   payload.WithObject("CdnConfiguration", m_cdnConfiguration.Jsonize());

  }

  if(m_configurationAliasesHasBeenSet)
  {
   JsonValue configurationAliasesJsonMap;
   for(auto& configurationAliasesItem : m_configurationAliases)
   {
     JsonValue __mapOf__stringJsonMap;
     for(auto& __mapOf__stringItem : configurationAliasesItem.second)
     {
       __mapOf__stringJsonMap.WithString(__mapOf__stringItem.first, __mapOf__stringItem.second);
     }
     configurationAliasesJsonMap.WithObject(configurationAliasesItem.first, std::move(__mapOf__stringJsonMap));
   }
   payload.WithObject("ConfigurationAliases", std::move(configurationAliasesJsonMap));

  }

  if(m_dashConfigurationHasBeenSet)
  {
   payload.WithObject("DashConfiguration", m_dashConfiguration.Jsonize());

  }

  if(m_hlsConfigurationHasBeenSet)
  {
   payload.WithObject("HlsConfiguration", m_hlsConfiguration.Jsonize());

  }

  if(m_livePreRollConfigurationHasBeenSet)
  {
   payload.WithObject("LivePreRollConfiguration", m_livePreRollConfiguration.Jsonize());

  }

  if(m_manifestProcessingRulesHasBeenSet)
  {
   payload.WithObject("ManifestProcessingRules", m_manifestProcessingRules.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_personalizationThresholdSecondsHasBeenSet)
  {
   payload.WithInteger("PersonalizationThresholdSeconds", m_personalizationThresholdSeconds);

  }

  if(m_playbackConfigurationArnHasBeenSet)
  {
   payload.WithString("PlaybackConfigurationArn", m_playbackConfigurationArn);

  }

  if(m_playbackEndpointPrefixHasBeenSet)
  {
   payload.WithString("PlaybackEndpointPrefix", m_playbackEndpointPrefix);

  }

  if(m_sessionInitializationEndpointPrefixHasBeenSet)
  {
   payload.WithString("SessionInitializationEndpointPrefix", m_sessionInitializationEndpointPrefix);

  }

  if(m_slateAdUrlHasBeenSet)
  {
   payload.WithString("SlateAdUrl", m_slateAdUrl);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_transcodeProfileNameHasBeenSet)
  {
   payload.WithString("TranscodeProfileName", m_transcodeProfileName);

  }

  if(m_videoContentSourceUrlHasBeenSet)
  {
   payload.WithString("VideoContentSourceUrl", m_videoContentSourceUrl);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
