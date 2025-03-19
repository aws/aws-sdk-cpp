/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CustomerVoiceActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

CustomerVoiceActivity::CustomerVoiceActivity(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomerVoiceActivity& CustomerVoiceActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GreetingStartTimestamp"))
  {
    m_greetingStartTimestamp = jsonValue.GetDouble("GreetingStartTimestamp");
    m_greetingStartTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GreetingEndTimestamp"))
  {
    m_greetingEndTimestamp = jsonValue.GetDouble("GreetingEndTimestamp");
    m_greetingEndTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerVoiceActivity::Jsonize() const
{
  JsonValue payload;

  if(m_greetingStartTimestampHasBeenSet)
  {
   payload.WithDouble("GreetingStartTimestamp", m_greetingStartTimestamp.SecondsWithMSPrecision());
  }

  if(m_greetingEndTimestampHasBeenSet)
  {
   payload.WithDouble("GreetingEndTimestamp", m_greetingEndTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
