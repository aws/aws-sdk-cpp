/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumberCapabilities.h>
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

PhoneNumberCapabilities::PhoneNumberCapabilities() : 
    m_inboundCall(false),
    m_inboundCallHasBeenSet(false),
    m_outboundCall(false),
    m_outboundCallHasBeenSet(false),
    m_inboundSMS(false),
    m_inboundSMSHasBeenSet(false),
    m_outboundSMS(false),
    m_outboundSMSHasBeenSet(false),
    m_inboundMMS(false),
    m_inboundMMSHasBeenSet(false),
    m_outboundMMS(false),
    m_outboundMMSHasBeenSet(false)
{
}

PhoneNumberCapabilities::PhoneNumberCapabilities(JsonView jsonValue) : 
    m_inboundCall(false),
    m_inboundCallHasBeenSet(false),
    m_outboundCall(false),
    m_outboundCallHasBeenSet(false),
    m_inboundSMS(false),
    m_inboundSMSHasBeenSet(false),
    m_outboundSMS(false),
    m_outboundSMSHasBeenSet(false),
    m_inboundMMS(false),
    m_inboundMMSHasBeenSet(false),
    m_outboundMMS(false),
    m_outboundMMSHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberCapabilities& PhoneNumberCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InboundCall"))
  {
    m_inboundCall = jsonValue.GetBool("InboundCall");

    m_inboundCallHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundCall"))
  {
    m_outboundCall = jsonValue.GetBool("OutboundCall");

    m_outboundCallHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboundSMS"))
  {
    m_inboundSMS = jsonValue.GetBool("InboundSMS");

    m_inboundSMSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundSMS"))
  {
    m_outboundSMS = jsonValue.GetBool("OutboundSMS");

    m_outboundSMSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboundMMS"))
  {
    m_inboundMMS = jsonValue.GetBool("InboundMMS");

    m_inboundMMSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundMMS"))
  {
    m_outboundMMS = jsonValue.GetBool("OutboundMMS");

    m_outboundMMSHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumberCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_inboundCallHasBeenSet)
  {
   payload.WithBool("InboundCall", m_inboundCall);

  }

  if(m_outboundCallHasBeenSet)
  {
   payload.WithBool("OutboundCall", m_outboundCall);

  }

  if(m_inboundSMSHasBeenSet)
  {
   payload.WithBool("InboundSMS", m_inboundSMS);

  }

  if(m_outboundSMSHasBeenSet)
  {
   payload.WithBool("OutboundSMS", m_outboundSMS);

  }

  if(m_inboundMMSHasBeenSet)
  {
   payload.WithBool("InboundMMS", m_inboundMMS);

  }

  if(m_outboundMMSHasBeenSet)
  {
   payload.WithBool("OutboundMMS", m_outboundMMS);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
