/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Expiry.h>
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

Expiry::Expiry(JsonView jsonValue)
{
  *this = jsonValue;
}

Expiry& Expiry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");
    m_durationInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpiryTimestamp"))
  {
    m_expiryTimestamp = jsonValue.GetDouble("ExpiryTimestamp");
    m_expiryTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue Expiry::Jsonize() const
{
  JsonValue payload;

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("DurationInSeconds", m_durationInSeconds);

  }

  if(m_expiryTimestampHasBeenSet)
  {
   payload.WithDouble("ExpiryTimestamp", m_expiryTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
