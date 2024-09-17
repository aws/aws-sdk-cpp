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


    ///@{
    /**
     * <p>Specifies whether Amazon CloudWatch metrics are enabled for this method.</p>
     */
    inline bool GetMetricsEnabled() const{ return m_metricsEnabled; }
    inline bool MetricsEnabledHasBeenSet() const { return m_metricsEnabledHasBeenSet; }
    inline void SetMetricsEnabled(bool value) { m_metricsEnabledHasBeenSet = true; m_metricsEnabled = value; }
    inline MethodSetting& WithMetricsEnabled(bool value) { SetMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the logging level for this method, which affects the log entries
     * pushed to Amazon CloudWatch Logs. Valid values are <code>OFF</code>,
     * <code>ERROR</code>, and <code>INFO</code>. Choose <code>ERROR</code> to write
     * only error-level entries to CloudWatch Logs, or choose <code>INFO</code> to
     * include all <code>ERROR</code> events as well as extra informational events.</p>
     */
    inline const Aws::String& GetLoggingLevel() const{ return m_loggingLevel; }
    inline bool LoggingLevelHasBeenSet() const { return m_loggingLevelHasBeenSet; }
    inline void SetLoggingLevel(const Aws::String& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = value; }
    inline void SetLoggingLevel(Aws::String&& value) { m_loggingLevelHasBeenSet = true; m_loggingLevel = std::move(value); }
    inline void SetLoggingLevel(const char* value) { m_loggingLevelHasBeenSet = true; m_loggingLevel.assign(value); }
    inline MethodSetting& WithLoggingLevel(const Aws::String& value) { SetLoggingLevel(value); return *this;}
    inline MethodSetting& WithLoggingLevel(Aws::String&& value) { SetLoggingLevel(std::move(value)); return *this;}
    inline MethodSetting& WithLoggingLevel(const char* value) { SetLoggingLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether data trace logging is enabled for this method, which
     * affects the log entries pushed to Amazon CloudWatch Logs. This can be useful to
     * troubleshoot APIs, but can result in logging sensitive data. We recommend that
     * you don't enable this option for production APIs.</p>
     */
    inline bool GetDataTraceEnabled() const{ return m_dataTraceEnabled; }
    inline bool DataTraceEnabledHasBeenSet() const { return m_dataTraceEnabledHasBeenSet; }
    inline void SetDataTraceEnabled(bool value) { m_dataTraceEnabledHasBeenSet = true; m_dataTraceEnabled = value; }
    inline MethodSetting& WithDataTraceEnabled(bool value) { SetDataTraceEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throttling burst limit.</p>
     */
    inline int GetThrottlingBurstLimit() const{ return m_throttlingBurstLimit; }
    inline bool ThrottlingBurstLimitHasBeenSet() const { return m_throttlingBurstLimitHasBeenSet; }
    inline void SetThrottlingBurstLimit(int value) { m_throttlingBurstLimitHasBeenSet = true; m_throttlingBurstLimit = value; }
    inline MethodSetting& WithThrottlingBurstLimit(int value) { SetThrottlingBurstLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throttling rate limit.</p>
     */
    inline double GetThrottlingRateLimit() const{ return m_throttlingRateLimit; }
    inline bool ThrottlingRateLimitHasBeenSet() const { return m_throttlingRateLimitHasBeenSet; }
    inline void SetThrottlingRateLimit(double value) { m_throttlingRateLimitHasBeenSet = true; m_throttlingRateLimit = value; }
    inline MethodSetting& WithThrottlingRateLimit(double value) { SetThrottlingRateLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether responses should be cached and returned for requests. A
     * cache cluster must be enabled on the stage for responses to be cached.</p>
     */
    inline bool GetCachingEnabled() const{ return m_cachingEnabled; }
    inline bool CachingEnabledHasBeenSet() const { return m_cachingEnabledHasBeenSet; }
    inline void SetCachingEnabled(bool value) { m_cachingEnabledHasBeenSet = true; m_cachingEnabled = value; }
    inline MethodSetting& WithCachingEnabled(bool value) { SetCachingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time to live (TTL), in seconds, for cached responses. The
     * higher the TTL, the longer the response will be cached.</p>
     */
    inline int GetCacheTtlInSeconds() const{ return m_cacheTtlInSeconds; }
    inline bool CacheTtlInSecondsHasBeenSet() const { return m_cacheTtlInSecondsHasBeenSet; }
    inline void SetCacheTtlInSeconds(int value) { m_cacheTtlInSecondsHasBeenSet = true; m_cacheTtlInSeconds = value; }
    inline MethodSetting& WithCacheTtlInSeconds(int value) { SetCacheTtlInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the cached responses are encrypted.</p>
     */
    inline bool GetCacheDataEncrypted() const{ return m_cacheDataEncrypted; }
    inline bool CacheDataEncryptedHasBeenSet() const { return m_cacheDataEncryptedHasBeenSet; }
    inline void SetCacheDataEncrypted(bool value) { m_cacheDataEncryptedHasBeenSet = true; m_cacheDataEncrypted = value; }
    inline MethodSetting& WithCacheDataEncrypted(bool value) { SetCacheDataEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether authorization is required for a cache invalidation
     * request.</p>
     */
    inline bool GetRequireAuthorizationForCacheControl() const{ return m_requireAuthorizationForCacheControl; }
    inline bool RequireAuthorizationForCacheControlHasBeenSet() const { return m_requireAuthorizationForCacheControlHasBeenSet; }
    inline void SetRequireAuthorizationForCacheControl(bool value) { m_requireAuthorizationForCacheControlHasBeenSet = true; m_requireAuthorizationForCacheControl = value; }
    inline MethodSetting& WithRequireAuthorizationForCacheControl(bool value) { SetRequireAuthorizationForCacheControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle unauthorized requests for cache invalidation.</p>
     */
    inline const UnauthorizedCacheControlHeaderStrategy& GetUnauthorizedCacheControlHeaderStrategy() const{ return m_unauthorizedCacheControlHeaderStrategy; }
    inline bool UnauthorizedCacheControlHeaderStrategyHasBeenSet() const { return m_unauthorizedCacheControlHeaderStrategyHasBeenSet; }
    inline void SetUnauthorizedCacheControlHeaderStrategy(const UnauthorizedCacheControlHeaderStrategy& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = value; }
    inline void SetUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy&& value) { m_unauthorizedCacheControlHeaderStrategyHasBeenSet = true; m_unauthorizedCacheControlHeaderStrategy = std::move(value); }
    inline MethodSetting& WithUnauthorizedCacheControlHeaderStrategy(const UnauthorizedCacheControlHeaderStrategy& value) { SetUnauthorizedCacheControlHeaderStrategy(value); return *this;}
    inline MethodSetting& WithUnauthorizedCacheControlHeaderStrategy(UnauthorizedCacheControlHeaderStrategy&& value) { SetUnauthorizedCacheControlHeaderStrategy(std::move(value)); return *this;}
    ///@}
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
