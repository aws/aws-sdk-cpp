/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/GetPlaybackConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPlaybackConfigurationResult::GetPlaybackConfigurationResult() : 
    m_personalizationThresholdSeconds(0)
{
}

GetPlaybackConfigurationResult::GetPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_personalizationThresholdSeconds(0)
{
  *this = result;
}

GetPlaybackConfigurationResult& GetPlaybackConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdDecisionServerUrl"))
  {
    m_adDecisionServerUrl = jsonValue.GetString("AdDecisionServerUrl");

  }

  if(jsonValue.ValueExists("AvailSuppression"))
  {
    m_availSuppression = jsonValue.GetObject("AvailSuppression");

  }

  if(jsonValue.ValueExists("Bumper"))
  {
    m_bumper = jsonValue.GetObject("Bumper");

  }

  if(jsonValue.ValueExists("CdnConfiguration"))
  {
    m_cdnConfiguration = jsonValue.GetObject("CdnConfiguration");

  }

  if(jsonValue.ValueExists("DashConfiguration"))
  {
    m_dashConfiguration = jsonValue.GetObject("DashConfiguration");

  }

  if(jsonValue.ValueExists("HlsConfiguration"))
  {
    m_hlsConfiguration = jsonValue.GetObject("HlsConfiguration");

  }

  if(jsonValue.ValueExists("LivePreRollConfiguration"))
  {
    m_livePreRollConfiguration = jsonValue.GetObject("LivePreRollConfiguration");

  }

  if(jsonValue.ValueExists("ManifestProcessingRules"))
  {
    m_manifestProcessingRules = jsonValue.GetObject("ManifestProcessingRules");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("PersonalizationThresholdSeconds"))
  {
    m_personalizationThresholdSeconds = jsonValue.GetInteger("PersonalizationThresholdSeconds");

  }

  if(jsonValue.ValueExists("PlaybackConfigurationArn"))
  {
    m_playbackConfigurationArn = jsonValue.GetString("PlaybackConfigurationArn");

  }

  if(jsonValue.ValueExists("PlaybackEndpointPrefix"))
  {
    m_playbackEndpointPrefix = jsonValue.GetString("PlaybackEndpointPrefix");

  }

  if(jsonValue.ValueExists("SessionInitializationEndpointPrefix"))
  {
    m_sessionInitializationEndpointPrefix = jsonValue.GetString("SessionInitializationEndpointPrefix");

  }

  if(jsonValue.ValueExists("SlateAdUrl"))
  {
    m_slateAdUrl = jsonValue.GetString("SlateAdUrl");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("TranscodeProfileName"))
  {
    m_transcodeProfileName = jsonValue.GetString("TranscodeProfileName");

  }

  if(jsonValue.ValueExists("VideoContentSourceUrl"))
  {
    m_videoContentSourceUrl = jsonValue.GetString("VideoContentSourceUrl");

  }



  return *this;
}
