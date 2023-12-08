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
    AWS_FINSPACE_API KxDatabaseConfiguration();
    AWS_FINSPACE_API KxDatabaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDatabaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline KxDatabaseConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline KxDatabaseConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the kdb database. When this parameter is specified in the
     * structure, S3 with the whole database is included by default.</p>
     */
    inline KxDatabaseConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline const Aws::Vector<KxDatabaseCacheConfiguration>& GetCacheConfigurations() const{ return m_cacheConfigurations; }

    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline bool CacheConfigurationsHasBeenSet() const { return m_cacheConfigurationsHasBeenSet; }

    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline void SetCacheConfigurations(const Aws::Vector<KxDatabaseCacheConfiguration>& value) { m_cacheConfigurationsHasBeenSet = true; m_cacheConfigurations = value; }

    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline void SetCacheConfigurations(Aws::Vector<KxDatabaseCacheConfiguration>&& value) { m_cacheConfigurationsHasBeenSet = true; m_cacheConfigurations = std::move(value); }

    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline KxDatabaseConfiguration& WithCacheConfigurations(const Aws::Vector<KxDatabaseCacheConfiguration>& value) { SetCacheConfigurations(value); return *this;}

    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline KxDatabaseConfiguration& WithCacheConfigurations(Aws::Vector<KxDatabaseCacheConfiguration>&& value) { SetCacheConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline KxDatabaseConfiguration& AddCacheConfigurations(const KxDatabaseCacheConfiguration& value) { m_cacheConfigurationsHasBeenSet = true; m_cacheConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration details for the disk cache used to increase performance reading
     * from a kdb database mounted to the cluster.</p>
     */
    inline KxDatabaseConfiguration& AddCacheConfigurations(KxDatabaseCacheConfiguration&& value) { m_cacheConfigurationsHasBeenSet = true; m_cacheConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }

    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }

    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }

    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }

    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline KxDatabaseConfiguration& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline KxDatabaseConfiguration& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the changeset that is associated with the cluster.</p>
     */
    inline KxDatabaseConfiguration& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


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
    inline KxDatabaseConfiguration& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline KxDatabaseConfiguration& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}

    /**
     * <p> The name of the dataview to be used for caching historical data on disk.
     * </p>
     */
    inline KxDatabaseConfiguration& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}


    /**
     * <p> The configuration of the dataview to be used with specified cluster. </p>
     */
    inline const KxDataviewConfiguration& GetDataviewConfiguration() const{ return m_dataviewConfiguration; }

    /**
     * <p> The configuration of the dataview to be used with specified cluster. </p>
     */
    inline bool DataviewConfigurationHasBeenSet() const { return m_dataviewConfigurationHasBeenSet; }

    /**
     * <p> The configuration of the dataview to be used with specified cluster. </p>
     */
    inline void SetDataviewConfiguration(const KxDataviewConfiguration& value) { m_dataviewConfigurationHasBeenSet = true; m_dataviewConfiguration = value; }

    /**
     * <p> The configuration of the dataview to be used with specified cluster. </p>
     */
    inline void SetDataviewConfiguration(KxDataviewConfiguration&& value) { m_dataviewConfigurationHasBeenSet = true; m_dataviewConfiguration = std::move(value); }

    /**
     * <p> The configuration of the dataview to be used with specified cluster. </p>
     */
    inline KxDatabaseConfiguration& WithDataviewConfiguration(const KxDataviewConfiguration& value) { SetDataviewConfiguration(value); return *this;}

    /**
     * <p> The configuration of the dataview to be used with specified cluster. </p>
     */
    inline KxDatabaseConfiguration& WithDataviewConfiguration(KxDataviewConfiguration&& value) { SetDataviewConfiguration(std::move(value)); return *this;}

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
