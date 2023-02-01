/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SipMediaApplicationLoggingConfiguration.h>
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

SipMediaApplicationLoggingConfiguration::SipMediaApplicationLoggingConfiguration() : 
    m_enableSipMediaApplicationMessageLogs(false),
    m_enableSipMediaApplicationMessageLogsHasBeenSet(false)
{
}

SipMediaApplicationLoggingConfiguration::SipMediaApplicationLoggingConfiguration(JsonView jsonValue) : 
    m_enableSipMediaApplicationMessageLogs(false),
    m_enableSipMediaApplicationMessageLogsHasBeenSet(false)
{
  *this = jsonValue;
}

SipMediaApplicationLoggingConfiguration& SipMediaApplicationLoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableSipMediaApplicationMessageLogs"))
  {
    m_enableSipMediaApplicationMessageLogs = jsonValue.GetBool("EnableSipMediaApplicationMessageLogs");

    m_enableSipMediaApplicationMessageLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue SipMediaApplicationLoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableSipMediaApplicationMessageLogsHasBeenSet)
  {
   payload.WithBool("EnableSipMediaApplicationMessageLogs", m_enableSipMediaApplicationMessageLogs);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
