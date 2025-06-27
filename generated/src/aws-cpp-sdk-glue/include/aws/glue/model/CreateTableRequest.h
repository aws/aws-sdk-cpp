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
#include <aws/glue/model/OpenTableFormatInput.h>
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
    AWS_GLUE_API CreateTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTable"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    CreateTableRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    CreateTableRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the table within the specified database that will
     * be created in the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTableRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TableInput</code> object that defines the metadata table to create
     * in the catalog.</p>
     */
    inline const TableInput& GetTableInput() const { return m_tableInput; }
    inline bool TableInputHasBeenSet() const { return m_tableInputHasBeenSet; }
    template<typename TableInputT = TableInput>
    void SetTableInput(TableInputT&& value) { m_tableInputHasBeenSet = true; m_tableInput = std::forward<TableInputT>(value); }
    template<typename TableInputT = TableInput>
    CreateTableRequest& WithTableInput(TableInputT&& value) { SetTableInput(std::forward<TableInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline const Aws::Vector<PartitionIndex>& GetPartitionIndexes() const { return m_partitionIndexes; }
    inline bool PartitionIndexesHasBeenSet() const { return m_partitionIndexesHasBeenSet; }
    template<typename PartitionIndexesT = Aws::Vector<PartitionIndex>>
    void SetPartitionIndexes(PartitionIndexesT&& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes = std::forward<PartitionIndexesT>(value); }
    template<typename PartitionIndexesT = Aws::Vector<PartitionIndex>>
    CreateTableRequest& WithPartitionIndexes(PartitionIndexesT&& value) { SetPartitionIndexes(std::forward<PartitionIndexesT>(value)); return *this;}
    template<typename PartitionIndexesT = PartitionIndex>
    CreateTableRequest& AddPartitionIndexes(PartitionIndexesT&& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes.emplace_back(std::forward<PartitionIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    CreateTableRequest& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an <code>OpenTableFormatInput</code> structure when creating an
     * open format table.</p>
     */
    inline const OpenTableFormatInput& GetOpenTableFormatInput() const { return m_openTableFormatInput; }
    inline bool OpenTableFormatInputHasBeenSet() const { return m_openTableFormatInputHasBeenSet; }
    template<typename OpenTableFormatInputT = OpenTableFormatInput>
    void SetOpenTableFormatInput(OpenTableFormatInputT&& value) { m_openTableFormatInputHasBeenSet = true; m_openTableFormatInput = std::forward<OpenTableFormatInputT>(value); }
    template<typename OpenTableFormatInputT = OpenTableFormatInput>
    CreateTableRequest& WithOpenTableFormatInput(OpenTableFormatInputT&& value) { SetOpenTableFormatInput(std::forward<OpenTableFormatInputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TableInput m_tableInput;
    bool m_tableInputHasBeenSet = false;

    Aws::Vector<PartitionIndex> m_partitionIndexes;
    bool m_partitionIndexesHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    OpenTableFormatInput m_openTableFormatInput;
    bool m_openTableFormatInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
