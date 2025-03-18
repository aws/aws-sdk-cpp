/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ReturnValuesOnConditionCheckFailure.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents a request to perform a <code>PutItem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Put">AWS API
   * Reference</a></p>
   */
  class Put
  {
  public:
    AWS_DYNAMODB_API Put() = default;
    AWS_DYNAMODB_API Put(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Put& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const { return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    template<typename ItemT = Aws::Map<Aws::String, AttributeValue>>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = Aws::Map<Aws::String, AttributeValue>>
    Put& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    template<typename ItemKeyT = Aws::String, typename ItemValueT = AttributeValue>
    Put& AddItem(ItemKeyT&& key, ItemValueT&& value) {
      m_itemHasBeenSet = true; m_item.emplace(std::forward<ItemKeyT>(key), std::forward<ItemValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Name of the table in which to write the item. You can also provide the Amazon
     * Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    Put& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline const Aws::String& GetConditionExpression() const { return m_conditionExpression; }
    inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }
    template<typename ConditionExpressionT = Aws::String>
    void SetConditionExpression(ConditionExpressionT&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = std::forward<ConditionExpressionT>(value); }
    template<typename ConditionExpressionT = Aws::String>
    Put& WithConditionExpression(ConditionExpressionT&& value) { SetConditionExpression(std::forward<ConditionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const { return m_expressionAttributeNames; }
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }
    template<typename ExpressionAttributeNamesT = Aws::Map<Aws::String, Aws::String>>
    void SetExpressionAttributeNames(ExpressionAttributeNamesT&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::forward<ExpressionAttributeNamesT>(value); }
    template<typename ExpressionAttributeNamesT = Aws::Map<Aws::String, Aws::String>>
    Put& WithExpressionAttributeNames(ExpressionAttributeNamesT&& value) { SetExpressionAttributeNames(std::forward<ExpressionAttributeNamesT>(value)); return *this;}
    template<typename ExpressionAttributeNamesKeyT = Aws::String, typename ExpressionAttributeNamesValueT = Aws::String>
    Put& AddExpressionAttributeNames(ExpressionAttributeNamesKeyT&& key, ExpressionAttributeNamesValueT&& value) {
      m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::forward<ExpressionAttributeNamesKeyT>(key), std::forward<ExpressionAttributeNamesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const { return m_expressionAttributeValues; }
    inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }
    template<typename ExpressionAttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
    void SetExpressionAttributeValues(ExpressionAttributeValuesT&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = std::forward<ExpressionAttributeValuesT>(value); }
    template<typename ExpressionAttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
    Put& WithExpressionAttributeValues(ExpressionAttributeValuesT&& value) { SetExpressionAttributeValues(std::forward<ExpressionAttributeValuesT>(value)); return *this;}
    template<typename ExpressionAttributeValuesKeyT = Aws::String, typename ExpressionAttributeValuesValueT = AttributeValue>
    Put& AddExpressionAttributeValues(ExpressionAttributeValuesKeyT&& key, ExpressionAttributeValuesValueT&& value) {
      m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::forward<ExpressionAttributeValuesKeyT>(key), std::forward<ExpressionAttributeValuesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Put</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE and
     * ALL_OLD.</p>
     */
    inline ReturnValuesOnConditionCheckFailure GetReturnValuesOnConditionCheckFailure() const { return m_returnValuesOnConditionCheckFailure; }
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }
    inline Put& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

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
