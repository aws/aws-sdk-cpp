/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/TableAttributes.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetTablesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetTablesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTables"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the tables reside. If none is provided, the
     * Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    GetTablesRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database in the catalog whose tables to list. For Hive compatibility,
     * this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GetTablesRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression pattern. If present, only those tables whose names match
     * the pattern are returned.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    GetTablesRequest& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTablesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of tables to return in a single response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetTablesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction ID at which to read the table contents.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    GetTablesRequest& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
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
    GetTablesRequest& WithQueryAsOfTime(QueryAsOfTimeT&& value) { SetQueryAsOfTime(std::forward<QueryAsOfTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include status details related to a request to create or
     * update an Glue Data Catalog view.</p>
     */
    inline bool GetIncludeStatusDetails() const { return m_includeStatusDetails; }
    inline bool IncludeStatusDetailsHasBeenSet() const { return m_includeStatusDetailsHasBeenSet; }
    inline void SetIncludeStatusDetails(bool value) { m_includeStatusDetailsHasBeenSet = true; m_includeStatusDetails = value; }
    inline GetTablesRequest& WithIncludeStatusDetails(bool value) { SetIncludeStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the table fields returned by the <code>GetTables</code> call. This
     * parameter doesn’t accept an empty list. The request must include
     * <code>NAME</code>.</p> <p>The following are the valid combinations of
     * values:</p> <ul> <li> <p> <code>NAME</code> - Names of all tables in the
     * database.</p> </li> <li> <p> <code>NAME</code>, <code>TABLE_TYPE</code> - Names
     * of all tables and the table types.</p> </li> </ul>
     */
    inline const Aws::Vector<TableAttributes>& GetAttributesToGet() const { return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    template<typename AttributesToGetT = Aws::Vector<TableAttributes>>
    void SetAttributesToGet(AttributesToGetT&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::forward<AttributesToGetT>(value); }
    template<typename AttributesToGetT = Aws::Vector<TableAttributes>>
    GetTablesRequest& WithAttributesToGet(AttributesToGetT&& value) { SetAttributesToGet(std::forward<AttributesToGetT>(value)); return *this;}
    inline GetTablesRequest& AddAttributesToGet(TableAttributes value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::Utils::DateTime m_queryAsOfTime{};
    bool m_queryAsOfTimeHasBeenSet = false;

    bool m_includeStatusDetails{false};
    bool m_includeStatusDetailsHasBeenSet = false;

    Aws::Vector<TableAttributes> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
