/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Segment.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetPartitionsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetPartitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPartitions"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline GetPartitionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline GetPartitionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline GetPartitionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline GetPartitionsRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline GetPartitionsRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline GetPartitionsRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the partitions' table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline GetPartitionsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline GetPartitionsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline GetPartitionsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>An expression that filters the partitions to be returned.</p> <p>The
     * expression uses SQL syntax similar to the SQL <code>WHERE</code> filter clause.
     * The SQL statement parser <a
     * href="http://jsqlparser.sourceforge.net/home.php">JSQLParser</a> parses the
     * expression. </p> <p> <i>Operators</i>: The following are the operators that you
     * can use in the <code>Expression</code> API call:</p> <dl> <dt>=</dt> <dd>
     * <p>Checks whether the values of the two operands are equal; if yes, then the
     * condition becomes true.</p> <p>Example: Assume 'variable a' holds 10 and
     * 'variable b' holds 20. </p> <p>(a = b) is not true.</p> </dd> <dt>&lt; &gt;</dt>
     * <dd> <p>Checks whether the values of two operands are equal; if the values are
     * not equal, then the condition becomes true.</p> <p>Example: (a &lt; &gt; b) is
     * true.</p> </dd> <dt>&gt;</dt> <dd> <p>Checks whether the value of the left
     * operand is greater than the value of the right operand; if yes, then the
     * condition becomes true.</p> <p>Example: (a &gt; b) is not true.</p> </dd>
     * <dt>&lt;</dt> <dd> <p>Checks whether the value of the left operand is less than
     * the value of the right operand; if yes, then the condition becomes true.</p>
     * <p>Example: (a &lt; b) is true.</p> </dd> <dt>&gt;=</dt> <dd> <p>Checks whether
     * the value of the left operand is greater than or equal to the value of the right
     * operand; if yes, then the condition becomes true.</p> <p>Example: (a &gt;= b) is
     * not true.</p> </dd> <dt>&lt;=</dt> <dd> <p>Checks whether the value of the left
     * operand is less than or equal to the value of the right operand; if yes, then
     * the condition becomes true.</p> <p>Example: (a &lt;= b) is true.</p> </dd>
     * <dt>AND, OR, IN, BETWEEN, LIKE, NOT, IS NULL</dt> <dd> <p>Logical operators.</p>
     * </dd> </dl> <p> <i>Supported Partition Key Types</i>: The following are the
     * supported partition keys.</p> <ul> <li> <p> <code>string</code> </p> </li> <li>
     * <p> <code>date</code> </p> </li> <li> <p> <code>timestamp</code> </p> </li> <li>
     * <p> <code>int</code> </p> </li> <li> <p> <code>bigint</code> </p> </li> <li> <p>
     * <code>long</code> </p> </li> <li> <p> <code>tinyint</code> </p> </li> <li> <p>
     * <code>smallint</code> </p> </li> <li> <p> <code>decimal</code> </p> </li> </ul>
     * <p>If an type is encountered that is not valid, an exception is thrown. </p>
     * <p>The following list shows the valid operators on each type. When you define a
     * crawler, the <code>partitionKey</code> type is created as a <code>STRING</code>,
     * to be compatible with the catalog partitions. </p> <p> <i>Sample API Call</i>:
     * </p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>An expression that filters the partitions to be returned.</p> <p>The
     * expression uses SQL syntax similar to the SQL <code>WHERE</code> filter clause.
     * The SQL statement parser <a
     * href="http://jsqlparser.sourceforge.net/home.php">JSQLParser</a> parses the
     * expression. </p> <p> <i>Operators</i>: The following are the operators that you
     * can use in the <code>Expression</code> API call:</p> <dl> <dt>=</dt> <dd>
     * <p>Checks whether the values of the two operands are equal; if yes, then the
     * condition becomes true.</p> <p>Example: Assume 'variable a' holds 10 and
     * 'variable b' holds 20. </p> <p>(a = b) is not true.</p> </dd> <dt>&lt; &gt;</dt>
     * <dd> <p>Checks whether the values of two operands are equal; if the values are
     * not equal, then the condition becomes true.</p> <p>Example: (a &lt; &gt; b) is
     * true.</p> </dd> <dt>&gt;</dt> <dd> <p>Checks whether the value of the left
     * operand is greater than the value of the right operand; if yes, then the
     * condition becomes true.</p> <p>Example: (a &gt; b) is not true.</p> </dd>
     * <dt>&lt;</dt> <dd> <p>Checks whether the value of the left operand is less than
     * the value of the right operand; if yes, then the condition becomes true.</p>
     * <p>Example: (a &lt; b) is true.</p> </dd> <dt>&gt;=</dt> <dd> <p>Checks whether
     * the value of the left operand is greater than or equal to the value of the right
     * operand; if yes, then the condition becomes true.</p> <p>Example: (a &gt;= b) is
     * not true.</p> </dd> <dt>&lt;=</dt> <dd> <p>Checks whether the value of the left
     * operand is less than or equal to the value of the right operand; if yes, then
     * the condition becomes true.</p> <p>Example: (a &lt;= b) is true.</p> </dd>
     * <dt>AND, OR, IN, BETWEEN, LIKE, NOT, IS NULL</dt> <dd> <p>Logical operators.</p>
     * </dd> </dl> <p> <i>Supported Partition Key Types</i>: The following are the
     * supported partition keys.</p> <ul> <li> <p> <code>string</code> </p> </li> <li>
     * <p> <code>date</code> </p> </li> <li> <p> <code>timestamp</code> </p> </li> <li>
     * <p> <code>int</code> </p> </li> <li> <p> <code>bigint</code> </p> </li> <li> <p>
     * <code>long</code> </p> </li> <li> <p> <code>tinyint</code> </p> </li> <li> <p>
     * <code>smallint</code> </p> </li> <li> <p> <code>decimal</code> </p> </li> </ul>
     * <p>If an type is encountered that is not valid, an exception is thrown. </p>
     * <p>The following list shows the valid operators on each type. When you define a
     * crawler, the <code>partitionKey</code> type is created as a <code>STRING</code>,
     * to be compatible with the catalog partitions. </p> <p> <i>Sample API Call</i>:
     * </p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>An expression that filters the partitions to be returned.</p> <p>The
     * expression uses SQL syntax similar to the SQL <code>WHERE</code> filter clause.
     * The SQL statement parser <a
     * href="http://jsqlparser.sourceforge.net/home.php">JSQLParser</a> parses the
     * expression. </p> <p> <i>Operators</i>: The following are the operators that you
     * can use in the <code>Expression</code> API call:</p> <dl> <dt>=</dt> <dd>
     * <p>Checks whether the values of the two operands are equal; if yes, then the
     * condition becomes true.</p> <p>Example: Assume 'variable a' holds 10 and
     * 'variable b' holds 20. </p> <p>(a = b) is not true.</p> </dd> <dt>&lt; &gt;</dt>
     * <dd> <p>Checks whether the values of two operands are equal; if the values are
     * not equal, then the condition becomes true.</p> <p>Example: (a &lt; &gt; b) is
     * true.</p> </dd> <dt>&gt;</dt> <dd> <p>Checks whether the value of the left
     * operand is greater than the value of the right operand; if yes, then the
     * condition becomes true.</p> <p>Example: (a &gt; b) is not true.</p> </dd>
     * <dt>&lt;</dt> <dd> <p>Checks whether the value of the left operand is less than
     * the value of the right operand; if yes, then the condition becomes true.</p>
     * <p>Example: (a &lt; b) is true.</p> </dd> <dt>&gt;=</dt> <dd> <p>Checks whether
     * the value of the left operand is greater than or equal to the value of the right
     * operand; if yes, then the condition becomes true.</p> <p>Example: (a &gt;= b) is
     * not true.</p> </dd> <dt>&lt;=</dt> <dd> <p>Checks whether the value of the left
     * operand is less than or equal to the value of the right operand; if yes, then
     * the condition becomes true.</p> <p>Example: (a &lt;= b) is true.</p> </dd>
     * <dt>AND, OR, IN, BETWEEN, LIKE, NOT, IS NULL</dt> <dd> <p>Logical operators.</p>
     * </dd> </dl> <p> <i>Supported Partition Key Types</i>: The following are the
     * supported partition keys.</p> <ul> <li> <p> <code>string</code> </p> </li> <li>
     * <p> <code>date</code> </p> </li> <li> <p> <code>timestamp</code> </p> </li> <li>
     * <p> <code>int</code> </p> </li> <li> <p> <code>bigint</code> </p> </li> <li> <p>
     * <code>long</code> </p> </li> <li> <p> <code>tinyint</code> </p> </li> <li> <p>
     * <code>smallint</code> </p> </li> <li> <p> <code>decimal</code> </p> </li> </ul>
     * <p>If an type is encountered that is not valid, an exception is thrown. </p>
     * <p>The following list shows the valid operators on each type. When you define a
     * crawler, the <code>partitionKey</code> type is created as a <code>STRING</code>,
     * to be compatible with the catalog partitions. </p> <p> <i>Sample API Call</i>:
     * </p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>An expression that filters the partitions to be returned.</p> <p>The
     * expression uses SQL syntax similar to the SQL <code>WHERE</code> filter clause.
     * The SQL statement parser <a
     * href="http://jsqlparser.sourceforge.net/home.php">JSQLParser</a> parses the
     * expression. </p> <p> <i>Operators</i>: The following are the operators that you
     * can use in the <code>Expression</code> API call:</p> <dl> <dt>=</dt> <dd>
     * <p>Checks whether the values of the two operands are equal; if yes, then the
     * condition becomes true.</p> <p>Example: Assume 'variable a' holds 10 and
     * 'variable b' holds 20. </p> <p>(a = b) is not true.</p> </dd> <dt>&lt; &gt;</dt>
     * <dd> <p>Checks whether the values of two operands are equal; if the values are
     * not equal, then the condition becomes true.</p> <p>Example: (a &lt; &gt; b) is
     * true.</p> </dd> <dt>&gt;</dt> <dd> <p>Checks whether the value of the left
     * operand is greater than the value of the right operand; if yes, then the
     * condition becomes true.</p> <p>Example: (a &gt; b) is not true.</p> </dd>
     * <dt>&lt;</dt> <dd> <p>Checks whether the value of the left operand is less than
     * the value of the right operand; if yes, then the condition becomes true.</p>
     * <p>Example: (a &lt; b) is true.</p> </dd> <dt>&gt;=</dt> <dd> <p>Checks whether
     * the value of the left operand is greater than or equal to the value of the right
     * operand; if yes, then the condition becomes true.</p> <p>Example: (a &gt;= b) is
     * not true.</p> </dd> <dt>&lt;=</dt> <dd> <p>Checks whether the value of the left
     * operand is less than or equal to the value of the right operand; if yes, then
     * the condition becomes true.</p> <p>Example: (a &lt;= b) is true.</p> </dd>
     * <dt>AND, OR, IN, BETWEEN, LIKE, NOT, IS NULL</dt> <dd> <p>Logical operators.</p>
     * </dd> </dl> <p> <i>Supported Partition Key Types</i>: The following are the
     * supported partition keys.</p> <ul> <li> <p> <code>string</code> </p> </li> <li>
     * <p> <code>date</code> </p> </li> <li> <p> <code>timestamp</code> </p> </li> <li>
     * <p> <code>int</code> </p> </li> <li> <p> <code>bigint</code> </p> </li> <li> <p>
     * <code>long</code> </p> </li> <li> <p> <code>tinyint</code> </p> </li> <li> <p>
     * <code>smallint</code> </p> </li> <li> <p> <code>decimal</code> </p> </li> </ul>
     * <p>If an type is encountered that is not valid, an exception is thrown. </p>
     * <p>The following list shows the valid operators on each type. When you define a
     * crawler, the <code>partitionKey</code> type is created as a <code>STRING</code>,
     * to be compatible with the catalog partitions. </p> <p> <i>Sample API Call</i>:
     * </p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>An expression that filters the partitions to be returned.</p> <p>The
     * expression uses SQL syntax similar to the SQL <code>WHERE</code> filter clause.
     * The SQL statement parser <a
     * href="http://jsqlparser.sourceforge.net/home.php">JSQLParser</a> parses the
     * expression. </p> <p> <i>Operators</i>: The following are the operators that you
     * can use in the <code>Expression</code> API call:</p> <dl> <dt>=</dt> <dd>
     * <p>Checks whether the values of the two operands are equal; if yes, then the
     * condition becomes true.</p> <p>Example: Assume 'variable a' holds 10 and
     * 'variable b' holds 20. </p> <p>(a = b) is not true.</p> </dd> <dt>&lt; &gt;</dt>
     * <dd> <p>Checks whether the values of two operands are equal; if the values are
     * not equal, then the condition becomes true.</p> <p>Example: (a &lt; &gt; b) is
     * true.</p> </dd> <dt>&gt;</dt> <dd> <p>Checks whether the value of the left
     * operand is greater than the value of the right operand; if yes, then the
     * condition becomes true.</p> <p>Example: (a &gt; b) is not true.</p> </dd>
     * <dt>&lt;</dt> <dd> <p>Checks whether the value of the left operand is less than
     * the value of the right operand; if yes, then the condition becomes true.</p>
     * <p>Example: (a &lt; b) is true.</p> </dd> <dt>&gt;=</dt> <dd> <p>Checks whether
     * the value of the left operand is greater than or equal to the value of the right
     * operand; if yes, then the condition becomes true.</p> <p>Example: (a &gt;= b) is
     * not true.</p> </dd> <dt>&lt;=</dt> <dd> <p>Checks whether the value of the left
     * operand is less than or equal to the value of the right operand; if yes, then
     * the condition becomes true.</p> <p>Example: (a &lt;= b) is true.</p> </dd>
     * <dt>AND, OR, IN, BETWEEN, LIKE, NOT, IS NULL</dt> <dd> <p>Logical operators.</p>
     * </dd> </dl> <p> <i>Supported Partition Key Types</i>: The following are the
     * supported partition keys.</p> <ul> <li> <p> <code>string</code> </p> </li> <li>
     * <p> <code>date</code> </p> </li> <li> <p> <code>timestamp</code> </p> </li> <li>
     * <p> <code>int</code> </p> </li> <li> <p> <code>bigint</code> </p> </li> <li> <p>
     * <code>long</code> </p> </li> <li> <p> <code>tinyint</code> </p> </li> <li> <p>
     * <code>smallint</code> </p> </li> <li> <p> <code>decimal</code> </p> </li> </ul>
     * <p>If an type is encountered that is not valid, an exception is thrown. </p>
     * <p>The following list shows the valid operators on each type. When you define a
     * crawler, the <code>partitionKey</code> type is created as a <code>STRING</code>,
     * to be compatible with the catalog partitions. </p> <p> <i>Sample API Call</i>:
     * </p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>An expression that filters the partitions to be returned.</p> <p>The
     * expression uses SQL syntax similar to the SQL <code>WHERE</code> filter clause.
     * The SQL statement parser <a
     * href="http://jsqlparser.sourceforge.net/home.php">JSQLParser</a> parses the
     * expression. </p> <p> <i>Operators</i>: The following are the operators that you
     * can use in the <code>Expression</code> API call:</p> <dl> <dt>=</dt> <dd>
     * <p>Checks whether the values of the two operands are equal; if yes, then the
     * condition becomes true.</p> <p>Example: Assume 'variable a' holds 10 and
     * 'variable b' holds 20. </p> <p>(a = b) is not true.</p> </dd> <dt>&lt; &gt;</dt>
     * <dd> <p>Checks whether the values of two operands are equal; if the values are
     * not equal, then the condition becomes true.</p> <p>Example: (a &lt; &gt; b) is
     * true.</p> </dd> <dt>&gt;</dt> <dd> <p>Checks whether the value of the left
     * operand is greater than the value of the right operand; if yes, then the
     * condition becomes true.</p> <p>Example: (a &gt; b) is not true.</p> </dd>
     * <dt>&lt;</dt> <dd> <p>Checks whether the value of the left operand is less than
     * the value of the right operand; if yes, then the condition becomes true.</p>
     * <p>Example: (a &lt; b) is true.</p> </dd> <dt>&gt;=</dt> <dd> <p>Checks whether
     * the value of the left operand is greater than or equal to the value of the right
     * operand; if yes, then the condition becomes true.</p> <p>Example: (a &gt;= b) is
     * not true.</p> </dd> <dt>&lt;=</dt> <dd> <p>Checks whether the value of the left
     * operand is less than or equal to the value of the right operand; if yes, then
     * the condition becomes true.</p> <p>Example: (a &lt;= b) is true.</p> </dd>
     * <dt>AND, OR, IN, BETWEEN, LIKE, NOT, IS NULL</dt> <dd> <p>Logical operators.</p>
     * </dd> </dl> <p> <i>Supported Partition Key Types</i>: The following are the
     * supported partition keys.</p> <ul> <li> <p> <code>string</code> </p> </li> <li>
     * <p> <code>date</code> </p> </li> <li> <p> <code>timestamp</code> </p> </li> <li>
     * <p> <code>int</code> </p> </li> <li> <p> <code>bigint</code> </p> </li> <li> <p>
     * <code>long</code> </p> </li> <li> <p> <code>tinyint</code> </p> </li> <li> <p>
     * <code>smallint</code> </p> </li> <li> <p> <code>decimal</code> </p> </li> </ul>
     * <p>If an type is encountered that is not valid, an exception is thrown. </p>
     * <p>The following list shows the valid operators on each type. When you define a
     * crawler, the <code>partitionKey</code> type is created as a <code>STRING</code>,
     * to be compatible with the catalog partitions. </p> <p> <i>Sample API Call</i>:
     * </p>
     */
    inline GetPartitionsRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>An expression that filters the partitions to be returned.</p> <p>The
     * expression uses SQL syntax similar to the SQL <code>WHERE</code> filter clause.
     * The SQL statement parser <a
     * href="http://jsqlparser.sourceforge.net/home.php">JSQLParser</a> parses the
     * expression. </p> <p> <i>Operators</i>: The following are the operators that you
     * can use in the <code>Expression</code> API call:</p> <dl> <dt>=</dt> <dd>
     * <p>Checks whether the values of the two operands are equal; if yes, then the
     * condition becomes true.</p> <p>Example: Assume 'variable a' holds 10 and
     * 'variable b' holds 20. </p> <p>(a = b) is not true.</p> </dd> <dt>&lt; &gt;</dt>
     * <dd> <p>Checks whether the values of two operands are equal; if the values are
     * not equal, then the condition becomes true.</p> <p>Example: (a &lt; &gt; b) is
     * true.</p> </dd> <dt>&gt;</dt> <dd> <p>Checks whether the value of the left
     * operand is greater than the value of the right operand; if yes, then the
     * condition becomes true.</p> <p>Example: (a &gt; b) is not true.</p> </dd>
     * <dt>&lt;</dt> <dd> <p>Checks whether the value of the left operand is less than
     * the value of the right operand; if yes, then the condition becomes true.</p>
     * <p>Example: (a &lt; b) is true.</p> </dd> <dt>&gt;=</dt> <dd> <p>Checks whether
     * the value of the left operand is greater than or equal to the value of the right
     * operand; if yes, then the condition becomes true.</p> <p>Example: (a &gt;= b) is
     * not true.</p> </dd> <dt>&lt;=</dt> <dd> <p>Checks whether the value of the left
     * operand is less than or equal to the value of the right operand; if yes, then
     * the condition becomes true.</p> <p>Example: (a &lt;= b) is true.</p> </dd>
     * <dt>AND, OR, IN, BETWEEN, LIKE, NOT, IS NULL</dt> <dd> <p>Logical operators.</p>
     * </dd> </dl> <p> <i>Supported Partition Key Types</i>: The following are the
     * supported partition keys.</p> <ul> <li> <p> <code>string</code> </p> </li> <li>
     * <p> <code>date</code> </p> </li> <li> <p> <code>timestamp</code> </p> </li> <li>
     * <p> <code>int</code> </p> </li> <li> <p> <code>bigint</code> </p> </li> <li> <p>
     * <code>long</code> </p> </li> <li> <p> <code>tinyint</code> </p> </li> <li> <p>
     * <code>smallint</code> </p> </li> <li> <p> <code>decimal</code> </p> </li> </ul>
     * <p>If an type is encountered that is not valid, an exception is thrown. </p>
     * <p>The following list shows the valid operators on each type. When you define a
     * crawler, the <code>partitionKey</code> type is created as a <code>STRING</code>,
     * to be compatible with the catalog partitions. </p> <p> <i>Sample API Call</i>:
     * </p>
     */
    inline GetPartitionsRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>An expression that filters the partitions to be returned.</p> <p>The
     * expression uses SQL syntax similar to the SQL <code>WHERE</code> filter clause.
     * The SQL statement parser <a
     * href="http://jsqlparser.sourceforge.net/home.php">JSQLParser</a> parses the
     * expression. </p> <p> <i>Operators</i>: The following are the operators that you
     * can use in the <code>Expression</code> API call:</p> <dl> <dt>=</dt> <dd>
     * <p>Checks whether the values of the two operands are equal; if yes, then the
     * condition becomes true.</p> <p>Example: Assume 'variable a' holds 10 and
     * 'variable b' holds 20. </p> <p>(a = b) is not true.</p> </dd> <dt>&lt; &gt;</dt>
     * <dd> <p>Checks whether the values of two operands are equal; if the values are
     * not equal, then the condition becomes true.</p> <p>Example: (a &lt; &gt; b) is
     * true.</p> </dd> <dt>&gt;</dt> <dd> <p>Checks whether the value of the left
     * operand is greater than the value of the right operand; if yes, then the
     * condition becomes true.</p> <p>Example: (a &gt; b) is not true.</p> </dd>
     * <dt>&lt;</dt> <dd> <p>Checks whether the value of the left operand is less than
     * the value of the right operand; if yes, then the condition becomes true.</p>
     * <p>Example: (a &lt; b) is true.</p> </dd> <dt>&gt;=</dt> <dd> <p>Checks whether
     * the value of the left operand is greater than or equal to the value of the right
     * operand; if yes, then the condition becomes true.</p> <p>Example: (a &gt;= b) is
     * not true.</p> </dd> <dt>&lt;=</dt> <dd> <p>Checks whether the value of the left
     * operand is less than or equal to the value of the right operand; if yes, then
     * the condition becomes true.</p> <p>Example: (a &lt;= b) is true.</p> </dd>
     * <dt>AND, OR, IN, BETWEEN, LIKE, NOT, IS NULL</dt> <dd> <p>Logical operators.</p>
     * </dd> </dl> <p> <i>Supported Partition Key Types</i>: The following are the
     * supported partition keys.</p> <ul> <li> <p> <code>string</code> </p> </li> <li>
     * <p> <code>date</code> </p> </li> <li> <p> <code>timestamp</code> </p> </li> <li>
     * <p> <code>int</code> </p> </li> <li> <p> <code>bigint</code> </p> </li> <li> <p>
     * <code>long</code> </p> </li> <li> <p> <code>tinyint</code> </p> </li> <li> <p>
     * <code>smallint</code> </p> </li> <li> <p> <code>decimal</code> </p> </li> </ul>
     * <p>If an type is encountered that is not valid, an exception is thrown. </p>
     * <p>The following list shows the valid operators on each type. When you define a
     * crawler, the <code>partitionKey</code> type is created as a <code>STRING</code>,
     * to be compatible with the catalog partitions. </p> <p> <i>Sample API Call</i>:
     * </p>
     */
    inline GetPartitionsRequest& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline GetPartitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline GetPartitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline GetPartitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The segment of the table's partitions to scan in this request.</p>
     */
    inline const Segment& GetSegment() const{ return m_segment; }

    /**
     * <p>The segment of the table's partitions to scan in this request.</p>
     */
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    /**
     * <p>The segment of the table's partitions to scan in this request.</p>
     */
    inline void SetSegment(const Segment& value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>The segment of the table's partitions to scan in this request.</p>
     */
    inline void SetSegment(Segment&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    /**
     * <p>The segment of the table's partitions to scan in this request.</p>
     */
    inline GetPartitionsRequest& WithSegment(const Segment& value) { SetSegment(value); return *this;}

    /**
     * <p>The segment of the table's partitions to scan in this request.</p>
     */
    inline GetPartitionsRequest& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}


    /**
     * <p>The maximum number of partitions to return in a single response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of partitions to return in a single response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of partitions to return in a single response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of partitions to return in a single response.</p>
     */
    inline GetPartitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When true, specifies not returning the partition column schema. Useful when
     * you are interested only in other partition attributes such as partition values
     * or location. This approach avoids the problem of a large response by not
     * returning duplicate data.</p>
     */
    inline bool GetExcludeColumnSchema() const{ return m_excludeColumnSchema; }

    /**
     * <p>When true, specifies not returning the partition column schema. Useful when
     * you are interested only in other partition attributes such as partition values
     * or location. This approach avoids the problem of a large response by not
     * returning duplicate data.</p>
     */
    inline bool ExcludeColumnSchemaHasBeenSet() const { return m_excludeColumnSchemaHasBeenSet; }

    /**
     * <p>When true, specifies not returning the partition column schema. Useful when
     * you are interested only in other partition attributes such as partition values
     * or location. This approach avoids the problem of a large response by not
     * returning duplicate data.</p>
     */
    inline void SetExcludeColumnSchema(bool value) { m_excludeColumnSchemaHasBeenSet = true; m_excludeColumnSchema = value; }

    /**
     * <p>When true, specifies not returning the partition column schema. Useful when
     * you are interested only in other partition attributes such as partition values
     * or location. This approach avoids the problem of a large response by not
     * returning duplicate data.</p>
     */
    inline GetPartitionsRequest& WithExcludeColumnSchema(bool value) { SetExcludeColumnSchema(value); return *this;}


    /**
     * <p>The transaction ID at which to read the partition contents.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID at which to read the partition contents.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID at which to read the partition contents.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID at which to read the partition contents.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID at which to read the partition contents.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID at which to read the partition contents.</p>
     */
    inline GetPartitionsRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID at which to read the partition contents.</p>
     */
    inline GetPartitionsRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID at which to read the partition contents.</p>
     */
    inline GetPartitionsRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>The time as of when to read the partition contents. If not set, the most
     * recent transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetQueryAsOfTime() const{ return m_queryAsOfTime; }

    /**
     * <p>The time as of when to read the partition contents. If not set, the most
     * recent transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline bool QueryAsOfTimeHasBeenSet() const { return m_queryAsOfTimeHasBeenSet; }

    /**
     * <p>The time as of when to read the partition contents. If not set, the most
     * recent transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline void SetQueryAsOfTime(const Aws::Utils::DateTime& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = value; }

    /**
     * <p>The time as of when to read the partition contents. If not set, the most
     * recent transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline void SetQueryAsOfTime(Aws::Utils::DateTime&& value) { m_queryAsOfTimeHasBeenSet = true; m_queryAsOfTime = std::move(value); }

    /**
     * <p>The time as of when to read the partition contents. If not set, the most
     * recent transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline GetPartitionsRequest& WithQueryAsOfTime(const Aws::Utils::DateTime& value) { SetQueryAsOfTime(value); return *this;}

    /**
     * <p>The time as of when to read the partition contents. If not set, the most
     * recent transaction commit time will be used. Cannot be specified along with
     * <code>TransactionId</code>.</p>
     */
    inline GetPartitionsRequest& WithQueryAsOfTime(Aws::Utils::DateTime&& value) { SetQueryAsOfTime(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Segment m_segment;
    bool m_segmentHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_excludeColumnSchema;
    bool m_excludeColumnSchemaHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::Utils::DateTime m_queryAsOfTime;
    bool m_queryAsOfTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
