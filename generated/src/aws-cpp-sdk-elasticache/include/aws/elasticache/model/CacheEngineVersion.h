/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Provides all of the details about a particular cache engine
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheEngineVersion">AWS
   * API Reference</a></p>
   */
  class CacheEngineVersion
  {
  public:
    AWS_ELASTICACHE_API CacheEngineVersion() = default;
    AWS_ELASTICACHE_API CacheEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cache engine.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CacheEngineVersion& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the cache engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CacheEngineVersion& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> | <code>redis7</code> </p>
     */
    inline const Aws::String& GetCacheParameterGroupFamily() const { return m_cacheParameterGroupFamily; }
    inline bool CacheParameterGroupFamilyHasBeenSet() const { return m_cacheParameterGroupFamilyHasBeenSet; }
    template<typename CacheParameterGroupFamilyT = Aws::String>
    void SetCacheParameterGroupFamily(CacheParameterGroupFamilyT&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = std::forward<CacheParameterGroupFamilyT>(value); }
    template<typename CacheParameterGroupFamilyT = Aws::String>
    CacheEngineVersion& WithCacheParameterGroupFamily(CacheParameterGroupFamilyT&& value) { SetCacheParameterGroupFamily(std::forward<CacheParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cache engine.</p>
     */
    inline const Aws::String& GetCacheEngineDescription() const { return m_cacheEngineDescription; }
    inline bool CacheEngineDescriptionHasBeenSet() const { return m_cacheEngineDescriptionHasBeenSet; }
    template<typename CacheEngineDescriptionT = Aws::String>
    void SetCacheEngineDescription(CacheEngineDescriptionT&& value) { m_cacheEngineDescriptionHasBeenSet = true; m_cacheEngineDescription = std::forward<CacheEngineDescriptionT>(value); }
    template<typename CacheEngineDescriptionT = Aws::String>
    CacheEngineVersion& WithCacheEngineDescription(CacheEngineDescriptionT&& value) { SetCacheEngineDescription(std::forward<CacheEngineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cache engine version.</p>
     */
    inline const Aws::String& GetCacheEngineVersionDescription() const { return m_cacheEngineVersionDescription; }
    inline bool CacheEngineVersionDescriptionHasBeenSet() const { return m_cacheEngineVersionDescriptionHasBeenSet; }
    template<typename CacheEngineVersionDescriptionT = Aws::String>
    void SetCacheEngineVersionDescription(CacheEngineVersionDescriptionT&& value) { m_cacheEngineVersionDescriptionHasBeenSet = true; m_cacheEngineVersionDescription = std::forward<CacheEngineVersionDescriptionT>(value); }
    template<typename CacheEngineVersionDescriptionT = Aws::String>
    CacheEngineVersion& WithCacheEngineVersionDescription(CacheEngineVersionDescriptionT&& value) { SetCacheEngineVersionDescription(std::forward<CacheEngineVersionDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_cacheParameterGroupFamily;
    bool m_cacheParameterGroupFamilyHasBeenSet = false;

    Aws::String m_cacheEngineDescription;
    bool m_cacheEngineDescriptionHasBeenSet = false;

    Aws::String m_cacheEngineVersionDescription;
    bool m_cacheEngineVersionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
