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

#include <aws/medialive/model/RtmpGroupSettings.h>
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

RtmpGroupSettings::RtmpGroupSettings() : 
    m_authenticationScheme(AuthenticationScheme::NOT_SET),
    m_authenticationSchemeHasBeenSet(false),
    m_cacheFullBehavior(RtmpCacheFullBehavior::NOT_SET),
    m_cacheFullBehaviorHasBeenSet(false),
    m_cacheLength(0),
    m_cacheLengthHasBeenSet(false),
    m_captionData(RtmpCaptionData::NOT_SET),
    m_captionDataHasBeenSet(false),
    m_restartDelay(0),
    m_restartDelayHasBeenSet(false)
{
}

RtmpGroupSettings::RtmpGroupSettings(const JsonValue& jsonValue) : 
    m_authenticationScheme(AuthenticationScheme::NOT_SET),
    m_authenticationSchemeHasBeenSet(false),
    m_cacheFullBehavior(RtmpCacheFullBehavior::NOT_SET),
    m_cacheFullBehaviorHasBeenSet(false),
    m_cacheLength(0),
    m_cacheLengthHasBeenSet(false),
    m_captionData(RtmpCaptionData::NOT_SET),
    m_captionDataHasBeenSet(false),
    m_restartDelay(0),
    m_restartDelayHasBeenSet(false)
{
  *this = jsonValue;
}

RtmpGroupSettings& RtmpGroupSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("authenticationScheme"))
  {
    m_authenticationScheme = AuthenticationSchemeMapper::GetAuthenticationSchemeForName(jsonValue.GetString("authenticationScheme"));

    m_authenticationSchemeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheFullBehavior"))
  {
    m_cacheFullBehavior = RtmpCacheFullBehaviorMapper::GetRtmpCacheFullBehaviorForName(jsonValue.GetString("cacheFullBehavior"));

    m_cacheFullBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheLength"))
  {
    m_cacheLength = jsonValue.GetInteger("cacheLength");

    m_cacheLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionData"))
  {
    m_captionData = RtmpCaptionDataMapper::GetRtmpCaptionDataForName(jsonValue.GetString("captionData"));

    m_captionDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("restartDelay"))
  {
    m_restartDelay = jsonValue.GetInteger("restartDelay");

    m_restartDelayHasBeenSet = true;
  }

  return *this;
}

JsonValue RtmpGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationSchemeHasBeenSet)
  {
   payload.WithString("authenticationScheme", AuthenticationSchemeMapper::GetNameForAuthenticationScheme(m_authenticationScheme));
  }

  if(m_cacheFullBehaviorHasBeenSet)
  {
   payload.WithString("cacheFullBehavior", RtmpCacheFullBehaviorMapper::GetNameForRtmpCacheFullBehavior(m_cacheFullBehavior));
  }

  if(m_cacheLengthHasBeenSet)
  {
   payload.WithInteger("cacheLength", m_cacheLength);

  }

  if(m_captionDataHasBeenSet)
  {
   payload.WithString("captionData", RtmpCaptionDataMapper::GetNameForRtmpCaptionData(m_captionData));
  }

  if(m_restartDelayHasBeenSet)
  {
   payload.WithInteger("restartDelay", m_restartDelay);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
