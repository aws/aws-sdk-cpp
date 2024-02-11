/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/UnauthorizedCacheControlHeaderStrategy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Specifies the method setting properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/MethodSetting">AWS
   * API Reference</a></p>
   */
  class MethodSetting
  {
  public:
    AWS_APIGATEWAY_API MethodSetting();
    AWS_APIGATEWAY_API MethodSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API MethodSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether Amazon CloudWatch metrics are enabled for this method.</p>
     */
    inline bool GetMetricsEnabled() const{ return m_metricsEnabled; }

    /**
     * <p>Specifies whether Amazon CloudWatch metrics are enabled for this method.</p>
     */
    inline bool MetricsEnabledHasBeenSet() const { return m_metricsEnabledHasBeenSet; }

    /**
     * <p>Specifies whether Amazon CloudWatch metrics are enabled for this method.</p>
     */
    inline void SetMetricsEnabled(bool value) { m_metricsEnabledHasBeenSet = true; m_metricsEnabled = value; }

    /**
     * <p>Specifies whether Amazon CloudWatch metrics are enabled for this method.</p>
     */
    inline MethodSetting& WithMetricsEnabled(bool value) { SetMetricsEnabled(value); return *this;}


    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }

    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }

    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }

    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }

    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }

    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline MethodSetting& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}

    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline MethodSetting& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}

    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline MethodSetting& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}


    /**
     * <p>Specifies whether data trace logging is enabled for this method, which
     * affects the log entries pushed to Amazon CloudWatch Logs.</p>
     */
    inline bool GetDataTraceEnabled() const{ return m_dataTraceEnabled; }

    /**
     * <p>Specifies whether data trace logging is enabled for this method, which
     * affects the log entries pushed to Amazon CloudWatch Logs.</p>
     */
    inline bool DataTraceEnabledHasBeenSet() const { return m_dataTraceEnabledHasBeenSet; }

    /**
     * <p>Specifies whether data trace logging is enabled for this method, which
     * affects the log entries pushed to Amazon CloudWatch Logs.</p>
     */
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }

    /**
     * <p>Specifies whether data trace logging is enabled for this method, which
     * affects the log entries pushed to Amazon CloudWatch Logs.</p>
     */
    inline MethodSetting& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}


    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline int GetThrottlingBurstLimit() const{ return m_throttlingBurstLimit; }

    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline bool ThrottlingBurstLimitHasBeenSet() const { return m_throttlingBurstLimitHasBeenSet; }

    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }

    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline MethodSetting& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}


    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline double GetThrottlingRateLimit() const{ return m_throttlingRateLimit; }

    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline bool ThrottlingRateLimitHasBeenSet() const { return m_throttlingRateLimitHasBeenSet; }

    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }

    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline MethodSetting& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}


    /**
     * <p>Specifies whether responses should be cached and returned for requests. A
     * cache cluster must be enabled on the stage for responses to be cached.</p>
     */
    inline bool GetCachingEnabled() const{ return m_cachingEnabled; }

    /**
     * <p>Specifies whether responses should be cached and returned for requests. A
     * cache cluster must be enabled on the stage for responses to be cached.</p>
     */
    inline bool CachingEnabledHasBeenSet() const { return m_cachingEnabledHasBeenSet; }

    /**
     * <p>Specifies whether responses should be cached and returned for requests. A
     * cache cluster must be enabled on the stage for responses to be cached.</p>
     */
    inline void SetCachingEnabled(bool value) { m_cachingEnabledHasBeenSet = true; m_cachingEnabled = value; }

    /**
     * <p>Specifies whether responses should be cached and returned for requests. A
     * cache cluster must be enabled on the stage for responses to be cached.</p>
     */
    inline MethodSetting& WithCachingEnabled(bool value) { SetCachingEnabled(value); return *this;}


    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response will be cached.</p>
     */
    inline int GetCacheTtlInSeconds() const{ return m_cacheTtlInSeconds; }

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response will be cached.</p>
     */
    inline bool CacheTtlInSecondsHasBeenSet() const { return m_cacheTtlInSecondsHasBeenSet; }

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response will be cached.</p>
     */
    inline void SetCacheTtlInSeconds(int value) { m_cacheTtlInSecondsHasBeenSet = true; m_cacheTtlInSeconds = value; }

    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response will be cached.</p>
     */
    inline MethodSetting& WithCacheTtlInSeconds(int value) { SetCacheTtlInSeconds(value); return *this;}


    /**
     * <p>Specifies whether the cached responses are encrypted.</p>
     */
    inline bool GetCacheDataEncrypted() const{ return m_cacheDataEncrypted; }

    /**
     * <p>Specifies whether the cached responses are encrypted.</p>
     */
    inline bool CacheDataEncryptedHasBeenSet() const { return m_cacheDataEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether the cached responses are encrypted.</p>
     */
    inline void SetCacheDataEncrypted(bool value) { m_cacheDataEncryptedHasBeenSet = true; m_cacheDataEncrypted = value; }

    /**
     * <p>Specifies whether the cached responses are encrypted.</p>
     */
    inline MethodSetting& WithCacheDataEncrypted(bool value) { SetCacheDataEncrypted(value); return *this;}


    /**
     * <p>Specifies whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline bool GetRequireAuthorizationForCacheControl() const{ return m_requireAuthorizationForCacheControl; }

    /**
     * <p>Specifies whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline bool RequireAuthorizationForCacheControlHasBeenSet() const { return m_requireAuthorizationForCacheControlHasBeenSet; }

    /**
     * <p>Specifies whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline void SetRequireAuthorizationForCacheControl(bool value) { m_requireAuthorizationForCacheControlHasBeenSet = true; m_requireAuthorizationForCacheControl = value; }

    /**
     * <p>Specifies whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline MethodSetting& WithRequireAuthorizationForCacheControl(bool value) { SetRequireAuthorizationForCacheControl(value); return *this;}


    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation.</p>
     */
    inline const UnauthorizedCacheControlHeaderStrategy& GetUnauthorizedCacheControlHeaderStrategy() const{ return m_unauthorizedCacheControlHeaderStrategy; }

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation.</p>
     */
    inline bool UnauthorizedCacheControlHeaderStrategyHasBeenSet() const { return m_unauthorizedCacheControlHeaderStrategyHasBeenSet; }

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation.</p>
     */
    inline void SetUnauthorizedCacheControlHeaderStrategy(const UnauthorizedCacheControlHeaderStrategy& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = value; }

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation.</p>
     */
    inline void SetUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy&& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = std::move(value); }

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation.</p>
     */
    inline MethodSetting& WithUnauthorizedCacheControlHeaderStrategy(const UnauthorizedCacheControlHeaderStrategy& value) { SetUnauthorizedCacheControlHeaderStrategy(value); return *this;}

    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation.</p>
     */
    inline MethodSetting& WithUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy&& value) { SetUnauthorizedCacheControlHeaderStrategy(std::move(value)); return *this;}

  private:

    bool m_metricsEnabled;
    bool m_metricsEnabledHasBeenSet = false;

    Aws::String m_loggingLevel;
    bool m_loggingLevelHasBeenSet = false;

    bool m_dataTraceEnabled;
    bool m_dataTraceEnabledHasBeenSet = false;

    int m_throttlingBurstLimit;
    bool m_throttlingBurstLimitHasBeenSet = false;

    double m_throttlingRateLimit;
    bool m_throttlingRateLimitHasBeenSet = false;

    bool m_cachingEnabled;
    bool m_cachingEnabledHasBeenSet = false;

    int m_cacheTtlInSeconds;
    bool m_cacheTtlInSecondsHasBeenSet = false;

    bool m_cacheDataEncrypted;
    bool m_cacheDataEncryptedHasBeenSet = false;

    bool m_requireAuthorizationForCacheControl;
    bool m_requireAuthorizationForCacheControlHasBeenSet = false;

    UnauthorizedCacheControlHeaderStrategy m_unauthorizedCacheControlHeaderStrategy;
    bool m_unauthorizedCacheControlHeaderStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
