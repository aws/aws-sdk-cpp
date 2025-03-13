/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ApiCachingBehavior.h>
#include <aws/appsync/model/ApiCacheType.h>
#include <aws/appsync/model/ApiCacheStatus.h>
#include <aws/appsync/model/CacheHealthMetricsConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ApiCache">AWS
   * API Reference</a></p>
   */
  class ApiCache
  {
  public:
    AWS_APPSYNC_API ApiCache() = default;
    AWS_APPSYNC_API ApiCache(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API ApiCache& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>TTL in seconds for cache entries.</p> <p>Valid values are 1–3,600
     * seconds.</p>
     */
    inline long long GetTtl() const { return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(long long value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline ApiCache& WithTtl(long long value) { SetTtl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Caching behavior.</p> <ul> <li> <p> <b>FULL_REQUEST_CACHING</b>: All requests
     * from the same user are cached. Individual resolvers are automatically cached.
     * All API calls will try to return responses from the cache.</p> </li> <li> <p>
     * <b>PER_RESOLVER_CACHING</b>: Individual resolvers that you specify are
     * cached.</p> </li> <li> <p> <b>OPERATION_LEVEL_CACHING</b>: Full requests are
     * cached together and returned without executing resolvers.</p> </li> </ul>
     */
    inline ApiCachingBehavior GetApiCachingBehavior() const { return m_apiCachingBehavior; }
    inline bool ApiCachingBehaviorHasBeenSet() const { return m_apiCachingBehaviorHasBeenSet; }
    inline void SetApiCachingBehavior(ApiCachingBehavior value) { m_apiCachingBehaviorHasBeenSet = true; m_apiCachingBehavior = value; }
    inline ApiCache& WithApiCachingBehavior(ApiCachingBehavior value) { SetApiCachingBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Transit encryption flag when connecting to cache. You cannot update this
     * setting after creation.</p>
     */
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline ApiCache& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>At-rest encryption flag for cache. You cannot update this setting after
     * creation.</p>
     */
    inline bool GetAtRestEncryptionEnabled() const { return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline ApiCache& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache instance type. Valid values are </p> <ul> <li> <p>
     * <code>SMALL</code> </p> </li> <li> <p> <code>MEDIUM</code> </p> </li> <li> <p>
     * <code>LARGE</code> </p> </li> <li> <p> <code>XLARGE</code> </p> </li> <li> <p>
     * <code>LARGE_2X</code> </p> </li> <li> <p> <code>LARGE_4X</code> </p> </li> <li>
     * <p> <code>LARGE_8X</code> (not available in all regions)</p> </li> <li> <p>
     * <code>LARGE_12X</code> </p> </li> </ul> <p>Historically, instance types were
     * identified by an EC2-style value. As of July 2020, this is deprecated, and the
     * generic identifiers above should be used.</p> <p>The following legacy instance
     * types are available, but their use is discouraged:</p> <ul> <li> <p>
     * <b>T2_SMALL</b>: A t2.small instance type.</p> </li> <li> <p> <b>T2_MEDIUM</b>:
     * A t2.medium instance type.</p> </li> <li> <p> <b>R4_LARGE</b>: A r4.large
     * instance type.</p> </li> <li> <p> <b>R4_XLARGE</b>: A r4.xlarge instance
     * type.</p> </li> <li> <p> <b>R4_2XLARGE</b>: A r4.2xlarge instance type.</p>
     * </li> <li> <p> <b>R4_4XLARGE</b>: A r4.4xlarge instance type.</p> </li> <li> <p>
     * <b>R4_8XLARGE</b>: A r4.8xlarge instance type.</p> </li> </ul>
     */
    inline ApiCacheType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ApiCacheType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ApiCache& WithType(ApiCacheType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache instance status.</p> <ul> <li> <p> <b>AVAILABLE</b>: The instance
     * is available for use.</p> </li> <li> <p> <b>CREATING</b>: The instance is
     * currently creating.</p> </li> <li> <p> <b>DELETING</b>: The instance is
     * currently deleting.</p> </li> <li> <p> <b>MODIFYING</b>: The instance is
     * currently modifying.</p> </li> <li> <p> <b>FAILED</b>: The instance has failed
     * creation.</p> </li> </ul>
     */
    inline ApiCacheStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApiCacheStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ApiCache& WithStatus(ApiCacheStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls how cache health metrics will be emitted to CloudWatch. Cache health
     * metrics include:</p> <ul> <li> <p>NetworkBandwidthOutAllowanceExceeded: The
     * network packets dropped because the throughput exceeded the aggregated bandwidth
     * limit. This is useful for diagnosing bottlenecks in a cache configuration.</p>
     * </li> <li> <p>EngineCPUUtilization: The CPU utilization (percentage) allocated
     * to the Redis process. This is useful for diagnosing bottlenecks in a cache
     * configuration.</p> </li> </ul> <p>Metrics will be recorded by API ID. You can
     * set the value to <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline CacheHealthMetricsConfig GetHealthMetricsConfig() const { return m_healthMetricsConfig; }
    inline bool HealthMetricsConfigHasBeenSet() const { return m_healthMetricsConfigHasBeenSet; }
    inline void SetHealthMetricsConfig(CacheHealthMetricsConfig value) { m_healthMetricsConfigHasBeenSet = true; m_healthMetricsConfig = value; }
    inline ApiCache& WithHealthMetricsConfig(CacheHealthMetricsConfig value) { SetHealthMetricsConfig(value); return *this;}
    ///@}
  private:

    long long m_ttl{0};
    bool m_ttlHasBeenSet = false;

    ApiCachingBehavior m_apiCachingBehavior{ApiCachingBehavior::NOT_SET};
    bool m_apiCachingBehaviorHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled{false};
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    ApiCacheType m_type{ApiCacheType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ApiCacheStatus m_status{ApiCacheStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    CacheHealthMetricsConfig m_healthMetricsConfig{CacheHealthMetricsConfig::NOT_SET};
    bool m_healthMetricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
