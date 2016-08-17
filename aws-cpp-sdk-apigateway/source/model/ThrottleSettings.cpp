/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ThrottleSettings::ThrottleSettings() : 
    m_burstLimit(0),
    m_burstLimitHasBeenSet(false),
    m_rateLimit(0.0),
    m_rateLimitHasBeenSet(false)
{
}

ThrottleSettings::ThrottleSettings(const JsonValue& jsonValue) : 
    m_burstLimit(0),
    m_burstLimitHasBeenSet(false),
    m_rateLimit(0.0),
    m_rateLimitHasBeenSet(false)
{
  *this = jsonValue;
}

ThrottleSettings& ThrottleSettings::operator =(const JsonValue& jsonValue)
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