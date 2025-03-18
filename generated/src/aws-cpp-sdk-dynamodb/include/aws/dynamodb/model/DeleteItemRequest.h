/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/dynamodb/model/ReturnValue.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/dynamodb/model/ReturnValuesOnConditionCheckFailure.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/ExpectedAttributeValue.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeleteItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteItemInput">AWS
   * API Reference</a></p>
   */
  class DeleteItemRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API DeleteItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteItem"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the table from which to delete the item. You can also provide the
     * Amazon Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DeleteItemRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the primary key of the item to delete.</p> <p>For the primary key, you must
     * provide all of the key attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::Map<Aws::String, AttributeValue>>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::Map<Aws::String, AttributeValue>>
    DeleteItemRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    template<typename KeyKeyT = Aws::String, typename KeyValueT = AttributeValue>
    DeleteItemRequest& AddKey(KeyKeyT&& key, KeyValueT&& value) {
      m_keyHasBeenSet = true; m_key.emplace(std::forward<KeyKeyT>(key), std::forward<KeyValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, ExpectedAttributeValue>& GetExpected() const { return m_expected; }
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }
    template<typename ExpectedT = Aws::Map<Aws::String, ExpectedAttributeValue>>
    void SetExpected(ExpectedT&& value) { m_expectedHasBeenSet = true; m_expected = std::forward<ExpectedT>(value); }
    template<typename ExpectedT = Aws::Map<Aws::String, ExpectedAttributeValue>>
    DeleteItemRequest& WithExpected(ExpectedT&& value) { SetExpected(std::forward<ExpectedT>(value)); return *this;}
    template<typename ExpectedKeyT = Aws::String, typename ExpectedValueT = ExpectedAttributeValue>
    DeleteItemRequest& AddExpected(ExpectedKeyT&& key, ExpectedValueT&& value) {
      m_expectedHasBeenSet = true; m_expected.emplace(std::forward<ExpectedKeyT>(key), std::forward<ExpectedValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline ConditionalOperator GetConditionalOperator() const { return m_conditionalOperator; }
    inline bool ConditionalOperatorHasBeenSet() const { return m_conditionalOperatorHasBeenSet; }
    inline void SetConditionalOperator(ConditionalOperator value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }
    inline DeleteItemRequest& WithConditionalOperator(ConditionalOperator value) { SetConditionalOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appeared before they were deleted. For <code>DeleteItem</code>, the valid values
     * are:</p> <ul> <li> <p> <code>NONE</code> - If <code>ReturnValues</code> is not
     * specified, or if its value is <code>NONE</code>, then nothing is returned. (This
     * setting is the default for <code>ReturnValues</code>.)</p> </li> <li> <p>
     * <code>ALL_OLD</code> - The content of the old item is returned.</p> </li> </ul>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>  <p>The <code>ReturnValues</code>
     * parameter is used by several DynamoDB operations; however,
     * <code>DeleteItem</code> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> 
     */
    inline ReturnValue GetReturnValues() const { return m_returnValues; }
    inline bool ReturnValuesHasBeenSet() const { return m_returnValuesHasBeenSet; }
    inline void SetReturnValues(ReturnValue value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }
    inline DeleteItemRequest& WithReturnValues(ReturnValue value) { SetReturnValues(value); return *this;}
    ///@}

    ///@{
    
    inline ReturnConsumedCapacity GetReturnConsumedCapacity() const { return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline DeleteItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity value) { SetReturnConsumedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline ReturnItemCollectionMetrics GetReturnItemCollectionMetrics() const { return m_returnItemCollectionMetrics; }
    inline bool ReturnItemCollectionMetricsHasBeenSet() const { return m_returnItemCollectionMetricsHasBeenSet; }
    inline void SetReturnItemCollectionMetrics(ReturnItemCollectionMetrics value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }
    inline DeleteItemRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics value) { SetReturnItemCollectionMetrics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>DeleteItem</code> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code>= | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN
     * </code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code> </p>
     * </li> </ul> <p>For more information about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetConditionExpression() const { return m_conditionExpression; }
    inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }
    template<typename ConditionExpressionT = Aws::String>
    void SetConditionExpression(ConditionExpressionT&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = std::forward<ConditionExpressionT>(value); }
    template<typename ConditionExpressionT = Aws::String>
    DeleteItemRequest& WithConditionExpression(ConditionExpressionT&& value) { SetConditionExpression(std::forward<ConditionExpressionT>(value)); return *this;}
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
    DeleteItemRequest& WithExpressionAttributeNames(ExpressionAttributeNamesT&& value) { SetExpressionAttributeNames(std::forward<ExpressionAttributeNamesT>(value)); return *this;}
    template<typename ExpressionAttributeNamesKeyT = Aws::String, typename ExpressionAttributeNamesValueT = Aws::String>
    DeleteItemRequest& AddExpressionAttributeNames(ExpressionAttributeNamesKeyT&& key, ExpressionAttributeNamesValueT&& value) {
      m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::forward<ExpressionAttributeNamesKeyT>(key), std::forward<ExpressionAttributeNamesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
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
    DeleteItemRequest& WithExpressionAttributeValues(ExpressionAttributeValuesT&& value) { SetExpressionAttributeValues(std::forward<ExpressionAttributeValuesT>(value)); return *this;}
    template<typename ExpressionAttributeValuesKeyT = Aws::String, typename ExpressionAttributeValuesValueT = AttributeValue>
    DeleteItemRequest& AddExpressionAttributeValues(ExpressionAttributeValuesKeyT&& key, ExpressionAttributeValuesValueT&& value) {
      m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::forward<ExpressionAttributeValuesKeyT>(key), std::forward<ExpressionAttributeValuesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An optional parameter that returns the item attributes for a
     * <code>DeleteItem</code> operation that failed a condition check.</p> <p>There is
     * no additional cost associated with requesting a return value aside from the
     * small network and processing overhead of receiving a larger response. No read
     * capacity units are consumed.</p>
     */
    inline ReturnValuesOnConditionCheckFailure GetReturnValuesOnConditionCheckFailure() const { return m_returnValuesOnConditionCheckFailure; }
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }
    inline DeleteItemRequest& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet = false;

    Aws::Map<Aws::String, ExpectedAttributeValue> m_expected;
    bool m_expectedHasBeenSet = false;

    ConditionalOperator m_conditionalOperator{ConditionalOperator::NOT_SET};
    bool m_conditionalOperatorHasBeenSet = false;

    ReturnValue m_returnValues{ReturnValue::NOT_SET};
    bool m_returnValuesHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity{ReturnConsumedCapacity::NOT_SET};
    bool m_returnConsumedCapacityHasBeenSet = false;

    ReturnItemCollectionMetrics m_returnItemCollectionMetrics{ReturnItemCollectionMetrics::NOT_SET};
    bool m_returnItemCollectionMetricsHasBeenSet = false;

    Aws::String m_conditionExpression;
    bool m_conditionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet = false;

    ReturnValuesOnConditionCheckFailure m_returnValuesOnConditionCheckFailure{ReturnValuesOnConditionCheckFailure::NOT_SET};
    bool m_returnValuesOnConditionCheckFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
