/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/ThrottleSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

ThrottleSettings::ThrottleSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ThrottleSettings& ThrottleSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("burstLimit"))
  {
    m_burstLimit = jsonValue.GetInteger("burstLimit");
    m_burstLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateLimit"))
  {
    m_rateLimit = jsonValue.GetDouble("rateLimit");
    m_rateLimitHasBeenSet = true;
  }
  return *this;
}

JsonValue ThrottleSettings::Jsonize() const
{
  JsonValue payload;

  if(m_burstLimitHasBeenSet)
  {
   payload.WithInteger("burstLimit", m_burstLimit);

  }

  if(m_rateLimitHasBeenSet)
  {
   payload.WithDouble("rateLimit", m_rateLimit);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
