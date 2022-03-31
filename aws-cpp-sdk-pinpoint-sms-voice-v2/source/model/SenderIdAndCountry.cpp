/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SenderIdAndCountry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

SenderIdAndCountry::SenderIdAndCountry() : 
    m_senderIdHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false)
{
}

SenderIdAndCountry::SenderIdAndCountry(JsonView jsonValue) : 
    m_senderIdHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false)
{
  *this = jsonValue;
}

SenderIdAndCountry& SenderIdAndCountry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SenderId"))
  {
    m_senderId = jsonValue.GetString("SenderId");

    m_senderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");

    m_isoCountryCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue SenderIdAndCountry::Jsonize() const
{
  JsonValue payload;

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("SenderId", m_senderId);

  }

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
