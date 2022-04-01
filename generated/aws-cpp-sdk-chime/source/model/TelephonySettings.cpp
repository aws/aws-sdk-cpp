/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TelephonySettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

TelephonySettings::TelephonySettings() : 
    m_inboundCalling(false),
    m_inboundCallingHasBeenSet(false),
    m_outboundCalling(false),
    m_outboundCallingHasBeenSet(false),
    m_sMS(false),
    m_sMSHasBeenSet(false)
{
}

TelephonySettings::TelephonySettings(JsonView jsonValue) : 
    m_inboundCalling(false),
    m_inboundCallingHasBeenSet(false),
    m_outboundCalling(false),
    m_outboundCallingHasBeenSet(false),
    m_sMS(false),
    m_sMSHasBeenSet(false)
{
  *this = jsonValue;
}

TelephonySettings& TelephonySettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InboundCalling"))
  {
    m_inboundCalling = jsonValue.GetBool("InboundCalling");

    m_inboundCallingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundCalling"))
  {
    m_outboundCalling = jsonValue.GetBool("OutboundCalling");

    m_outboundCallingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SMS"))
  {
    m_sMS = jsonValue.GetBool("SMS");

    m_sMSHasBeenSet = true;
  }

  return *this;
}

JsonValue TelephonySettings::Jsonize() const
{
  JsonValue payload;

  if(m_inboundCallingHasBeenSet)
  {
   payload.WithBool("InboundCalling", m_inboundCalling);

  }

  if(m_outboundCallingHasBeenSet)
  {
   payload.WithBool("OutboundCalling", m_outboundCalling);

  }

  if(m_sMSHasBeenSet)
  {
   payload.WithBool("SMS", m_sMS);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
