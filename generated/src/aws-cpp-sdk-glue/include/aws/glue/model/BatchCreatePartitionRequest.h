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
  class BatchCreatePartitionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchCreatePartitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreatePartition"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the catalog in which the partition is to be created. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the catalog in which the partition is to be created. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the catalog in which the partition is to be created. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the catalog in which the partition is to be created. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the catalog in which the partition is to be created. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the catalog in which the partition is to be created. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline BatchCreatePartitionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the catalog in which the partition is to be created. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline BatchCreatePartitionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the catalog in which the partition is to be created. Currently,
     * this should be the Amazon Web Services account ID.</p>
     */
    inline BatchCreatePartitionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline BatchCreatePartitionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline BatchCreatePartitionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the metadata database in which the partition is to be
     * created.</p>
     */
    inline BatchCreatePartitionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline BatchCreatePartitionRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline BatchCreatePartitionRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the metadata table in which the partition is to be created.</p>
     */
    inline BatchCreatePartitionRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be created.</p>
     */
    inline const Aws::Vector<PartitionInput>& GetPartitionInputList() const{ return m_partitionInputList; }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be created.</p>
     */
    inline bool PartitionInputListHasBeenSet() const { return m_partitionInputListHasBeenSet; }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be created.</p>
     */
    inline void SetPartitionInputList(const Aws::Vector<PartitionInput>& value) { m_partitionInputListHasBeenSet = true; m_partitionInputList = value; }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be created.</p>
     */
    inline void SetPartitionInputList(Aws::Vector<PartitionInput>&& value) { m_partitionInputListHasBeenSet = true; m_partitionInputList = std::move(value); }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be created.</p>
     */
    inline BatchCreatePartitionRequest& WithPartitionInputList(const Aws::Vector<PartitionInput>& value) { SetPartitionInputList(value); return *this;}

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be created.</p>
     */
    inline BatchCreatePartitionRequest& WithPartitionInputList(Aws::Vector<PartitionInput>&& value) { SetPartitionInputList(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be created.</p>
     */
    inline BatchCreatePartitionRequest& AddPartitionInputList(const PartitionInput& value) { m_partitionInputListHasBeenSet = true; m_partitionInputList.push_back(value); return *this; }

    /**
     * <p>A list of <code>PartitionInput</code> structures that define the partitions
     * to be created.</p>
     */
    inline BatchCreatePartitionRequest& AddPartitionInputList(PartitionInput&& value) { m_partitionInputListHasBeenSet = true; m_partitionInputList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<PartitionInput> m_partitionInputList;
    bool m_partitionInputListHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
