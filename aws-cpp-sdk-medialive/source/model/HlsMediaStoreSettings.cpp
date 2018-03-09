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

#include <aws/medialive/model/HlsMediaStoreSettings.h>
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

HlsMediaStoreSettings::HlsMediaStoreSettings() : 
    m_connectionRetryInterval(0),
    m_connectionRetryIntervalHasBeenSet(false),
    m_filecacheDuration(0),
    m_filecacheDurationHasBeenSet(false),
    m_mediaStoreStorageClass(HlsMediaStoreStorageClass::NOT_SET),
    m_mediaStoreStorageClassHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_restartDelay(0),
    m_restartDelayHasBeenSet(false)
{
}

HlsMediaStoreSettings::HlsMediaStoreSettings(const JsonValue& jsonValue) : 
    m_connectionRetryInterval(0),
    m_connectionRetryIntervalHasBeenSet(false),
    m_filecacheDuration(0),
    m_filecacheDurationHasBeenSet(false),
    m_mediaStoreStorageClass(HlsMediaStoreStorageClass::NOT_SET),
    m_mediaStoreStorageClassHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_restartDelay(0),
    m_restartDelayHasBeenSet(false)
{
  *this = jsonValue;
}

HlsMediaStoreSettings& HlsMediaStoreSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("connectionRetryInterval"))
  {
    m_connectionRetryInterval = jsonValue.GetInteger("connectionRetryInterval");

    m_connectionRetryIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filecacheDuration"))
  {
    m_filecacheDuration = jsonValue.GetInteger("filecacheDuration");

    m_filecacheDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaStoreStorageClass"))
  {
    m_mediaStoreStorageClass = HlsMediaStoreStorageClassMapper::GetHlsMediaStoreStorageClassForName(jsonValue.GetString("mediaStoreStorageClass"));

    m_mediaStoreStorageClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numRetries"))
  {
    m_numRetries = jsonValue.GetInteger("numRetries");

    m_numRetriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("restartDelay"))
  {
    m_restartDelay = jsonValue.GetInteger("restartDelay");

    m_restartDelayHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsMediaStoreSettings::Jsonize() const
{
  JsonValue payload;

  if(m_connectionRetryIntervalHasBeenSet)
  {
   payload.WithInteger("connectionRetryInterval", m_connectionRetryInterval);

  }

  if(m_filecacheDurationHasBeenSet)
  {
   payload.WithInteger("filecacheDuration", m_filecacheDuration);

  }

  if(m_mediaStoreStorageClassHasBeenSet)
  {
   payload.WithString("mediaStoreStorageClass", HlsMediaStoreStorageClassMapper::GetNameForHlsMediaStoreStorageClass(m_mediaStoreStorageClass));
  }

  if(m_numRetriesHasBeenSet)
  {
   payload.WithInteger("numRetries", m_numRetries);

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
