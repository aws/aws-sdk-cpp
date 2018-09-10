﻿/*
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
    m_cdnConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_slateAdUrlHasBeenSet(false),
    m_videoContentSourceUrlHasBeenSet(false)
{
}

PlaybackConfiguration::PlaybackConfiguration(JsonView jsonValue) : 
    m_adDecisionServerUrlHasBeenSet(false),
    m_cdnConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_slateAdUrlHasBeenSet(false),
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

  if(jsonValue.ValueExists("CdnConfiguration"))
  {
    m_cdnConfiguration = jsonValue.GetObject("CdnConfiguration");

    m_cdnConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlateAdUrl"))
  {
    m_slateAdUrl = jsonValue.GetString("SlateAdUrl");

    m_slateAdUrlHasBeenSet = true;
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

  if(m_cdnConfigurationHasBeenSet)
  {
   payload.WithObject("CdnConfiguration", m_cdnConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_slateAdUrlHasBeenSet)
  {
   payload.WithString("SlateAdUrl", m_slateAdUrl);

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
