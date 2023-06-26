﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/LoggingConfiguration.h>
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

LoggingConfiguration::LoggingConfiguration() : 
    m_enableSIPLogs(false),
    m_enableSIPLogsHasBeenSet(false),
    m_enableMediaMetricLogs(false),
    m_enableMediaMetricLogsHasBeenSet(false)
{
}

LoggingConfiguration::LoggingConfiguration(JsonView jsonValue) : 
    m_enableSIPLogs(false),
    m_enableSIPLogsHasBeenSet(false),
    m_enableMediaMetricLogs(false),
    m_enableMediaMetricLogsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfiguration& LoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableSIPLogs"))
  {
    m_enableSIPLogs = jsonValue.GetBool("EnableSIPLogs");

    m_enableSIPLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableMediaMetricLogs"))
  {
    m_enableMediaMetricLogs = jsonValue.GetBool("EnableMediaMetricLogs");

    m_enableMediaMetricLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableSIPLogsHasBeenSet)
  {
   payload.WithBool("EnableSIPLogs", m_enableSIPLogs);

  }

  if(m_enableMediaMetricLogsHasBeenSet)
  {
   payload.WithBool("EnableMediaMetricLogs", m_enableMediaMetricLogs);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
