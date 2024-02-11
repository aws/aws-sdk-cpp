/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The structure of database cache configuration that is used for mapping
   * database paths to cache types in clusters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxDatabaseCacheConfiguration">AWS
   * API Reference</a></p>
   */
  class KxDatabaseCacheConfiguration
  {
  public:
    AWS_FINSPACE_API KxDatabaseCacheConfiguration();
    AWS_FINSPACE_API KxDatabaseCacheConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDatabaseCacheConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline const Aws::String& GetCacheType() const{ return m_cacheType; }

    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline bool CacheTypeHasBeenSet() const { return m_cacheTypeHasBeenSet; }

    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline void SetCacheType(const Aws::String& value) { m_cacheTypeHasBeenSet = true; m_cacheType = value; }

    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline void SetCacheType(Aws::String&& value) { m_cacheTypeHasBeenSet = true; m_cacheType = std::move(value); }

    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline void SetCacheType(const char* value) { m_cacheTypeHasBeenSet = true; m_cacheType.assign(value); }

    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline KxDatabaseCacheConfiguration& WithCacheType(const Aws::String& value) { SetCacheType(value); return *this;}

    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline KxDatabaseCacheConfiguration& WithCacheType(Aws::String&& value) { SetCacheType(std::move(value)); return *this;}

    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline KxDatabaseCacheConfiguration& WithCacheType(const char* value) { SetCacheType(value); return *this;}


    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbPaths() const{ return m_dbPaths; }

    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline bool DbPathsHasBeenSet() const { return m_dbPathsHasBeenSet; }

    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline void SetDbPaths(const Aws::Vector<Aws::String>& value) { m_dbPathsHasBeenSet = true; m_dbPaths = value; }

    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline void SetDbPaths(Aws::Vector<Aws::String>&& value) { m_dbPathsHasBeenSet = true; m_dbPaths = std::move(value); }

    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline KxDatabaseCacheConfiguration& WithDbPaths(const Aws::Vector<Aws::String>& value) { SetDbPaths(value); return *this;}

    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline KxDatabaseCacheConfiguration& WithDbPaths(Aws::Vector<Aws::String>&& value) { SetDbPaths(std::move(value)); return *this;}

    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline KxDatabaseCacheConfiguration& AddDbPaths(const Aws::String& value) { m_dbPathsHasBeenSet = true; m_dbPaths.push_back(value); return *this; }

    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline KxDatabaseCacheConfiguration& AddDbPaths(Aws::String&& value) { m_dbPathsHasBeenSet = true; m_dbPaths.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline KxDatabaseCacheConfiguration& AddDbPaths(const char* value) { m_dbPathsHasBeenSet = true; m_dbPaths.push_back(value); return *this; }


    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline void SetDataviewName(const Aws::String& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = value; }

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline void SetDataviewName(Aws::String&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::move(value); }

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline void SetDataviewName(const char* value) { m_dataviewNameHasBeenSet = true; m_dataviewName.assign(value); }

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline KxDatabaseCacheConfiguration& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline KxDatabaseCacheConfiguration& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline KxDatabaseCacheConfiguration& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}

  private:

    Aws::String m_cacheType;
    bool m_cacheTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbPaths;
    bool m_dbPathsHasBeenSet = false;

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
