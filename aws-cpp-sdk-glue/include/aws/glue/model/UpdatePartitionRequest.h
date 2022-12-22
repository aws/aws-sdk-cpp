/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PartitionInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdatePartitionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdatePartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePartition"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline UpdatePartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline UpdatePartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partition to be updated resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline UpdatePartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


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
    inline UpdatePartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline UpdatePartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database in which the table in question resides.</p>
     */
    inline UpdatePartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline UpdatePartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline UpdatePartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table in which the partition to be updated is located.</p>
     */
    inline UpdatePartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValueList() const{ return m_partitionValueList; }

    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline bool PartitionValueListHasBeenSet() const { return m_partitionValueListHasBeenSet; }

    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline void SetPartitionValueList(const Aws::Vector<Aws::String>& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = value; }

    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline void SetPartitionValueList(Aws::Vector<Aws::String>&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = std::move(value); }

    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline UpdatePartitionRequest& WithPartitionValueList(const Aws::Vector<Aws::String>& value) { SetPartitionValueList(value); return *this;}

    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline UpdatePartitionRequest& WithPartitionValueList(Aws::Vector<Aws::String>&& value) { SetPartitionValueList(std::move(value)); return *this;}

    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline UpdatePartitionRequest& AddPartitionValueList(const Aws::String& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(value); return *this; }

    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline UpdatePartitionRequest& AddPartitionValueList(Aws::String&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(std::move(value)); return *this; }

    /**
     * <p>List of partition key values that define the partition to update.</p>
     */
    inline UpdatePartitionRequest& AddPartitionValueList(const char* value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(value); return *this; }


    /**
     * <p>The new partition object to update the partition to.</p> <p>The
     * <code>Values</code> property can't be changed. If you want to change the
     * partition key values for a partition, delete and recreate the partition.</p>
     */
    inline const PartitionInput& GetPartitionInput() const{ return m_partitionInput; }

    /**
     * <p>The new partition object to update the partition to.</p> <p>The
     * <code>Values</code> property can't be changed. If you want to change the
     * partition key values for a partition, delete and recreate the partition.</p>
     */
    inline bool PartitionInputHasBeenSet() const { return m_partitionInputHasBeenSet; }

    /**
     * <p>The new partition object to update the partition to.</p> <p>The
     * <code>Values</code> property can't be changed. If you want to change the
     * partition key values for a partition, delete and recreate the partition.</p>
     */
    inline void SetPartitionInput(const PartitionInput& value) { m_partitionInputHasBeenSet = true; m_partitionInput = value; }

    /**
     * <p>The new partition object to update the partition to.</p> <p>The
     * <code>Values</code> property can't be changed. If you want to change the
     * partition key values for a partition, delete and recreate the partition.</p>
     */
    inline void SetPartitionInput(PartitionInput&& value) { m_partitionInputHasBeenSet = true; m_partitionInput = std::move(value); }

    /**
     * <p>The new partition object to update the partition to.</p> <p>The
     * <code>Values</code> property can't be changed. If you want to change the
     * partition key values for a partition, delete and recreate the partition.</p>
     */
    inline UpdatePartitionRequest& WithPartitionInput(const PartitionInput& value) { SetPartitionInput(value); return *this;}

    /**
     * <p>The new partition object to update the partition to.</p> <p>The
     * <code>Values</code> property can't be changed. If you want to change the
     * partition key values for a partition, delete and recreate the partition.</p>
     */
    inline UpdatePartitionRequest& WithPartitionInput(PartitionInput&& value) { SetPartitionInput(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionValueList;
    bool m_partitionValueListHasBeenSet = false;

    PartitionInput m_partitionInput;
    bool m_partitionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
