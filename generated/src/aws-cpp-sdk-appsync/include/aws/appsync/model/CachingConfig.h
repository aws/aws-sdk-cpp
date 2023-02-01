/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The caching configuration for a resolver that has caching
   * activated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CachingConfig">AWS
   * API Reference</a></p>
   */
  class CachingConfig
  {
  public:
    AWS_APPSYNC_API CachingConfig();
    AWS_APPSYNC_API CachingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API CachingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The TTL in seconds for a resolver that has caching activated.</p> <p>Valid
     * values are 1–3,600 seconds.</p>
     */
    inline long long GetTtl() const{ return m_ttl; }

    /**
     * <p>The TTL in seconds for a resolver that has caching activated.</p> <p>Valid
     * values are 1–3,600 seconds.</p>
     */
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }

    /**
     * <p>The TTL in seconds for a resolver that has caching activated.</p> <p>Valid
     * values are 1–3,600 seconds.</p>
     */
    inline void SetTtl(long long value) { m_ttlHasBeenSet = true; m_ttl = value; }

    /**
     * <p>The TTL in seconds for a resolver that has caching activated.</p> <p>Valid
     * values are 1–3,600 seconds.</p>
     */
    inline CachingConfig& WithTtl(long long value) { SetTtl(value); return *this;}


    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCachingKeys() const{ return m_cachingKeys; }

    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline bool CachingKeysHasBeenSet() const { return m_cachingKeysHasBeenSet; }

    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline void SetCachingKeys(const Aws::Vector<Aws::String>& value) { m_cachingKeysHasBeenSet = true; m_cachingKeys = value; }

    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline void SetCachingKeys(Aws::Vector<Aws::String>&& value) { m_cachingKeysHasBeenSet = true; m_cachingKeys = std::move(value); }

    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline CachingConfig& WithCachingKeys(const Aws::Vector<Aws::String>& value) { SetCachingKeys(value); return *this;}

    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline CachingConfig& WithCachingKeys(Aws::Vector<Aws::String>&& value) { SetCachingKeys(std::move(value)); return *this;}

    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline CachingConfig& AddCachingKeys(const Aws::String& value) { m_cachingKeysHasBeenSet = true; m_cachingKeys.push_back(value); return *this; }

    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline CachingConfig& AddCachingKeys(Aws::String&& value) { m_cachingKeysHasBeenSet = true; m_cachingKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline CachingConfig& AddCachingKeys(const char* value) { m_cachingKeysHasBeenSet = true; m_cachingKeys.push_back(value); return *this; }

  private:

    long long m_ttl;
    bool m_ttlHasBeenSet = false;

    Aws::Vector<Aws::String> m_cachingKeys;
    bool m_cachingKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
