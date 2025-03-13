/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class GetTableObjectsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API GetTableObjectsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTableObjects"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    GetTableObjectsRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database containing the governed table.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GetTableObjectsRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    GetTableObjectsRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    GetTableObjectsRequest& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time as of when to read the governed table contents. If not set, the most
     * recent transaction commit time is used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryAsOfTime() const { return m_queryAsOfTime; }
    inline bool QueryAsOfTimeHasBeenSet() const { return m_queryAsOfTimeHasBeenSet; }
    template<typename QueryAsOfTimeT = Aws::Utils::DateTime>
    void SetQueryAsOfTime(QueryAsOfTimeT&& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = std::forward<QueryAsOfTimeT>(value); }
    template<typename QueryAsOfTimeT = Aws::Utils::DateTime>
    GetTableObjectsRequest& WithQueryAsOfTime(QueryAsOfTimeT&& value) { SetQueryAsOfTime(std::forward<QueryAsOfTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline const Aws::String& GetPartitionPredicate() const { return m_partitionPredicate; }
    inline bool PartitionPredicateHasBeenSet() const { return m_partitionPredicateHasBeenSet; }
    template<typename PartitionPredicateT = Aws::String>
    void SetPartitionPredicate(PartitionPredicateT&& value) { m_partitionPredicateHasBeenSet = true; m_partitionPredicate = std::forward<PartitionPredicateT>(value); }
    template<typename PartitionPredicateT = Aws::String>
    GetTableObjectsRequest& WithPartitionPredicate(PartitionPredicateT&& value) { SetPartitionPredicate(std::forward<PartitionPredicateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how many values to return in a page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetTableObjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTableObjectsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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

    Aws::Utils::DateTime m_queryAsOfTime{};
    bool m_queryAsOfTimeHasBeenSet = false;

    Aws::String m_partitionPredicate;
    bool m_partitionPredicateHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
