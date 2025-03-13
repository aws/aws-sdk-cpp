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
    AWS_GLUE_API GetUnfilteredPartitionsMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUnfilteredPartitionsMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GetUnfilteredPartitionsMetadataRequest& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is provided, the AWS account ID is used by default. </p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    GetUnfilteredPartitionsMetadataRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GetUnfilteredPartitionsMetadataRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table that contains the partition.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    GetUnfilteredPartitionsMetadataRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    GetUnfilteredPartitionsMetadataRequest& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline const AuditContext& GetAuditContext() const { return m_auditContext; }
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
    template<typename AuditContextT = AuditContext>
    void SetAuditContext(AuditContextT&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::forward<AuditContextT>(value); }
    template<typename AuditContextT = AuditContext>
    GetUnfilteredPartitionsMetadataRequest& WithAuditContext(AuditContextT&& value) { SetAuditContext(std::forward<AuditContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of supported permission types. </p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const { return m_supportedPermissionTypes; }
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }
    template<typename SupportedPermissionTypesT = Aws::Vector<PermissionType>>
    void SetSupportedPermissionTypes(SupportedPermissionTypesT&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::forward<SupportedPermissionTypesT>(value); }
    template<typename SupportedPermissionTypesT = Aws::Vector<PermissionType>>
    GetUnfilteredPartitionsMetadataRequest& WithSupportedPermissionTypes(SupportedPermissionTypesT&& value) { SetSupportedPermissionTypes(std::forward<SupportedPermissionTypesT>(value)); return *this;}
    inline GetUnfilteredPartitionsMetadataRequest& AddSupportedPermissionTypes(PermissionType value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * partitions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetUnfilteredPartitionsMetadataRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment of the table's partitions to scan in this request.</p>
     */
    inline const Segment& GetSegment() const { return m_segment; }
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
    template<typename SegmentT = Segment>
    void SetSegment(SegmentT&& value) { m_segmentHasBeenSet = true; m_segment = std::forward<SegmentT>(value); }
    template<typename SegmentT = Segment>
    GetUnfilteredPartitionsMetadataRequest& WithSegment(SegmentT&& value) { SetSegment(std::forward<SegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of partitions to return in a single response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetUnfilteredPartitionsMetadataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline const QuerySessionContext& GetQuerySessionContext() const { return m_querySessionContext; }
    inline bool QuerySessionContextHasBeenSet() const { return m_querySessionContextHasBeenSet; }
    template<typename QuerySessionContextT = QuerySessionContext>
    void SetQuerySessionContext(QuerySessionContextT&& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = std::forward<QuerySessionContextT>(value); }
    template<typename QuerySessionContextT = QuerySessionContext>
    GetUnfilteredPartitionsMetadataRequest& WithQuerySessionContext(QuerySessionContextT&& value) { SetQuerySessionContext(std::forward<QuerySessionContextT>(value)); return *this;}
    ///@}
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    QuerySessionContext m_querySessionContext;
    bool m_querySessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
