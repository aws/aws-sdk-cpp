/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/AttributeValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {

/**
 * <p>Contains the filter criteria used to limit which items are included in an
 * export. If you don't include this parameter, all items and attributes are
 * exported.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/FilterSpecification">AWS
 * API Reference</a></p>
 */
class FilterSpecification {
 public:
  AWS_DYNAMODB_API FilterSpecification() = default;
  AWS_DYNAMODB_API FilterSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API FilterSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A condition that filters which items are included in the export. This
   * parameter uses the same syntax as <code>FilterExpression</code> in
   * <code>Query</code> and <code>Scan</code>. If you don't provide
   * <code>KeyConditionExpression</code>, this expression can also reference key
   * attributes. If you don't specify this parameter, all items are included in the
   * export.</p>
   */
  inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
  inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
  template <typename FilterExpressionT = Aws::String>
  void SetFilterExpression(FilterExpressionT&& value) {
    m_filterExpressionHasBeenSet = true;
    m_filterExpression = std::forward<FilterExpressionT>(value);
  }
  template <typename FilterExpressionT = Aws::String>
  FilterSpecification& WithFilterExpression(FilterExpressionT&& value) {
    SetFilterExpression(std::forward<FilterExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attributes you want to retrieve for items included in the export.
   * Separate attribute names in the expression with commas. If you don't specify
   * this parameter, all attributes are returned.</p>
   */
  inline const Aws::String& GetProjectionExpression() const { return m_projectionExpression; }
  inline bool ProjectionExpressionHasBeenSet() const { return m_projectionExpressionHasBeenSet; }
  template <typename ProjectionExpressionT = Aws::String>
  void SetProjectionExpression(ProjectionExpressionT&& value) {
    m_projectionExpressionHasBeenSet = true;
    m_projectionExpression = std::forward<ProjectionExpressionT>(value);
  }
  template <typename ProjectionExpressionT = Aws::String>
  FilterSpecification& WithProjectionExpression(ProjectionExpressionT&& value) {
    SetProjectionExpression(std::forward<ProjectionExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition expression that filters items by key values. The expression must
   * test equality on a single partition key value and can optionally compare a sort
   * key value. This parameter uses the same syntax as
   * <code>KeyConditionExpression</code> in <code>Query</code>. When you provide this
   * parameter, <code>FilterExpression</code> can only reference non-key attributes.
   * If you don't specify this parameter, all items are eligible for export.</p>
   */
  inline const Aws::String& GetKeyConditionExpression() const { return m_keyConditionExpression; }
  inline bool KeyConditionExpressionHasBeenSet() const { return m_keyConditionExpressionHasBeenSet; }
  template <typename KeyConditionExpressionT = Aws::String>
  void SetKeyConditionExpression(KeyConditionExpressionT&& value) {
    m_keyConditionExpressionHasBeenSet = true;
    m_keyConditionExpression = std::forward<KeyConditionExpressionT>(value);
  }
  template <typename KeyConditionExpressionT = Aws::String>
  FilterSpecification& WithKeyConditionExpression(KeyConditionExpressionT&& value) {
    SetKeyConditionExpression(std::forward<KeyConditionExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more substitution tokens for attribute names in an expression. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.ExpressionAttributeNames.html">Expression
   * Attribute Names</a> in the Amazon DynamoDB Developer Guide.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const { return m_expressionAttributeNames; }
  inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }
  template <typename ExpressionAttributeNamesT = Aws::Map<Aws::String, Aws::String>>
  void SetExpressionAttributeNames(ExpressionAttributeNamesT&& value) {
    m_expressionAttributeNamesHasBeenSet = true;
    m_expressionAttributeNames = std::forward<ExpressionAttributeNamesT>(value);
  }
  template <typename ExpressionAttributeNamesT = Aws::Map<Aws::String, Aws::String>>
  FilterSpecification& WithExpressionAttributeNames(ExpressionAttributeNamesT&& value) {
    SetExpressionAttributeNames(std::forward<ExpressionAttributeNamesT>(value));
    return *this;
  }
  template <typename ExpressionAttributeNamesKeyT = Aws::String, typename ExpressionAttributeNamesValueT = Aws::String>
  FilterSpecification& AddExpressionAttributeNames(ExpressionAttributeNamesKeyT&& key, ExpressionAttributeNamesValueT&& value) {
    m_expressionAttributeNamesHasBeenSet = true;
    m_expressionAttributeNames.emplace(std::forward<ExpressionAttributeNamesKeyT>(key),
                                       std::forward<ExpressionAttributeNamesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more values that can be substituted in an expression. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.ExpressionAttributeValues.html">Expression
   * Attribute Values</a> in the Amazon DynamoDB Developer Guide.</p>
   */
  inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const { return m_expressionAttributeValues; }
  inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }
  template <typename ExpressionAttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
  void SetExpressionAttributeValues(ExpressionAttributeValuesT&& value) {
    m_expressionAttributeValuesHasBeenSet = true;
    m_expressionAttributeValues = std::forward<ExpressionAttributeValuesT>(value);
  }
  template <typename ExpressionAttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
  FilterSpecification& WithExpressionAttributeValues(ExpressionAttributeValuesT&& value) {
    SetExpressionAttributeValues(std::forward<ExpressionAttributeValuesT>(value));
    return *this;
  }
  template <typename ExpressionAttributeValuesKeyT = Aws::String, typename ExpressionAttributeValuesValueT = AttributeValue>
  FilterSpecification& AddExpressionAttributeValues(ExpressionAttributeValuesKeyT&& key, ExpressionAttributeValuesValueT&& value) {
    m_expressionAttributeValuesHasBeenSet = true;
    m_expressionAttributeValues.emplace(std::forward<ExpressionAttributeValuesKeyT>(key),
                                        std::forward<ExpressionAttributeValuesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_filterExpression;

  Aws::String m_projectionExpression;

  Aws::String m_keyConditionExpression;

  Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;

  Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
  bool m_filterExpressionHasBeenSet = false;
  bool m_projectionExpressionHasBeenSet = false;
  bool m_keyConditionExpressionHasBeenSet = false;
  bool m_expressionAttributeNamesHasBeenSet = false;
  bool m_expressionAttributeValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
