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
    AWS_LAKEFORMATION_API GetTableObjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTableObjects"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline GetTableObjectsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline GetTableObjectsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The catalog containing the governed table. Defaults to the caller’s
     * account.</p>
     */
    inline GetTableObjectsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The database containing the governed table.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database containing the governed table.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database containing the governed table.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database containing the governed table.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database containing the governed table.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database containing the governed table.</p>
     */
    inline GetTableObjectsRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database containing the governed table.</p>
     */
    inline GetTableObjectsRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database containing the governed table.</p>
     */
    inline GetTableObjectsRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline GetTableObjectsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline GetTableObjectsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The governed table for which to retrieve objects.</p>
     */
    inline GetTableObjectsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline GetTableObjectsRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline GetTableObjectsRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID at which to read the governed table contents. If this
     * transaction has aborted, an error is returned. If not set, defaults to the most
     * recent committed transaction. Cannot be specified along with
     * <code>QueryAsOfTime</code>.</p>
     */
    inline GetTableObjectsRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>The time as of when to read the governed table contents. If not set, the most
     * recent transaction commit time is used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryAsOfTime() const{ return m_queryAsOfTime; }

    /**
     * <p>The time as of when to read the governed table contents. If not set, the most
     * recent transaction commit time is used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline bool QueryAsOfTimeHasBeenSet() const { return m_queryAsOfTimeHasBeenSet; }

    /**
     * <p>The time as of when to read the governed table contents. If not set, the most
     * recent transaction commit time is used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline void SetQueryAsOfTime(const Aws::Utils::DateTime& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = value; }

    /**
     * <p>The time as of when to read the governed table contents. If not set, the most
     * recent transaction commit time is used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline void SetQueryAsOfTime(Aws::Utils::DateTime&& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = std::move(value); }

    /**
     * <p>The time as of when to read the governed table contents. If not set, the most
     * recent transaction commit time is used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline GetTableObjectsRequest& WithQueryAsOfTime(const Aws::Utils::DateTime& value) { SetQueryAsOfTime(value); return *this;}

    /**
     * <p>The time as of when to read the governed table contents. If not set, the most
     * recent transaction commit time is used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline GetTableObjectsRequest& WithQueryAsOfTime(Aws::Utils::DateTime&& value) { SetQueryAsOfTime(std::move(value)); return *this;}


    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline const Aws::String& GetPartitionPredicate() const{ return m_partitionPredicate; }

    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline bool PartitionPredicateHasBeenSet() const { return m_partitionPredicateHasBeenSet; }

    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline void SetPartitionPredicate(const Aws::String& value) { m_partitionPredicateHasBeenSet = true; m_partitionPredicate = value; }

    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline void SetPartitionPredicate(Aws::String&& value) { m_partitionPredicateHasBeenSet = true; m_partitionPredicate = std::move(value); }

    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline void SetPartitionPredicate(const char* value) { m_partitionPredicateHasBeenSet = true; m_partitionPredicate.assign(value); }

    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline GetTableObjectsRequest& WithPartitionPredicate(const Aws::String& value) { SetPartitionPredicate(value); return *this;}

    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline GetTableObjectsRequest& WithPartitionPredicate(Aws::String&& value) { SetPartitionPredicate(std::move(value)); return *this;}

    /**
     * <p>A predicate to filter the objects returned based on the partition keys
     * defined in the governed table.</p> <ul> <li> <p>The comparison operators
     * supported are: =, &gt;, &lt;, &gt;=, &lt;=</p> </li> <li> <p>The logical
     * operators supported are: AND</p> </li> <li> <p>The data types supported are
     * integer, long, date(yyyy-MM-dd), timestamp(yyyy-MM-dd HH:mm:ssXXX or yyyy-MM-dd
     * HH:mm:ss"), string and decimal.</p> </li> </ul>
     */
    inline GetTableObjectsRequest& WithPartitionPredicate(const char* value) { SetPartitionPredicate(value); return *this;}


    /**
     * <p>Specifies how many values to return in a page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies how many values to return in a page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies how many values to return in a page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies how many values to return in a page.</p>
     */
    inline GetTableObjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline GetTableObjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline GetTableObjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token if this is not the first call to retrieve these
     * objects.</p>
     */
    inline GetTableObjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::Utils::DateTime m_queryAsOfTime;
    bool m_queryAsOfTimeHasBeenSet = false;

    Aws::String m_partitionPredicate;
    bool m_partitionPredicateHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
