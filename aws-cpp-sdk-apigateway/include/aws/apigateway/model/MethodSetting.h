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
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/UnauthorizedCacheControlHeaderStrategy.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Specifies the method setting properties.</p>
   */
  class AWS_APIGATEWAY_API MethodSetting
  {
  public:
    MethodSetting();
    MethodSetting(const Aws::Utils::Json::JsonValue& jsonValue);
    MethodSetting& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies whether Amazon CloudWatch metrics are enabled for this method. The
     * PATCH path for this setting is
     * <code>/{method_setting_key}/metrics/enabled</code>, and the value is a
     * Boolean.</p>
     */
    inline bool GetMetricsEnabled() const{ return m_metricsEnabled; }

    /**
     * <p>Specifies whether Amazon CloudWatch metrics are enabled for this method. The
     * PATCH path for this setting is
     * <code>/{method_setting_key}/metrics/enabled</code>, and the value is a
     * Boolean.</p>
     */
    inline void SetMetricsEnabled(bool value) { m_metricsEnabledHasBeenSet = true; m_metricsEnabled = value; }

    /**
     * <p>Specifies whether Amazon CloudWatch metrics are enabled for this method. The
     * PATCH path for this setting is
     * <code>/{method_setting_key}/metrics/enabled</code>, and the value is a
     * Boolean.</p>
     */
    inline MethodSetting& WithMetricsEnabled(bool value) { SetMetricsEnabled(value); return *this;}

    /**
     * <p>Specifies the logging level for this method, which effects the log entries
     * pushed to Amazon CloudWatch Logs. The PATCH path for this setting is
     * <code>/{method_setting_key}/logging/loglevel</code>, and the available levels
     * are <code>OFF</code>, <code>ERROR</code>, and <code>INFO</code>.</p>
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * <p>Specifies the logging level for this method, which effects the log entries
     * pushed to Amazon CloudWatch Logs. The PATCH path for this setting is
     * <code>/{method_setting_key}/logging/loglevel</code>, and the available levels
     * are <code>OFF</code>, <code>ERROR</code>, and <code>INFO</code>.</p>
     */
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * <p>Specifies the logging level for this method, which effects the log entries
     * pushed to Amazon CloudWatch Logs. The PATCH path for this setting is
     * <code>/{method_setting_key}/logging/loglevel</code>, and the available levels
     * are <code>OFF</code>, <code>ERROR</code>, and <code>INFO</code>.</p>
     */
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * <p>Specifies the logging level for this method, which effects the log entries
     * pushed to Amazon CloudWatch Logs. The PATCH path for this setting is
     * <code>/{method_setting_key}/logging/loglevel</code>, and the available levels
     * are <code>OFF</code>, <code>ERROR</code>, and <code>INFO</code>.</p>
     */
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }

    /**
     * <p>Specifies the logging level for this method, which effects the log entries
     * pushed to Amazon CloudWatch Logs. The PATCH path for this setting is
     * <code>/{method_setting_key}/logging/loglevel</code>, and the available levels
     * are <code>OFF</code>, <code>ERROR</code>, and <code>INFO</code>.</p>
     */
    inline MethodSetting& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}

    /**
     * <p>Specifies the logging level for this method, which effects the log entries
     * pushed to Amazon CloudWatch Logs. The PATCH path for this setting is
     * <code>/{method_setting_key}/logging/loglevel</code>, and the available levels
     * are <code>OFF</code>, <code>ERROR</code>, and <code>INFO</code>.</p>
     */
    inline MethodSetting& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(value); return *this;}

    /**
     * <p>Specifies the logging level for this method, which effects the log entries
     * pushed to Amazon CloudWatch Logs. The PATCH path for this setting is
     * <code>/{method_setting_key}/logging/loglevel</code>, and the available levels
     * are <code>OFF</code>, <code>ERROR</code>, and <code>INFO</code>.</p>
     */
    inline MethodSetting& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}

    /**
     * <p>Specifies whether data trace logging is enabled for this method, which
     * effects the log entries pushed to Amazon CloudWatch Logs. The PATCH path for
     * this setting is <code>/{method_setting_key}/logging/dataTrace</code>, and the
     * value is a Boolean.</p>
     */
    inline bool GetDataTraceEnabled() const{ return m_dataTraceEnabled; }

    /**
     * <p>Specifies whether data trace logging is enabled for this method, which
     * effects the log entries pushed to Amazon CloudWatch Logs. The PATCH path for
     * this setting is <code>/{method_setting_key}/logging/dataTrace</code>, and the
     * value is a Boolean.</p>
     */
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }

    /**
     * <p>Specifies whether data trace logging is enabled for this method, which
     * effects the log entries pushed to Amazon CloudWatch Logs. The PATCH path for
     * this setting is <code>/{method_setting_key}/logging/dataTrace</code>, and the
     * value is a Boolean.</p>
     */
    inline MethodSetting& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}

    /**
     * <p>Specifies the throttling burst limit. The PATCH path for this setting is
     * <code>/{method_setting_key}/throttling/burstLimit</code>, and the value is an
     * integer.</p>
     */
    inline int GetThrottlingBurstLimit() const{ return m_throttlingBurstLimit; }

    /**
     * <p>Specifies the throttling burst limit. The PATCH path for this setting is
     * <code>/{method_setting_key}/throttling/burstLimit</code>, and the value is an
     * integer.</p>
     */
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }

    /**
     * <p>Specifies the throttling burst limit. The PATCH path for this setting is
     * <code>/{method_setting_key}/throttling/burstLimit</code>, and the value is an
     * integer.</p>
     */
    inline MethodSetting& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}

    /**
     * <p>Specifies the throttling rate limit. The PATCH path for this setting is
     * <code>/{method_setting_key}/throttling/rateLimit</code>, and the value is a
     * double.</p>
     */
    inline double GetThrottlingRateLimit() const{ return m_throttlingRateLimit; }

    /**
     * <p>Specifies the throttling rate limit. The PATCH path for this setting is
     * <code>/{method_setting_key}/throttling/rateLimit</code>, and the value is a
     * double.</p>
     */
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }

    /**
     * <p>Specifies the throttling rate limit. The PATCH path for this setting is
     * <code>/{method_setting_key}/throttling/rateLimit</code>, and the value is a
     * double.</p>
     */
    inline MethodSetting& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}

    /**
     * <p>Specifies whether responses should be cached and returned for requests. A
     * cache cluster must be enabled on the stage for responses to be cached. The PATCH
     * path for this setting is <code>/{method_setting_key}/caching/enabled</code>, and
     * the value is a Boolean.</p>
     */
    inline bool GetCachingEnabled() const{ return m_cachingEnabled; }

    /**
     * <p>Specifies whether responses should be cached and returned for requests. A
     * cache cluster must be enabled on the stage for responses to be cached. The PATCH
     * path for this setting is <code>/{method_setting_key}/caching/enabled</code>, and
     * the value is a Boolean.</p>
     */
    inline void SetCachingEnabled(bool value) { m_cachingEnabledHasBeenSet = true; m_cachingEnabled = value; }

    /**
     * <p>Specifies whether responses should be cached and returned for requests. A
     * cache cluster must be enabled on the stage for responses to be cached. The PATCH
     * path for this setting is <code>/{method_setting_key}/caching/enabled</code>, and
     * the value is a Boolean.</p>
     */
    inline MethodSetting& WithCachingEnabled(bool value) { SetCachingEnabled(value); return *this;}

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response will be cached. The PATCH path for this
     * setting is <code>/{method_setting_key}/caching/ttlInSeconds</code>, and the
     * value is an integer.</p>
     */
    inline int GetCacheTtlInSeconds() const{ return m_cacheTtlInSeconds; }

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response will be cached. The PATCH path for this
     * setting is <code>/{method_setting_key}/caching/ttlInSeconds</code>, and the
     * value is an integer.</p>
     */
    inline void SetCacheTtlInSeconds(int value) { m_cacheTtlInSecondsHasBeenSet = true; m_cacheTtlInSeconds = value; }

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response will be cached. The PATCH path for this
     * setting is <code>/{method_setting_key}/caching/ttlInSeconds</code>, and the
     * value is an integer.</p>
     */
    inline MethodSetting& WithCacheTtlInSeconds(int value) { SetCacheTtlInSeconds(value); return *this;}

    /**
     * <p>Specifies whether the cached responses are encrypted. The PATCH path for this
     * setting is <code>/{method_setting_key}/caching/dataEncrypted</code>, and the
     * value is a Boolean.</p>
     */
    inline bool GetCacheDataEncrypted() const{ return m_cacheDataEncrypted; }

    /**
     * <p>Specifies whether the cached responses are encrypted. The PATCH path for this
     * setting is <code>/{method_setting_key}/caching/dataEncrypted</code>, and the
     * value is a Boolean.</p>
     */
    inline void SetCacheDataEncrypted(bool value) { m_cacheDataEncryptedHasBeenSet = true; m_cacheDataEncrypted = value; }

    /**
     * <p>Specifies whether the cached responses are encrypted. The PATCH path for this
     * setting is <code>/{method_setting_key}/caching/dataEncrypted</code>, and the
     * value is a Boolean.</p>
     */
    inline MethodSetting& WithCacheDataEncrypted(bool value) { SetCacheDataEncrypted(value); return *this;}

    /**
     * <p>Specifies whether authorization is required for a cache invalidation request.
     * The PATCH path for this setting is
     * <code>/{method_setting_key}/caching/requireAuthorizationForCacheControl</code>,
     * and the value is a Boolean.</p>
     */
    inline bool GetRequireAuthorizationForCacheControl() const{ return m_requireAuthorizationForCacheControl; }

    /**
     * <p>Specifies whether authorization is required for a cache invalidation request.
     * The PATCH path for this setting is
     * <code>/{method_setting_key}/caching/requireAuthorizationForCacheControl</code>,
     * and the value is a Boolean.</p>
     */
    inline void SetRequireAuthorizationForCacheControl(bool value) { m_requireAuthorizationForCacheControlHasBeenSet = true; m_requireAuthorizationForCacheControl = value; }

    /**
     * <p>Specifies whether authorization is required for a cache invalidation request.
     * The PATCH path for this setting is
     * <code>/{method_setting_key}/caching/requireAuthorizationForCacheControl</code>,
     * and the value is a Boolean.</p>
     */
    inline MethodSetting& WithRequireAuthorizationForCacheControl(bool value) { SetRequireAuthorizationForCacheControl(value); return *this;}

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation. The
     * PATCH path for this setting is
     * <code>/{method_setting_key}/caching/unauthorizedCacheControlHeaderStrategy</code>,
     * and the available values are <code>FAIL_WITH_403</code>,
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code>,
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code>.</p>
     */
    inline const UnauthorizedCacheControlHeaderStrategy& GetUnauthorizedCacheControlHeaderStrategy() const{ return m_unauthorizedCacheControlHeaderStrategy; }

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation. The
     * PATCH path for this setting is
     * <code>/{method_setting_key}/caching/unauthorizedCacheControlHeaderStrategy</code>,
     * and the available values are <code>FAIL_WITH_403</code>,
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code>,
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code>.</p>
     */
    inline void SetUnauthorizedCacheControlHeaderStrategy(const UnauthorizedCacheControlHeaderStrategy& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = value; }

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation. The
     * PATCH path for this setting is
     * <code>/{method_setting_key}/caching/unauthorizedCacheControlHeaderStrategy</code>,
     * and the available values are <code>FAIL_WITH_403</code>,
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code>,
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code>.</p>
     */
    inline void SetUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy&& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = value; }

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation. The
     * PATCH path for this setting is
     * <code>/{method_setting_key}/caching/unauthorizedCacheControlHeaderStrategy</code>,
     * and the available values are <code>FAIL_WITH_403</code>,
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code>,
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code>.</p>
     */
    inline MethodSetting& WithUnauthorizedCacheControlHeaderStrategy(const UnauthorizedCacheControlHeaderStrategy& value) { SetUnauthorizedCacheControlHeaderStrategy(value); return *this;}

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation. The
     * PATCH path for this setting is
     * <code>/{method_setting_key}/caching/unauthorizedCacheControlHeaderStrategy</code>,
     * and the available values are <code>FAIL_WITH_403</code>,
     * <code>SUCCEED_WITH_RESPONSE_HEADER</code>,
     * <code>SUCCEED_WITHOUT_RESPONSE_HEADER</code>.</p>
     */
    inline MethodSetting& WithUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy&& value) { SetUnauthorizedCacheControlHeaderStrategy(value); return *this;}

  private:
    bool m_metricsEnabled;
    bool m_metricsEnabledHasBeenSet;
    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet;
    bool m_dataTraceEnabled;
    bool m_dataTraceEnabledHasBeenSet;
    int m_throttlingBurstLimit;
    bool m_throttlingBurstLimitHasBeenSet;
    double m_throttlingRateLimit;
    bool m_throttlingRateLimitHasBeenSet;
    bool m_cachingEnabled;
    bool m_cachingEnabledHasBeenSet;
    int m_cacheTtlInSeconds;
    bool m_cacheTtlInSecondsHasBeenSet;
    bool m_cacheDataEncrypted;
    bool m_cacheDataEncryptedHasBeenSet;
    bool m_requireAuthorizationForCacheControl;
    bool m_requireAuthorizationForCacheControlHasBeenSet;
    UnauthorizedCacheControlHeaderStrategy m_unauthorizedCacheControlHeaderStrategy;
    bool m_unauthorizedCacheControlHeaderStrategyHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
