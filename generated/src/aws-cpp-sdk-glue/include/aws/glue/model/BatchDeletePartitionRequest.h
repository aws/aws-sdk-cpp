/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PartitionValueList.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchDeletePartitionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchDeletePartitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeletePartition"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    BatchDeletePartitionRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    BatchDeletePartitionRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    BatchDeletePartitionRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetPartitionsToDelete() const { return m_partitionsToDelete; }
    inline bool PartitionsToDeleteHasBeenSet() const { return m_partitionsToDeleteHasBeenSet; }
    template<typename PartitionsToDeleteT = Aws::Vector<PartitionValueList>>
    void SetPartitionsToDelete(PartitionsToDeleteT&& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete = std::forward<PartitionsToDeleteT>(value); }
    template<typename PartitionsToDeleteT = Aws::Vector<PartitionValueList>>
    BatchDeletePartitionRequest& WithPartitionsToDelete(PartitionsToDeleteT&& value) { SetPartitionsToDelete(std::forward<PartitionsToDeleteT>(value)); return *this;}
    template<typename PartitionsToDeleteT = PartitionValueList>
    BatchDeletePartitionRequest& AddPartitionsToDelete(PartitionsToDeleteT&& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete.emplace_back(std::forward<PartitionsToDeleteT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<PartitionValueList> m_partitionsToDelete;
    bool m_partitionsToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
