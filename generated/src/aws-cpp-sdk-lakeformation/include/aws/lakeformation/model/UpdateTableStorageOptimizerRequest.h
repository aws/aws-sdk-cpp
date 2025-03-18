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
    AWS_LAKEFORMATION_API UpdateTableStorageOptimizerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTableStorageOptimizer"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    UpdateTableStorageOptimizerRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the database where the table is present.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    UpdateTableStorageOptimizerRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the table for which to enable the storage optimizer.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateTableStorageOptimizerRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the configuration for the storage optimizer.</p>
     */
    inline const Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>>& GetStorageOptimizerConfig() const { return m_storageOptimizerConfig; }
    inline bool StorageOptimizerConfigHasBeenSet() const { return m_storageOptimizerConfigHasBeenSet; }
    template<typename StorageOptimizerConfigT = Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>>>
    void SetStorageOptimizerConfig(StorageOptimizerConfigT&& value) { m_storageOptimizerConfigHasBeenSet = true; m_storageOptimizerConfig = std::forward<StorageOptimizerConfigT>(value); }
    template<typename StorageOptimizerConfigT = Aws::Map<OptimizerType, Aws::Map<Aws::String, Aws::String>>>
    UpdateTableStorageOptimizerRequest& WithStorageOptimizerConfig(StorageOptimizerConfigT&& value) { SetStorageOptimizerConfig(std::forward<StorageOptimizerConfigT>(value)); return *this;}
    inline UpdateTableStorageOptimizerRequest& AddStorageOptimizerConfig(OptimizerType key, Aws::Map<Aws::String, Aws::String> value) {
      m_storageOptimizerConfigHasBeenSet = true; m_storageOptimizerConfig.emplace(key, value); return *this;
    }
    ///@}
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
