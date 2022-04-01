/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SpendLimit.h>
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

SpendLimit::SpendLimit() : 
    m_name(SpendLimitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_enforcedLimit(0),
    m_enforcedLimitHasBeenSet(false),
    m_maxLimit(0),
    m_maxLimitHasBeenSet(false),
    m_overridden(false),
    m_overriddenHasBeenSet(false)
{
}

SpendLimit::SpendLimit(JsonView jsonValue) : 
    m_name(SpendLimitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_enforcedLimit(0),
    m_enforcedLimitHasBeenSet(false),
    m_maxLimit(0),
    m_maxLimitHasBeenSet(false),
    m_overridden(false),
    m_overriddenHasBeenSet(false)
{
  *this = jsonValue;
}

SpendLimit& SpendLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = SpendLimitNameMapper::GetSpendLimitNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnforcedLimit"))
  {
    m_enforcedLimit = jsonValue.GetInt64("EnforcedLimit");

    m_enforcedLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxLimit"))
  {
    m_maxLimit = jsonValue.GetInt64("MaxLimit");

    m_maxLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overridden"))
  {
    m_overridden = jsonValue.GetBool("Overridden");

    m_overriddenHasBeenSet = true;
  }

  return *this;
}

JsonValue SpendLimit::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", SpendLimitNameMapper::GetNameForSpendLimitName(m_name));
  }

  if(m_enforcedLimitHasBeenSet)
  {
   payload.WithInt64("EnforcedLimit", m_enforcedLimit);

  }

  if(m_maxLimitHasBeenSet)
  {
   payload.WithInt64("MaxLimit", m_maxLimit);

  }

  if(m_overriddenHasBeenSet)
  {
   payload.WithBool("Overridden", m_overridden);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
