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
    AWS_LAKEFORMATION_API QueryPlanningContext() = default;
    AWS_LAKEFORMATION_API QueryPlanningContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API QueryPlanningContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the partition in question resides. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    QueryPlanningContext& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database containing the table.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    QueryPlanningContext& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time as of when to read the table contents. If not set, the most recent
     * transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryAsOfTime() const { return m_queryAsOfTime; }
    inline bool QueryAsOfTimeHasBeenSet() const { return m_queryAsOfTimeHasBeenSet; }
    template<typename QueryAsOfTimeT = Aws::Utils::DateTime>
    void SetQueryAsOfTime(QueryAsOfTimeT&& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = std::forward<QueryAsOfTimeT>(value); }
    template<typename QueryAsOfTimeT = Aws::Utils::DateTime>
    QueryPlanningContext& WithQueryAsOfTime(QueryAsOfTimeT&& value) { SetQueryAsOfTime(std::forward<QueryAsOfTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map consisting of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParameters() const { return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    template<typename QueryParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::forward<QueryParametersT>(value); }
    template<typename QueryParametersT = Aws::Map<Aws::String, Aws::String>>
    QueryPlanningContext& WithQueryParameters(QueryParametersT&& value) { SetQueryParameters(std::forward<QueryParametersT>(value)); return *this;}
    template<typename QueryParametersKeyT = Aws::String, typename QueryParametersValueT = Aws::String>
    QueryPlanningContext& AddQueryParameters(QueryParametersKeyT&& key, QueryParametersValueT&& value) {
      m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::forward<QueryParametersKeyT>(key), std::forward<QueryParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The transaction ID at which to read the table contents. If this transaction
     * is not committed, the read will be treated as part of that transaction and will
     * see its writes. If this transaction has aborted, an error will be returned. If
     * not set, defaults to the most recent committed transaction. Cannot be specified
     * along with <code>QueryAsOfTime</code>.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    QueryPlanningContext& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::Utils::DateTime m_queryAsOfTime{};
    bool m_queryAsOfTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
