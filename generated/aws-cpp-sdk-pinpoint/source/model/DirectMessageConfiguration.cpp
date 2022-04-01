/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DirectMessageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

DirectMessageConfiguration::DirectMessageConfiguration() : 
    m_aDMMessageHasBeenSet(false),
    m_aPNSMessageHasBeenSet(false),
    m_baiduMessageHasBeenSet(false),
    m_defaultMessageHasBeenSet(false),
    m_defaultPushNotificationMessageHasBeenSet(false),
    m_emailMessageHasBeenSet(false),
    m_gCMMessageHasBeenSet(false),
    m_sMSMessageHasBeenSet(false),
    m_voiceMessageHasBeenSet(false)
{
}

DirectMessageConfiguration::DirectMessageConfiguration(JsonView jsonValue) : 
    m_aDMMessageHasBeenSet(false),
    m_aPNSMessageHasBeenSet(false),
    m_baiduMessageHasBeenSet(false),
    m_defaultMessageHasBeenSet(false),
    m_defaultPushNotificationMessageHasBeenSet(false),
    m_emailMessageHasBeenSet(false),
    m_gCMMessageHasBeenSet(false),
    m_sMSMessageHasBeenSet(false),
    m_voiceMessageHasBeenSet(false)
{
  *this = jsonValue;
}

DirectMessageConfiguration& DirectMessageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ADMMessage"))
  {
    m_aDMMessage = jsonValue.GetObject("ADMMessage");

    m_aDMMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("APNSMessage"))
  {
    m_aPNSMessage = jsonValue.GetObject("APNSMessage");

    m_aPNSMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaiduMessage"))
  {
    m_baiduMessage = jsonValue.GetObject("BaiduMessage");

    m_baiduMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultMessage"))
  {
    m_defaultMessage = jsonValue.GetObject("DefaultMessage");

    m_defaultMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultPushNotificationMessage"))
  {
    m_defaultPushNotificationMessage = jsonValue.GetObject("DefaultPushNotificationMessage");

    m_defaultPushNotificationMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailMessage"))
  {
    m_emailMessage = jsonValue.GetObject("EmailMessage");

    m_emailMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GCMMessage"))
  {
    m_gCMMessage = jsonValue.GetObject("GCMMessage");

    m_gCMMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SMSMessage"))
  {
    m_sMSMessage = jsonValue.GetObject("SMSMessage");

    m_sMSMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceMessage"))
  {
    m_voiceMessage = jsonValue.GetObject("VoiceMessage");

    m_voiceMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectMessageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_aDMMessageHasBeenSet)
  {
   payload.WithObject("ADMMessage", m_aDMMessage.Jsonize());

  }

  if(m_aPNSMessageHasBeenSet)
  {
   payload.WithObject("APNSMessage", m_aPNSMessage.Jsonize());

  }

  if(m_baiduMessageHasBeenSet)
  {
   payload.WithObject("BaiduMessage", m_baiduMessage.Jsonize());

  }

  if(m_defaultMessageHasBeenSet)
  {
   payload.WithObject("DefaultMessage", m_defaultMessage.Jsonize());

  }

  if(m_defaultPushNotificationMessageHasBeenSet)
  {
   payload.WithObject("DefaultPushNotificationMessage", m_defaultPushNotificationMessage.Jsonize());

  }

  if(m_emailMessageHasBeenSet)
  {
   payload.WithObject("EmailMessage", m_emailMessage.Jsonize());

  }

  if(m_gCMMessageHasBeenSet)
  {
   payload.WithObject("GCMMessage", m_gCMMessage.Jsonize());

  }

  if(m_sMSMessageHasBeenSet)
  {
   payload.WithObject("SMSMessage", m_sMSMessage.Jsonize());

  }

  if(m_voiceMessageHasBeenSet)
  {
   payload.WithObject("VoiceMessage", m_voiceMessage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
