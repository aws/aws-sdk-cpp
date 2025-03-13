/**
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
    AWS_GLUE_API BatchDeleteTableRequest() = default;

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
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    BatchDeleteTableRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database in which the tables to delete reside. For
     * Hive compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    BatchDeleteTableRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the table to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTablesToDelete() const { return m_tablesToDelete; }
    inline bool TablesToDeleteHasBeenSet() const { return m_tablesToDeleteHasBeenSet; }
    template<typename TablesToDeleteT = Aws::Vector<Aws::String>>
    void SetTablesToDelete(TablesToDeleteT&& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete = std::forward<TablesToDeleteT>(value); }
    template<typename TablesToDeleteT = Aws::Vector<Aws::String>>
    BatchDeleteTableRequest& WithTablesToDelete(TablesToDeleteT&& value) { SetTablesToDelete(std::forward<TablesToDeleteT>(value)); return *this;}
    template<typename TablesToDeleteT = Aws::String>
    BatchDeleteTableRequest& AddTablesToDelete(TablesToDeleteT&& value) { m_tablesToDeleteHasBeenSet = true; m_tablesToDelete.emplace_back(std::forward<TablesToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The transaction ID at which to delete the table contents.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    BatchDeleteTableRequest& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
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
