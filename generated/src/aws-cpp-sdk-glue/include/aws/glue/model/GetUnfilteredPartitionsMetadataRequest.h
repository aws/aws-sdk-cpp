/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/AuditContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Segment.h>
#include <aws/glue/model/QuerySessionContext.h>
#include <aws/glue/model/PermissionType.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetUnfilteredPartitionsMetadataRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetUnfilteredPartitionsMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUnfilteredPartitionsMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


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
    inline GetUnfilteredPartitionsMetadataRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


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
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

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
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

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
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline const AuditContext& GetAuditContext() const{ return m_auditContext; }

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline void SetAuditContext(const AuditContext& value) { m_auditContextHasBeenSet = true; m_auditContext = value; }

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline void SetAuditContext(AuditContext&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::move(value); }

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithAuditContext(const AuditContext& value) { SetAuditContext(value); return *this;}

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithAuditContext(AuditContext&& value) { SetAuditContext(std::move(value)); return *this;}


    /**
     * <p>A list of supported permission types. </p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const{ return m_supportedPermissionTypes; }

    /**
     * <p>A list of supported permission types. </p>
     */
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }

    /**
     * <p>A list of supported permission types. </p>
     */
    inline void SetSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = value; }

    /**
     * <p>A list of supported permission types. </p>
     */
    inline void SetSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::move(value); }

    /**
     * <p>A list of supported permission types. </p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { SetSupportedPermissionTypes(value); return *this;}

    /**
     * <p>A list of supported permission types. </p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { SetSupportedPermissionTypes(std::move(value)); return *this;}

    /**
     * <p>A list of supported permission types. </p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& AddSupportedPermissionTypes(const PermissionType& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }

    /**
     * <p>A list of supported permission types. </p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& AddSupportedPermissionTypes(PermissionType&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(std::move(value)); return *this; }


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
    inline GetUnfilteredPartitionsMetadataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline GetUnfilteredPartitionsMetadataRequest& WithSegment(const Segment& value) { SetSegment(value); return *this;}

    /**
     * <p>The segment of the table's partitions to scan in this request.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}


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
    inline GetUnfilteredPartitionsMetadataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline const QuerySessionContext& GetQuerySessionContext() const{ return m_querySessionContext; }

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline bool QuerySessionContextHasBeenSet() const { return m_querySessionContextHasBeenSet; }

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline void SetQuerySessionContext(const QuerySessionContext& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = value; }

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline void SetQuerySessionContext(QuerySessionContext&& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = std::move(value); }

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithQuerySessionContext(const QuerySessionContext& value) { SetQuerySessionContext(value); return *this;}

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline GetUnfilteredPartitionsMetadataRequest& WithQuerySessionContext(QuerySessionContext&& value) { SetQuerySessionContext(std::move(value)); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    AuditContext m_auditContext;
    bool m_auditContextHasBeenSet = false;

    Aws::Vector<PermissionType> m_supportedPermissionTypes;
    bool m_supportedPermissionTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Segment m_segment;
    bool m_segmentHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    QuerySessionContext m_querySessionContext;
    bool m_querySessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
