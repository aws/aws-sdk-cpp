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

GetPlaybackConfigurationResult::GetPlaybackConfigurationResult()
{
}

GetPlaybackConfigurationResult::GetPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("CdnConfiguration"))
  {
    m_cdnConfiguration = jsonValue.GetObject("CdnConfiguration");

  }

  if(jsonValue.ValueExists("HlsConfiguration"))
  {
    m_hlsConfiguration = jsonValue.GetObject("HlsConfiguration");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

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

  if(jsonValue.ValueExists("VideoContentSourceUrl"))
  {
    m_videoContentSourceUrl = jsonValue.GetString("VideoContentSourceUrl");

  }



  return *this;
}
