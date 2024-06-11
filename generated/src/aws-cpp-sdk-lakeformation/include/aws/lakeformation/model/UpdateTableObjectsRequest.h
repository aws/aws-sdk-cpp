/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/WriteOperation.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class UpdateTableObjectsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API UpdateTableObjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTableObjects"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The catalog containing the governed table to update. Defaults to the caller’s
     * account ID.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline UpdateTableObjectsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline UpdateTableObjectsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline UpdateTableObjectsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database containing the governed table to update.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline UpdateTableObjectsRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline UpdateTableObjectsRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline UpdateTableObjectsRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The governed table to update.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline UpdateTableObjectsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline UpdateTableObjectsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline UpdateTableObjectsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction at which to do the write.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline UpdateTableObjectsRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline UpdateTableObjectsRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline UpdateTableObjectsRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>WriteOperation</code> objects that define an object to add to
     * or delete from the manifest for a governed table.</p>
     */
    inline const Aws::Vector<WriteOperation>& GetWriteOperations() const{ return m_writeOperations; }
    inline bool WriteOperationsHasBeenSet() const { return m_writeOperationsHasBeenSet; }
    inline void SetWriteOperations(const Aws::Vector<WriteOperation>& value) { m_writeOperationsHasBeenSet = true; m_writeOperations = value; }
    inline void SetWriteOperations(Aws::Vector<WriteOperation>&& value) { m_writeOperationsHasBeenSet = true; m_writeOperations = std::move(value); }
    inline UpdateTableObjectsRequest& WithWriteOperations(const Aws::Vector<WriteOperation>& value) { SetWriteOperations(value); return *this;}
    inline UpdateTableObjectsRequest& WithWriteOperations(Aws::Vector<WriteOperation>&& value) { SetWriteOperations(std::move(value)); return *this;}
    inline UpdateTableObjectsRequest& AddWriteOperations(const WriteOperation& value) { m_writeOperationsHasBeenSet = true; m_writeOperations.push_back(value); return *this; }
    inline UpdateTableObjectsRequest& AddWriteOperations(WriteOperation&& value) { m_writeOperationsHasBeenSet = true; m_writeOperations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::Vector<WriteOperation> m_writeOperations;
    bool m_writeOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
