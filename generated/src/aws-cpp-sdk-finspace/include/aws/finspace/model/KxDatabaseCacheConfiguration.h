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
    AWS_FINSPACE_API KxDatabaseCacheConfiguration() = default;
    AWS_FINSPACE_API KxDatabaseCacheConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDatabaseCacheConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of disk cache. This parameter is used to map the database path to
     * cache storage. The valid values are:</p> <ul> <li> <p>CACHE_1000 – This type
     * provides at least 1000 MB/s disk access throughput. </p> </li> </ul>
     */
    inline const Aws::String& GetCacheType() const { return m_cacheType; }
    inline bool CacheTypeHasBeenSet() const { return m_cacheTypeHasBeenSet; }
    template<typename CacheTypeT = Aws::String>
    void SetCacheType(CacheTypeT&& value) { m_cacheTypeHasBeenSet = true; m_cacheType = std::forward<CacheTypeT>(value); }
    template<typename CacheTypeT = Aws::String>
    KxDatabaseCacheConfiguration& WithCacheType(CacheTypeT&& value) { SetCacheType(std::forward<CacheTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the portions of database that will be loaded into the cache for
     * access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbPaths() const { return m_dbPaths; }
    inline bool DbPathsHasBeenSet() const { return m_dbPathsHasBeenSet; }
    template<typename DbPathsT = Aws::Vector<Aws::String>>
    void SetDbPaths(DbPathsT&& value) { m_dbPathsHasBeenSet = true; m_dbPaths = std::forward<DbPathsT>(value); }
    template<typename DbPathsT = Aws::Vector<Aws::String>>
    KxDatabaseCacheConfiguration& WithDbPaths(DbPathsT&& value) { SetDbPaths(std::forward<DbPathsT>(value)); return *this;}
    template<typename DbPathsT = Aws::String>
    KxDatabaseCacheConfiguration& AddDbPaths(DbPathsT&& value) { m_dbPathsHasBeenSet = true; m_dbPaths.emplace_back(std::forward<DbPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline const Aws::String& GetDataviewName() const { return m_dataviewName; }
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }
    template<typename DataviewNameT = Aws::String>
    void SetDataviewName(DataviewNameT&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::forward<DataviewNameT>(value); }
    template<typename DataviewNameT = Aws::String>
    KxDatabaseCacheConfiguration& WithDataviewName(DataviewNameT&& value) { SetDataviewName(std::forward<DataviewNameT>(value)); return *this;}
    ///@}
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
