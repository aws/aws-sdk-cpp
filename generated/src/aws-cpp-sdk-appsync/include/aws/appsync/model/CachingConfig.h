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
    AWS_APPSYNC_API CachingConfig() = default;
    AWS_APPSYNC_API CachingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API CachingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The TTL in seconds for a resolver that has caching activated.</p> <p>Valid
     * values are 1–3,600 seconds.</p>
     */
    inline long long GetTtl() const { return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(long long value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline CachingConfig& WithTtl(long long value) { SetTtl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The caching keys for a resolver that has caching activated.</p> <p>Valid
     * values are entries from the <code>$context.arguments</code>,
     * <code>$context.source</code>, and <code>$context.identity</code> maps.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCachingKeys() const { return m_cachingKeys; }
    inline bool CachingKeysHasBeenSet() const { return m_cachingKeysHasBeenSet; }
    template<typename CachingKeysT = Aws::Vector<Aws::String>>
    void SetCachingKeys(CachingKeysT&& value) { m_cachingKeysHasBeenSet = true; m_cachingKeys = std::forward<CachingKeysT>(value); }
    template<typename CachingKeysT = Aws::Vector<Aws::String>>
    CachingConfig& WithCachingKeys(CachingKeysT&& value) { SetCachingKeys(std::forward<CachingKeysT>(value)); return *this;}
    template<typename CachingKeysT = Aws::String>
    CachingConfig& AddCachingKeys(CachingKeysT&& value) { m_cachingKeysHasBeenSet = true; m_cachingKeys.emplace_back(std::forward<CachingKeysT>(value)); return *this; }
    ///@}
  private:

    long long m_ttl{0};
    bool m_ttlHasBeenSet = false;

    Aws::Vector<Aws::String> m_cachingKeys;
    bool m_cachingKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
