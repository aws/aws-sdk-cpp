/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/Participant.h>
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

Participant::Participant() : 
    m_phoneNumberHasBeenSet(false),
    m_proxyPhoneNumberHasBeenSet(false)
{
}

Participant::Participant(JsonView jsonValue) : 
    m_phoneNumberHasBeenSet(false),
    m_proxyPhoneNumberHasBeenSet(false)
{
  *this = jsonValue;
}

Participant& Participant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProxyPhoneNumber"))
  {
    m_proxyPhoneNumber = jsonValue.GetString("ProxyPhoneNumber");

    m_proxyPhoneNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue Participant::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_proxyPhoneNumberHasBeenSet)
  {
   payload.WithString("ProxyPhoneNumber", m_proxyPhoneNumber);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
