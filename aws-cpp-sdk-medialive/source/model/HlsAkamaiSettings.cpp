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

#include <aws/medialive/model/HlsAkamaiSettings.h>
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

HlsAkamaiSettings::HlsAkamaiSettings() : 
    m_connectionRetryInterval(0),
    m_connectionRetryIntervalHasBeenSet(false),
    m_filecacheDuration(0),
    m_filecacheDurationHasBeenSet(false),
    m_httpTransferMode(HlsAkamaiHttpTransferMode::NOT_SET),
    m_httpTransferModeHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_restartDelay(0),
    m_restartDelayHasBeenSet(false),
    m_saltHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

HlsAkamaiSettings::HlsAkamaiSettings(const JsonValue& jsonValue) : 
    m_connectionRetryInterval(0),
    m_connectionRetryIntervalHasBeenSet(false),
    m_filecacheDuration(0),
    m_filecacheDurationHasBeenSet(false),
    m_httpTransferMode(HlsAkamaiHttpTransferMode::NOT_SET),
    m_httpTransferModeHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_restartDelay(0),
    m_restartDelayHasBeenSet(false),
    m_saltHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
  *this = jsonValue;
}

HlsAkamaiSettings& HlsAkamaiSettings::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("httpTransferMode"))
  {
    m_httpTransferMode = HlsAkamaiHttpTransferModeMapper::GetHlsAkamaiHttpTransferModeForName(jsonValue.GetString("httpTransferMode"));

    m_httpTransferModeHasBeenSet = true;
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

  if(jsonValue.ValueExists("salt"))
  {
    m_salt = jsonValue.GetString("salt");

    m_saltHasBeenSet = true;
  }

  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");

    m_tokenHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsAkamaiSettings::Jsonize() const
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

  if(m_httpTransferModeHasBeenSet)
  {
   payload.WithString("httpTransferMode", HlsAkamaiHttpTransferModeMapper::GetNameForHlsAkamaiHttpTransferMode(m_httpTransferMode));
  }

  if(m_numRetriesHasBeenSet)
  {
   payload.WithInteger("numRetries", m_numRetries);

  }

  if(m_restartDelayHasBeenSet)
  {
   payload.WithInteger("restartDelay", m_restartDelay);

  }

  if(m_saltHasBeenSet)
  {
   payload.WithString("salt", m_salt);

  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
