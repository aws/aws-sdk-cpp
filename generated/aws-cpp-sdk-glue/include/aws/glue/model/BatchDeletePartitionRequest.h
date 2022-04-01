﻿/**
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
  class AWS_GLUE_API BatchDeletePartitionRequest : public GlueRequest
  {
  public:
    BatchDeletePartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeletePartition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline BatchDeletePartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline BatchDeletePartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partition to be deleted resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline BatchDeletePartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline BatchDeletePartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline BatchDeletePartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline BatchDeletePartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline BatchDeletePartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline BatchDeletePartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table that contains the partitions to be deleted.</p>
     */
    inline BatchDeletePartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetPartitionsToDelete() const{ return m_partitionsToDelete; }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline bool PartitionsToDeleteHasBeenSet() const { return m_partitionsToDeleteHasBeenSet; }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline void SetPartitionsToDelete(const Aws::Vector<PartitionValueList>& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete = value; }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline void SetPartitionsToDelete(Aws::Vector<PartitionValueList>&& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete = std::move(value); }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline BatchDeletePartitionRequest& WithPartitionsToDelete(const Aws::Vector<PartitionValueList>& value) { SetPartitionsToDelete(value); return *this;}

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline BatchDeletePartitionRequest& WithPartitionsToDelete(Aws::Vector<PartitionValueList>&& value) { SetPartitionsToDelete(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline BatchDeletePartitionRequest& AddPartitionsToDelete(const PartitionValueList& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete.push_back(value); return *this; }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be deleted.</p>
     */
    inline BatchDeletePartitionRequest& AddPartitionsToDelete(PartitionValueList&& value) { m_partitionsToDeleteHasBeenSet = true; m_partitionsToDelete.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::Vector<PartitionValueList> m_partitionsToDelete;
    bool m_partitionsToDeleteHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
