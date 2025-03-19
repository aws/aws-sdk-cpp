/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/ApiCachingBehavior.h>
#include <aws/appsync/model/ApiCacheType.h>
#include <aws/appsync/model/CacheHealthMetricsConfig.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>UpdateApiCache</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiCacheRequest">AWS
   * API Reference</a></p>
   */
  class UpdateApiCacheRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API UpdateApiCacheRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApiCache"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The GraphQL API ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    UpdateApiCacheRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TTL in seconds for cache entries.</p> <p>Valid values are 1–3,600
     * seconds.</p>
     */
    inline long long GetTtl() const { return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(long long value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline UpdateApiCacheRequest& WithTtl(long long value) { SetTtl(value); return *this;}
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
    inline UpdateApiCacheRequest& WithApiCachingBehavior(ApiCachingBehavior value) { SetApiCachingBehavior(value); return *this;}
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
    inline UpdateApiCacheRequest& WithType(ApiCacheType value) { SetType(value); return *this;}
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
    inline UpdateApiCacheRequest& WithHealthMetricsConfig(CacheHealthMetricsConfig value) { SetHealthMetricsConfig(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    long long m_ttl{0};
    bool m_ttlHasBeenSet = false;

    ApiCachingBehavior m_apiCachingBehavior{ApiCachingBehavior::NOT_SET};
    bool m_apiCachingBehaviorHasBeenSet = false;

    ApiCacheType m_type{ApiCacheType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CacheHealthMetricsConfig m_healthMetricsConfig{CacheHealthMetricsConfig::NOT_SET};
    bool m_healthMetricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
