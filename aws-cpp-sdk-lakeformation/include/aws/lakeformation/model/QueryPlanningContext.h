/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure containing information about the query plan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/QueryPlanningContext">AWS
   * API Reference</a></p>
   */
  class QueryPlanningContext
  {
  public:
    AWS_LAKEFORMATION_API QueryPlanningContext();
    AWS_LAKEFORMATION_API QueryPlanningContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API QueryPlanningContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline QueryPlanningContext& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline QueryPlanningContext& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline QueryPlanningContext& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The database containing the table.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database containing the table.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database containing the table.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database containing the table.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database containing the table.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database containing the table.</p>
     */
    inline QueryPlanningContext& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database containing the table.</p>
     */
    inline QueryPlanningContext& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database containing the table.</p>
     */
    inline QueryPlanningContext& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryAsOfTime() const{ return m_queryAsOfTime; }

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline bool QueryAsOfTimeHasBeenSet() const { return m_queryAsOfTimeHasBeenSet; }

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline void SetQueryAsOfTime(const Aws::Utils::DateTime& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = value; }

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline void SetQueryAsOfTime(Aws::Utils::DateTime&& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = std::move(value); }

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline QueryPlanningContext& WithQueryAsOfTime(const Aws::Utils::DateTime& value) { SetQueryAsOfTime(value); return *this;}

    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline QueryPlanningContext& WithQueryAsOfTime(Aws::Utils::DateTime&& value) { SetQueryAsOfTime(std::move(value)); return *this;}


    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParameters() const{ return m_queryParameters; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline void SetQueryParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline void SetQueryParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& WithQueryParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryParameters(value); return *this;}

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& WithQueryParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryParameters(std::move(value)); return *this;}

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& AddQueryParameters(const Aws::String& key, const Aws::String& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, value); return *this; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& AddQueryParameters(Aws::String&& key, const Aws::String& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& AddQueryParameters(const Aws::String& key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& AddQueryParameters(Aws::String&& key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& AddQueryParameters(const char* key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& AddQueryParameters(Aws::String&& key, const char* value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline QueryPlanningContext& AddQueryParameters(const char* key, const char* value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, value); return *this; }


    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline QueryPlanningContext& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline QueryPlanningContext& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline QueryPlanningContext& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::Utils::DateTime m_queryAsOfTime;
    bool m_queryAsOfTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
