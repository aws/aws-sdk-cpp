/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PartitionIndex.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateTableRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTable"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline CreateTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline CreateTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline CreateTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The <code>TableInput</code> object that defines the metadata table to create
     * in the catalog.</p>
     */
    inline const TableInput& GetTableInput() const{ return m_tableInput; }

    /**
     * <p>The <code>TableInput</code> object that defines the metadata table to create
     * in the catalog.</p>
     */
    inline bool TableInputHasBeenSet() const { return m_tableInputHasBeenSet; }

    /**
     * <p>The <code>TableInput</code> object that defines the metadata table to create
     * in the catalog.</p>
     */
    inline void SetTableInput(const TableInput& value) { m_tableInputHasBeenSet = true; m_tableInput = value; }

    /**
     * <p>The <code>TableInput</code> object that defines the metadata table to create
     * in the catalog.</p>
     */
    inline void SetTableInput(TableInput&& value) { m_tableInputHasBeenSet = true; m_tableInput = std::move(value); }

    /**
     * <p>The <code>TableInput</code> object that defines the metadata table to create
     * in the catalog.</p>
     */
    inline CreateTableRequest& WithTableInput(const TableInput& value) { SetTableInput(value); return *this;}

    /**
     * <p>The <code>TableInput</code> object that defines the metadata table to create
     * in the catalog.</p>
     */
    inline CreateTableRequest& WithTableInput(TableInput&& value) { SetTableInput(std::move(value)); return *this;}


    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline const Aws::Vector<PartitionIndex>& GetPartitionIndexes() const{ return m_partitionIndexes; }

    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline bool PartitionIndexesHasBeenSet() const { return m_partitionIndexesHasBeenSet; }

    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline void SetPartitionIndexes(const Aws::Vector<PartitionIndex>& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes = value; }

    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline void SetPartitionIndexes(Aws::Vector<PartitionIndex>&& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes = std::move(value); }

    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline CreateTableRequest& WithPartitionIndexes(const Aws::Vector<PartitionIndex>& value) { SetPartitionIndexes(value); return *this;}

    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline CreateTableRequest& WithPartitionIndexes(Aws::Vector<PartitionIndex>&& value) { SetPartitionIndexes(std::move(value)); return *this;}

    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline CreateTableRequest& AddPartitionIndexes(const PartitionIndex& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes.push_back(value); return *this; }

    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline CreateTableRequest& AddPartitionIndexes(PartitionIndex&& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline CreateTableRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The ID of the transaction.</p>
     */
    inline CreateTableRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transaction.</p>
     */
    inline CreateTableRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    TableInput m_tableInput;
    bool m_tableInputHasBeenSet = false;

    Aws::Vector<PartitionIndex> m_partitionIndexes;
    bool m_partitionIndexesHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
