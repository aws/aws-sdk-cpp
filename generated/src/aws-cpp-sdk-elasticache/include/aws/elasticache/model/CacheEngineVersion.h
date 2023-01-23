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
    AWS_ELASTICACHE_API CacheEngineVersion();
    AWS_ELASTICACHE_API CacheEngineVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheEngineVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the cache engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the cache engine.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the cache engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the cache engine.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the cache engine.</p>
     */
    inline CacheEngineVersion& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine.</p>
     */
    inline CacheEngineVersion& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the cache engine.</p>
     */
    inline CacheEngineVersion& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the cache engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the cache engine.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the cache engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the cache engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the cache engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the cache engine.</p>
     */
    inline CacheEngineVersion& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the cache engine.</p>
     */
    inline CacheEngineVersion& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the cache engine.</p>
     */
    inline CacheEngineVersion& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> </p>
     */
    inline const Aws::String& GetCacheParameterGroupFamily() const{ return m_cacheParameterGroupFamily; }

    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> </p>
     */
    inline bool CacheParameterGroupFamilyHasBeenSet() const { return m_cacheParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> </p>
     */
    inline void SetCacheParameterGroupFamily(const Aws::String& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = value; }

    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> </p>
     */
    inline void SetCacheParameterGroupFamily(Aws::String&& value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> </p>
     */
    inline void SetCacheParameterGroupFamily(const char* value) { m_cacheParameterGroupFamilyHasBeenSet = true; m_cacheParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> </p>
     */
    inline CacheEngineVersion& WithCacheParameterGroupFamily(const Aws::String& value) { SetCacheParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> </p>
     */
    inline CacheEngineVersion& WithCacheParameterGroupFamily(Aws::String&& value) { SetCacheParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the cache parameter group family associated with this cache
     * engine.</p> <p>Valid values are: <code>memcached1.4</code> |
     * <code>memcached1.5</code> | <code>memcached1.6</code> | <code>redis2.6</code> |
     * <code>redis2.8</code> | <code>redis3.2</code> | <code>redis4.0</code> |
     * <code>redis5.0</code> | <code>redis6.x</code> </p>
     */
    inline CacheEngineVersion& WithCacheParameterGroupFamily(const char* value) { SetCacheParameterGroupFamily(value); return *this;}


    /**
     * <p>The description of the cache engine.</p>
     */
    inline const Aws::String& GetCacheEngineDescription() const{ return m_cacheEngineDescription; }

    /**
     * <p>The description of the cache engine.</p>
     */
    inline bool CacheEngineDescriptionHasBeenSet() const { return m_cacheEngineDescriptionHasBeenSet; }

    /**
     * <p>The description of the cache engine.</p>
     */
    inline void SetCacheEngineDescription(const Aws::String& value) { m_cacheEngineDescriptionHasBeenSet = true; m_cacheEngineDescription = value; }

    /**
     * <p>The description of the cache engine.</p>
     */
    inline void SetCacheEngineDescription(Aws::String&& value) { m_cacheEngineDescriptionHasBeenSet = true; m_cacheEngineDescription = std::move(value); }

    /**
     * <p>The description of the cache engine.</p>
     */
    inline void SetCacheEngineDescription(const char* value) { m_cacheEngineDescriptionHasBeenSet = true; m_cacheEngineDescription.assign(value); }

    /**
     * <p>The description of the cache engine.</p>
     */
    inline CacheEngineVersion& WithCacheEngineDescription(const Aws::String& value) { SetCacheEngineDescription(value); return *this;}

    /**
     * <p>The description of the cache engine.</p>
     */
    inline CacheEngineVersion& WithCacheEngineDescription(Aws::String&& value) { SetCacheEngineDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the cache engine.</p>
     */
    inline CacheEngineVersion& WithCacheEngineDescription(const char* value) { SetCacheEngineDescription(value); return *this;}


    /**
     * <p>The description of the cache engine version.</p>
     */
    inline const Aws::String& GetCacheEngineVersionDescription() const{ return m_cacheEngineVersionDescription; }

    /**
     * <p>The description of the cache engine version.</p>
     */
    inline bool CacheEngineVersionDescriptionHasBeenSet() const { return m_cacheEngineVersionDescriptionHasBeenSet; }

    /**
     * <p>The description of the cache engine version.</p>
     */
    inline void SetCacheEngineVersionDescription(const Aws::String& value) { m_cacheEngineVersionDescriptionHasBeenSet = true; m_cacheEngineVersionDescription = value; }

    /**
     * <p>The description of the cache engine version.</p>
     */
    inline void SetCacheEngineVersionDescription(Aws::String&& value) { m_cacheEngineVersionDescriptionHasBeenSet = true; m_cacheEngineVersionDescription = std::move(value); }

    /**
     * <p>The description of the cache engine version.</p>
     */
    inline void SetCacheEngineVersionDescription(const char* value) { m_cacheEngineVersionDescriptionHasBeenSet = true; m_cacheEngineVersionDescription.assign(value); }

    /**
     * <p>The description of the cache engine version.</p>
     */
    inline CacheEngineVersion& WithCacheEngineVersionDescription(const Aws::String& value) { SetCacheEngineVersionDescription(value); return *this;}

    /**
     * <p>The description of the cache engine version.</p>
     */
    inline CacheEngineVersion& WithCacheEngineVersionDescription(Aws::String&& value) { SetCacheEngineVersionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the cache engine version.</p>
     */
    inline CacheEngineVersion& WithCacheEngineVersionDescription(const char* value) { SetCacheEngineVersionDescription(value); return *this;}

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
