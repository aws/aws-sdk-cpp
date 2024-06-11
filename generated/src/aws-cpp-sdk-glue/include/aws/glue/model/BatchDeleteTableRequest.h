﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchDeleteTableRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchDeleteTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteTable"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the table resides. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline BatchDeleteTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline BatchDeleteTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline BatchDeleteTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database in which the tables to delete reside. For
     * Hive compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline BatchDeleteTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchDeleteTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchDeleteTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the table to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTablesToDelete() const{ return m_tablesToDelete; }
    inline bool TablesToDeleteHasBeenSet() const { return m_tablesToDeleteHasBeenSet; }
    inline void SetTablesToDelete(const Aws::Vector<Aws::String>& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete = value; }
    inline void SetTablesToDelete(Aws::Vector<Aws::String>&& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete = std::move(value); }
    inline BatchDeleteTableRequest& WithTablesToDelete(const Aws::Vector<Aws::String>& value) { SetTablesToDelete(value); return *this;}
    inline BatchDeleteTableRequest& WithTablesToDelete(Aws::Vector<Aws::String>&& value) { SetTablesToDelete(std::move(value)); return *this;}
    inline BatchDeleteTableRequest& AddTablesToDelete(const Aws::String& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete.push_back(value); return *this; }
    inline BatchDeleteTableRequest& AddTablesToDelete(Aws::String&& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete.push_back(std::move(value)); return *this; }
    inline BatchDeleteTableRequest& AddTablesToDelete(const char* value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The transaction ID at which to delete the table contents.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline BatchDeleteTableRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline BatchDeleteTableRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline BatchDeleteTableRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tablesToDelete;
    bool m_tablesToDeleteHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
