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
#include <aws/apigateway/model/MethodSetting.h>
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

MethodSetting::MethodSetting() : 
    m_metricsEnabled(false),
    m_metricsEnabledHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_dataTraceEnabled(false),
    m_dataTraceEnabledHasBeenSet(false),
    m_throttlingBurstLimit(0),
    m_throttlingBurstLimitHasBeenSet(false),
    m_throttlingRateLimit(0.0),
    m_throttlingRateLimitHasBeenSet(false),
    m_cachingEnabled(false),
    m_cachingEnabledHasBeenSet(false),
    m_cacheTtlInSeconds(0),
    m_cacheTtlInSecondsHasBeenSet(false),
    m_cacheDataEncrypted(false),
    m_cacheDataEncryptedHasBeenSet(false),
    m_requireAuthorizationForCacheControl(false),
    m_requireAuthorizationForCacheControlHasBeenSet(false),
    m_unauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy::NOT_SET),
    m_unauthorizedCacheControlHeaderStrategyHasBeenSet(false)
{
}

MethodSetting::MethodSetting(const JsonValue& jsonValue) : 
    m_metricsEnabled(false),
    m_metricsEnabledHasBeenSet(false),
    m_loggingLevelHasBeenSet(false),
    m_dataTraceEnabled(false),
    m_dataTraceEnabledHasBeenSet(false),
    m_throttlingBurstLimit(0),
    m_throttlingBurstLimitHasBeenSet(false),
    m_throttlingRateLimit(0.0),
    m_throttlingRateLimitHasBeenSet(false),
    m_cachingEnabled(false),
    m_cachingEnabledHasBeenSet(false),
    m_cacheTtlInSeconds(0),
    m_cacheTtlInSecondsHasBeenSet(false),
    m_cacheDataEncrypted(false),
    m_cacheDataEncryptedHasBeenSet(false),
    m_requireAuthorizationForCacheControl(false),
    m_requireAuthorizationForCacheControlHasBeenSet(false),
    m_unauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy::NOT_SET),
    m_unauthorizedCacheControlHeaderStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

MethodSetting& MethodSetting::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("metricsEnabled"))
  {
    m_metricsEnabled = jsonValue.GetBool("metricsEnabled");

    m_metricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loggingLevel"))
  {
    m_loggingLevel = jsonValue.GetString("loggingLevel");

    m_loggingLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataTraceEnabled"))
  {
    m_dataTraceEnabled = jsonValue.GetBool("dataTraceEnabled");

    m_dataTraceEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throttlingBurstLimit"))
  {
    m_throttlingBurstLimit = jsonValue.GetInteger("throttlingBurstLimit");

    m_throttlingBurstLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throttlingRateLimit"))
  {
    m_throttlingRateLimit = jsonValue.GetDouble("throttlingRateLimit");

    m_throttlingRateLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cachingEnabled"))
  {
    m_cachingEnabled = jsonValue.GetBool("cachingEnabled");

    m_cachingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheTtlInSeconds"))
  {
    m_cacheTtlInSeconds = jsonValue.GetInteger("cacheTtlInSeconds");

    m_cacheTtlInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheDataEncrypted"))
  {
    m_cacheDataEncrypted = jsonValue.GetBool("cacheDataEncrypted");

    m_cacheDataEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requireAuthorizationForCacheControl"))
  {
    m_requireAuthorizationForCacheControl = jsonValue.GetBool("requireAuthorizationForCacheControl");

    m_requireAuthorizationForCacheControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unauthorizedCacheControlHeaderStrategy"))
  {
    m_unauthorizedCacheControlHeaderStrategy = UnauthorizedCacheControlHeaderStrategyMapper::GetUnauthorizedCacheControlHeaderStrategyForName(jsonValue.GetString("unauthorizedCacheControlHeaderStrategy"));

    m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue MethodSetting::Jsonize() const
{
  JsonValue payload;

  if(m_metricsEnabledHasBeenSet)
  {
   payload.WithBool("metricsEnabled", m_metricsEnabled);

  }

  if(m_loggingLevelHasBeenSet)
  {
   payload.WithString("loggingLevel", m_loggingLevel);

  }

  if(m_dataTraceEnabledHasBeenSet)
  {
   payload.WithBool("dataTraceEnabled", m_dataTraceEnabled);

  }

  if(m_throttlingBurstLimitHasBeenSet)
  {
   payload.WithInteger("throttlingBurstLimit", m_throttlingBurstLimit);

  }

  if(m_throttlingRateLimitHasBeenSet)
  {
   payload.WithDouble("throttlingRateLimit", m_throttlingRateLimit);

  }

  if(m_cachingEnabledHasBeenSet)
  {
   payload.WithBool("cachingEnabled", m_cachingEnabled);

  }

  if(m_cacheTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("cacheTtlInSeconds", m_cacheTtlInSeconds);

  }

  if(m_cacheDataEncryptedHasBeenSet)
  {
   payload.WithBool("cacheDataEncrypted", m_cacheDataEncrypted);

  }

  if(m_requireAuthorizationForCacheControlHasBeenSet)
  {
   payload.WithBool("requireAuthorizationForCacheControl", m_requireAuthorizationForCacheControl);

  }

  if(m_unauthorizedCacheControlHeaderStrategyHasBeenSet)
  {
   payload.WithString("unauthorizedCacheControlHeaderStrategy", UnauthorizedCacheControlHeaderStrategyMapper::GetNameForUnauthorizedCacheControlHeaderStrategy(m_unauthorizedCacheControlHeaderStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws