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
    AWS_GLUE_API BatchDeletePartitionRequest();

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
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline BatchDeletePartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline BatchDeletePartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline BatchDeletePartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline BatchDeletePartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchDeletePartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchDeletePartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline BatchDeletePartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BatchDeletePartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BatchDeletePartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetPartitionsToDelete() const{ return m_partitionsToDelete; }
    inline bool PartitionsToDeleteHasBeenSet() const { return m_partitionsToDeleteHasBeenSet; }
    inline void SetPartitionsToDelete(const Aws::Vector<PartitionValueList>& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete = value; }
    inline void SetPartitionsToDelete(Aws::Vector<PartitionValueList>&& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete = std::move(value); }
    inline BatchDeletePartitionRequest& WithPartitionsToDelete(const Aws::Vector<PartitionValueList>& value) { SetPartitionsToDelete(value); return *this;}
    inline BatchDeletePartitionRequest& WithPartitionsToDelete(Aws::Vector<PartitionValueList>&& value) { SetPartitionsToDelete(std::move(value)); return *this;}
    inline BatchDeletePartitionRequest& AddPartitionsToDelete(const PartitionValueList& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete.push_back(value); return *this; }
    inline BatchDeletePartitionRequest& AddPartitionsToDelete(PartitionValueList&& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete.push_back(std::move(value)); return *this; }
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
