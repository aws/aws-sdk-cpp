/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/KxDataviewConfiguration.h>
#include <aws/finspace/model/KxDatabaseCacheConfiguration.h>
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
   * <p>The configuration of data that is available for querying from this
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxDatabaseConfiguration">AWS
   * API Reference</a></p>
   */
  class KxDatabaseConfiguration
  {
  public:
    AWS_FINSPACE_API KxDatabaseConfiguration() = default;
    AWS_FINSPACE_API KxDatabaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDatabaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    KxDatabaseConfiguration& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline const Aws::Vector<KxDatabaseCacheConfiguration>& GetCacheConfigurations() const { return m_cacheConfigurations; }
    inline bool CacheConfigurationsHasBeenSet() const { return m_cacheConfigurationsHasBeenSet; }
    template<typename CacheConfigurationsT = Aws::Vector<KxDatabaseCacheConfiguration>>
    void SetCacheConfigurations(CacheConfigurationsT&& value) { m_cacheConfigurationsHasBeenSet = true; m_cacheConfigurations = std::forward<CacheConfigurationsT>(value); }
    template<typename CacheConfigurationsT = Aws::Vector<KxDatabaseCacheConfiguration>>
    KxDatabaseConfiguration& WithCacheConfigurations(CacheConfigurationsT&& value) { SetCacheConfigurations(std::forward<CacheConfigurationsT>(value)); return *this;}
    template<typename CacheConfigurationsT = KxDatabaseCacheConfiguration>
    KxDatabaseConfiguration& AddCacheConfigurations(CacheConfigurationsT&& value) { m_cacheConfigurationsHasBeenSet = true; m_cacheConfigurations.emplace_back(std::forward<CacheConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline const Aws::String& GetChangesetId() const { return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    template<typename ChangesetIdT = Aws::String>
    void SetChangesetId(ChangesetIdT&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::forward<ChangesetIdT>(value); }
    template<typename ChangesetIdT = Aws::String>
    KxDatabaseConfiguration& WithChangesetId(ChangesetIdT&& value) { SetChangesetId(std::forward<ChangesetIdT>(value)); return *this;}
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
    KxDatabaseConfiguration& WithDataviewName(DataviewNameT&& value) { SetDataviewName(std::forward<DataviewNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration of the dataview to be used with specified cluster. </p>
     */
    inline const KxDataviewConfiguration& GetDataviewConfiguration() const { return m_dataviewConfiguration; }
    inline bool DataviewConfigurationHasBeenSet() const { return m_dataviewConfigurationHasBeenSet; }
    template<typename DataviewConfigurationT = KxDataviewConfiguration>
    void SetDataviewConfiguration(DataviewConfigurationT&& value) { m_dataviewConfigurationHasBeenSet = true; m_dataviewConfiguration = std::forward<DataviewConfigurationT>(value); }
    template<typename DataviewConfigurationT = KxDataviewConfiguration>
    KxDatabaseConfiguration& WithDataviewConfiguration(DataviewConfigurationT&& value) { SetDataviewConfiguration(std::forward<DataviewConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::Vector<KxDatabaseCacheConfiguration> m_cacheConfigurations;
    bool m_cacheConfigurationsHasBeenSet = false;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;

    KxDataviewConfiguration m_dataviewConfiguration;
    bool m_dataviewConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
