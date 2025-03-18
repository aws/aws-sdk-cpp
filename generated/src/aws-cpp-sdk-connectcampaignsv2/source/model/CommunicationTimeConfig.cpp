/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CommunicationTimeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

CommunicationTimeConfig::CommunicationTimeConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CommunicationTimeConfig& CommunicationTimeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("localTimeZoneConfig"))
  {
    m_localTimeZoneConfig = jsonValue.GetObject("localTimeZoneConfig");
    m_localTimeZoneConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("telephony"))
  {
    m_telephony = jsonValue.GetObject("telephony");
    m_telephonyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sms"))
  {
    m_sms = jsonValue.GetObject("sms");
    m_smsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetObject("email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue CommunicationTimeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_localTimeZoneConfigHasBeenSet)
  {
   payload.WithObject("localTimeZoneConfig", m_localTimeZoneConfig.Jsonize());

  }

  if(m_telephonyHasBeenSet)
  {
   payload.WithObject("telephony", m_telephony.Jsonize());

  }

  if(m_smsHasBeenSet)
  {
   payload.WithObject("sms", m_sms.Jsonize());

  }

  if(m_emailHasBeenSet)
  {
   payload.WithObject("email", m_email.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
