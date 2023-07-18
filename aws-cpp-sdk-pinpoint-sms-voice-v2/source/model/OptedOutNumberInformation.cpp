/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/OptedOutNumberInformation.h>
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

OptedOutNumberInformation::OptedOutNumberInformation() : 
    m_optedOutNumberHasBeenSet(false),
    m_optedOutTimestampHasBeenSet(false),
    m_endUserOptedOut(false),
    m_endUserOptedOutHasBeenSet(false)
{
}

OptedOutNumberInformation::OptedOutNumberInformation(JsonView jsonValue) : 
    m_optedOutNumberHasBeenSet(false),
    m_optedOutTimestampHasBeenSet(false),
    m_endUserOptedOut(false),
    m_endUserOptedOutHasBeenSet(false)
{
  *this = jsonValue;
}

OptedOutNumberInformation& OptedOutNumberInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OptedOutNumber"))
  {
    m_optedOutNumber = jsonValue.GetString("OptedOutNumber");

    m_optedOutNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptedOutTimestamp"))
  {
    m_optedOutTimestamp = jsonValue.GetDouble("OptedOutTimestamp");

    m_optedOutTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndUserOptedOut"))
  {
    m_endUserOptedOut = jsonValue.GetBool("EndUserOptedOut");

    m_endUserOptedOutHasBeenSet = true;
  }

  return *this;
}

JsonValue OptedOutNumberInformation::Jsonize() const
{
  JsonValue payload;

  if(m_optedOutNumberHasBeenSet)
  {
   payload.WithString("OptedOutNumber", m_optedOutNumber);

  }

  if(m_optedOutTimestampHasBeenSet)
  {
   payload.WithDouble("OptedOutTimestamp", m_optedOutTimestamp.SecondsWithMSPrecision());
  }

  if(m_endUserOptedOutHasBeenSet)
  {
   payload.WithBool("EndUserOptedOut", m_endUserOptedOut);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
