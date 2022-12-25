/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lakeformation/model/OptimizerType.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class UpdateTableStorageOptimizerRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API UpdateTableStorageOptimizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTableStorageOptimizer"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline const Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>>& GetStorageOptimizerConfig() const{ return m_storageOptimizerConfig; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline bool StorageOptimizerConfigHasBeenSet() const { return m_storageOptimizerConfigHasBeenSet; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline void SetStorageOptimizerConfig(const Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>>& value) { m_storageOptimizerConfigHasBeenSet = true; m_storageOptimizerConfig = value; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline void SetStorageOptimizerConfig(Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>>&& value) { m_storageOptimizerConfigHasBeenSet = true; m_storageOptimizerConfig = std::move(value); }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithStorageOptimizerConfig(const Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>>& value) { SetStorageOptimizerConfig(value); return *this;}

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& WithStorageOptimizerConfig(Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>>&& value) { SetStorageOptimizerConfig(std::move(value)); return *this;}

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& AddStorageOptimizerConfig(const OptimizerType& key, const Aws::Map<Aws::String, Aws::String>& value) { m_storageOptimizerConfigHasBeenSet = true; m_storageOptimizerConfig.emplace(key, value); return *this; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& AddStorageOptimizerConfig(OptimizerType&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_storageOptimizerConfigHasBeenSet = true; m_storageOptimizerConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& AddStorageOptimizerConfig(const OptimizerType& key, Aws::Map<Aws::String, Aws::String>&& value) { m_storageOptimizerConfigHasBeenSet = true; m_storageOptimizerConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline UpdateTableStorageOptimizerRequest& AddStorageOptimizerConfig(OptimizerType&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_storageOptimizerConfigHasBeenSet = true; m_storageOptimizerConfig.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>> m_storageOptimizerConfig;
    bool m_storageOptimizerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
