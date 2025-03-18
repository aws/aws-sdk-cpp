/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Select.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/Condition.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>Scan</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ScanInput">AWS
   * API Reference</a></p>
   */
  class ScanRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ScanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Scan"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the table containing the requested items or if you provide
     * <code>IndexName</code>, the name of the table to which that index belongs.</p>
     * <p>You can also provide the Amazon Resource Name (ARN) of the table in this
     * parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ScanRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a secondary index to scan. This index can be any local secondary
     * index or global secondary index. Note that if you use the <code>IndexName</code>
     * parameter, you must also provide <code>TableName</code>.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    ScanRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>ProjectionExpression</code> instead.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const { return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    template<typename AttributesToGetT = Aws::Vector<Aws::String>>
    void SetAttributesToGet(AttributesToGetT&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::forward<AttributesToGetT>(value); }
    template<typename AttributesToGetT = Aws::Vector<Aws::String>>
    ScanRequest& WithAttributesToGet(AttributesToGetT&& value) { SetAttributesToGet(std::forward<AttributesToGetT>(value)); return *this;}
    template<typename AttributesToGetT = Aws::String>
    ScanRequest& AddAttributesToGet(AttributesToGetT&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.emplace_back(std::forward<AttributesToGetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to evaluate (not necessarily the number of
     * matching items). If DynamoDB processes the number of items up to the limit while
     * processing the results, it stops the operation and returns the matching values
     * up to that point, and a key in <code>LastEvaluatedKey</code> to apply in a
     * subsequent operation, so that you can pick up where you left off. Also, if the
     * processed dataset size exceeds 1 MB before DynamoDB reaches this limit, it stops
     * the operation and returns the matching values up to the limit, and a key in
     * <code>LastEvaluatedKey</code> to apply in a subsequent operation to continue the
     * operation. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html">Working
     * with Queries</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ScanRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, the count of matching items, or in the
     * case of an index, some or all of the attributes projected into the index.</p>
     * <ul> <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes
     * from the specified table or index. If you query a local secondary index, then
     * for each matching item in the index, DynamoDB fetches the entire item from the
     * parent table. If the index is configured to project all item attributes, then
     * all of the data can be obtained from the local secondary index, and no fetching
     * is required.</p> </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed
     * only when querying an index. Retrieves all attributes that have been projected
     * into the index. If the index is configured to project all attributes, this
     * return value is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li>
     * <li> <p> <code>COUNT</code> - Returns the number of matching items, rather than
     * the matching items themselves. Note that this uses the same quantity of read
     * capacity units as getting the items, and is subject to the same item size
     * calculations.</p> </li> <li> <p> <code>SPECIFIC_ATTRIBUTES</code> - Returns only
     * the attributes listed in <code>ProjectionExpression</code>. This return value is
     * equivalent to specifying <code>ProjectionExpression</code> without specifying
     * any value for <code>Select</code>.</p> <p>If you query or scan a local secondary
     * index and request only attributes that are projected into that index, the
     * operation reads only the index and not the table. If any of the requested
     * attributes are not projected into the local secondary index, DynamoDB fetches
     * each of these attributes from the parent table. This extra fetching incurs
     * additional throughput cost and latency.</p> <p>If you query or scan a global
     * secondary index, you can only request attributes that are projected into the
     * index. Global secondary index queries cannot fetch attributes from the parent
     * table.</p> </li> </ul> <p>If neither <code>Select</code> nor
     * <code>ProjectionExpression</code> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code> when accessing a table, and
     * <code>ALL_PROJECTED_ATTRIBUTES</code> when accessing an index. You cannot use
     * both <code>Select</code> and <code>ProjectionExpression</code> together in a
     * single request, unless the value for <code>Select</code> is
     * <code>SPECIFIC_ATTRIBUTES</code>. (This usage is equivalent to specifying
     * <code>ProjectionExpression</code> without any value for
     * <code>Select</code>.)</p>  <p>If you use the
     * <code>ProjectionExpression</code> parameter, then the value for
     * <code>Select</code> can only be <code>SPECIFIC_ATTRIBUTES</code>. Any other
     * value for <code>Select</code> will return an error.</p> 
     */
    inline Select GetSelect() const { return m_select; }
    inline bool SelectHasBeenSet() const { return m_selectHasBeenSet; }
    inline void SetSelect(Select value) { m_selectHasBeenSet = true; m_select = value; }
    inline ScanRequest& WithSelect(Select value) { SetSelect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>FilterExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ScanFilter.html">ScanFilter</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Condition>& GetScanFilter() const { return m_scanFilter; }
    inline bool ScanFilterHasBeenSet() const { return m_scanFilterHasBeenSet; }
    template<typename ScanFilterT = Aws::Map<Aws::String, Condition>>
    void SetScanFilter(ScanFilterT&& value) { m_scanFilterHasBeenSet = true; m_scanFilter = std::forward<ScanFilterT>(value); }
    template<typename ScanFilterT = Aws::Map<Aws::String, Condition>>
    ScanRequest& WithScanFilter(ScanFilterT&& value) { SetScanFilter(std::forward<ScanFilterT>(value)); return *this;}
    template<typename ScanFilterKeyT = Aws::String, typename ScanFilterValueT = Condition>
    ScanRequest& AddScanFilter(ScanFilterKeyT&& key, ScanFilterValueT&& value) {
      m_scanFilterHasBeenSet = true; m_scanFilter.emplace(std::forward<ScanFilterKeyT>(key), std::forward<ScanFilterValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>FilterExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline ConditionalOperator GetConditionalOperator() const { return m_conditionalOperator; }
    inline bool ConditionalOperatorHasBeenSet() const { return m_conditionalOperatorHasBeenSet; }
    inline void SetConditionalOperator(ConditionalOperator value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }
    inline ScanRequest& WithConditionalOperator(ConditionalOperator value) { SetConditionalOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedKey</code> in the previous
     * operation.</p> <p>The data type for <code>ExclusiveStartKey</code> must be
     * String, Number or Binary. No set data types are allowed.</p> <p>In a parallel
     * scan, a <code>Scan</code> request that includes <code>ExclusiveStartKey</code>
     * must specify the same segment whose previous <code>Scan</code> returned the
     * corresponding value of <code>LastEvaluatedKey</code>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExclusiveStartKey() const { return m_exclusiveStartKey; }
    inline bool ExclusiveStartKeyHasBeenSet() const { return m_exclusiveStartKeyHasBeenSet; }
    template<typename ExclusiveStartKeyT = Aws::Map<Aws::String, AttributeValue>>
    void SetExclusiveStartKey(ExclusiveStartKeyT&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = std::forward<ExclusiveStartKeyT>(value); }
    template<typename ExclusiveStartKeyT = Aws::Map<Aws::String, AttributeValue>>
    ScanRequest& WithExclusiveStartKey(ExclusiveStartKeyT&& value) { SetExclusiveStartKey(std::forward<ExclusiveStartKeyT>(value)); return *this;}
    template<typename ExclusiveStartKeyKeyT = Aws::String, typename ExclusiveStartKeyValueT = AttributeValue>
    ScanRequest& AddExclusiveStartKey(ExclusiveStartKeyKeyT&& key, ExclusiveStartKeyValueT&& value) {
      m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey.emplace(std::forward<ExclusiveStartKeyKeyT>(key), std::forward<ExclusiveStartKeyValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline ReturnConsumedCapacity GetReturnConsumedCapacity() const { return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline ScanRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity value) { SetReturnConsumedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a parallel <code>Scan</code> request, <code>TotalSegments</code>
     * represents the total number of segments into which the <code>Scan</code>
     * operation will be divided. The value of <code>TotalSegments</code> corresponds
     * to the number of application workers that will perform the parallel scan. For
     * example, if you want to use four application threads to scan a table or an
     * index, specify a <code>TotalSegments</code> value of 4.</p> <p>The value for
     * <code>TotalSegments</code> must be greater than or equal to 1, and less than or
     * equal to 1000000. If you specify a <code>TotalSegments</code> value of 1, the
     * <code>Scan</code> operation will be sequential rather than parallel.</p> <p>If
     * you specify <code>TotalSegments</code>, you must also specify
     * <code>Segment</code>.</p>
     */
    inline int GetTotalSegments() const { return m_totalSegments; }
    inline bool TotalSegmentsHasBeenSet() const { return m_totalSegmentsHasBeenSet; }
    inline void SetTotalSegments(int value) { m_totalSegmentsHasBeenSet = true; m_totalSegments = value; }
    inline ScanRequest& WithTotalSegments(int value) { SetTotalSegments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a parallel <code>Scan</code> request, <code>Segment</code> identifies an
     * individual segment to be scanned by an application worker.</p> <p>Segment IDs
     * are zero-based, so the first segment is always 0. For example, if you want to
     * use four application threads to scan a table or an index, then the first thread
     * specifies a <code>Segment</code> value of 0, the second thread specifies 1, and
     * so on.</p> <p>The value of <code>LastEvaluatedKey</code> returned from a
     * parallel <code>Scan</code> request must be used as
     * <code>ExclusiveStartKey</code> with the same segment ID in a subsequent
     * <code>Scan</code> operation.</p> <p>The value for <code>Segment</code> must be
     * greater than or equal to 0, and less than the value provided for
     * <code>TotalSegments</code>.</p> <p>If you provide <code>Segment</code>, you must
     * also provide <code>TotalSegments</code>.</p>
     */
    inline int GetSegment() const { return m_segment; }
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
    inline void SetSegment(int value) { m_segmentHasBeenSet = true; m_segment = value; }
    inline ScanRequest& WithSegment(int value) { SetSegment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that identifies one or more attributes to retrieve from the
     * specified table or index. These attributes can include scalars, sets, or
     * elements of a JSON document. The attributes in the expression must be separated
     * by commas.</p> <p>If no attribute names are specified, then all attributes will
     * be returned. If any of the requested attributes are not found, they will not
     * appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetProjectionExpression() const { return m_projectionExpression; }
    inline bool ProjectionExpressionHasBeenSet() const { return m_projectionExpressionHasBeenSet; }
    template<typename ProjectionExpressionT = Aws::String>
    void SetProjectionExpression(ProjectionExpressionT&& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = std::forward<ProjectionExpressionT>(value); }
    template<typename ProjectionExpressionT = Aws::String>
    ScanRequest& WithProjectionExpression(ProjectionExpressionT&& value) { SetProjectionExpression(std::forward<ProjectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <code>Scan</code> operation, but before the data is returned to you. Items that
     * do not satisfy the <code>FilterExpression</code> criteria are not returned.</p>
     *  <p>A <code>FilterExpression</code> is applied after the items have
     * already been read; the process of filtering does not consume any additional read
     * capacity units.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.FilterExpression">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    template<typename FilterExpressionT = Aws::String>
    void SetFilterExpression(FilterExpressionT&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::forward<FilterExpressionT>(value); }
    template<typename FilterExpressionT = Aws::String>
    ScanRequest& WithFilterExpression(FilterExpressionT&& value) { SetFilterExpression(std::forward<FilterExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul>  <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p>  <p>For more
     * information on expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const { return m_expressionAttributeNames; }
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }
    template<typename ExpressionAttributeNamesT = Aws::Map<Aws::String, Aws::String>>
    void SetExpressionAttributeNames(ExpressionAttributeNamesT&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::forward<ExpressionAttributeNamesT>(value); }
    template<typename ExpressionAttributeNamesT = Aws::Map<Aws::String, Aws::String>>
    ScanRequest& WithExpressionAttributeNames(ExpressionAttributeNamesT&& value) { SetExpressionAttributeNames(std::forward<ExpressionAttributeNamesT>(value)); return *this;}
    template<typename ExpressionAttributeNamesKeyT = Aws::String, typename ExpressionAttributeNamesValueT = Aws::String>
    ScanRequest& AddExpressionAttributeNames(ExpressionAttributeNamesKeyT&& key, ExpressionAttributeNamesValueT&& value) {
      m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::forward<ExpressionAttributeNamesKeyT>(key), std::forward<ExpressionAttributeNamesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const { return m_expressionAttributeValues; }
    inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }
    template<typename ExpressionAttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
    void SetExpressionAttributeValues(ExpressionAttributeValuesT&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = std::forward<ExpressionAttributeValuesT>(value); }
    template<typename ExpressionAttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
    ScanRequest& WithExpressionAttributeValues(ExpressionAttributeValuesT&& value) { SetExpressionAttributeValues(std::forward<ExpressionAttributeValuesT>(value)); return *this;}
    template<typename ExpressionAttributeValuesKeyT = Aws::String, typename ExpressionAttributeValuesValueT = AttributeValue>
    ScanRequest& AddExpressionAttributeValues(ExpressionAttributeValuesKeyT&& key, ExpressionAttributeValuesValueT&& value) {
      m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::forward<ExpressionAttributeValuesKeyT>(key), std::forward<ExpressionAttributeValuesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A Boolean value that determines the read consistency model during the
     * scan:</p> <ul> <li> <p>If <code>ConsistentRead</code> is <code>false</code>,
     * then the data returned from <code>Scan</code> might not contain the results from
     * other recently completed write operations (<code>PutItem</code>,
     * <code>UpdateItem</code>, or <code>DeleteItem</code>).</p> </li> <li> <p>If
     * <code>ConsistentRead</code> is <code>true</code>, then all of the write
     * operations that completed before the <code>Scan</code> began are guaranteed to
     * be contained in the <code>Scan</code> response.</p> </li> </ul> <p>The default
     * setting for <code>ConsistentRead</code> is <code>false</code>.</p> <p>The
     * <code>ConsistentRead</code> parameter is not supported on global secondary
     * indexes. If you scan a global secondary index with <code>ConsistentRead</code>
     * set to true, you will receive a <code>ValidationException</code>.</p>
     */
    inline bool GetConsistentRead() const { return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline ScanRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Select m_select{Select::NOT_SET};
    bool m_selectHasBeenSet = false;

    Aws::Map<Aws::String, Condition> m_scanFilter;
    bool m_scanFilterHasBeenSet = false;

    ConditionalOperator m_conditionalOperator{ConditionalOperator::NOT_SET};
    bool m_conditionalOperatorHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_exclusiveStartKey;
    bool m_exclusiveStartKeyHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity{ReturnConsumedCapacity::NOT_SET};
    bool m_returnConsumedCapacityHasBeenSet = false;

    int m_totalSegments{0};
    bool m_totalSegmentsHasBeenSet = false;

    int m_segment{0};
    bool m_segmentHasBeenSet = false;

    Aws::String m_projectionExpression;
    bool m_projectionExpressionHasBeenSet = false;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet = false;

    bool m_consistentRead{false};
    bool m_consistentReadHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
