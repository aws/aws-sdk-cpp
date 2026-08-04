/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>

#include <utility>

namespace Aws {
namespace DynamoDB {
namespace Model {

/**
 */
class SearchVectorsRequest : public DynamoDBRequest {
 public:
  AWS_DYNAMODB_API SearchVectorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchVectors"; }

  AWS_DYNAMODB_API Aws::String SerializePayload() const override;

  AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the table containing the vector
   * index.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  SearchVectorsRequest& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the vector index to search. The index must be in the
   * <code>ACTIVE</code> state.</p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  SearchVectorsRequest& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline ReturnConsumedCapacity GetReturnConsumedCapacity() const { return m_returnConsumedCapacity; }
  inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
  inline void SetReturnConsumedCapacity(ReturnConsumedCapacity value) {
    m_returnConsumedCapacityHasBeenSet = true;
    m_returnConsumedCapacity = value;
  }
  inline SearchVectorsRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity value) {
    SetReturnConsumedCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more substitution tokens for attribute names in an expression. Use the
   * <code>#</code> character in an expression to dereference an attribute name.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const { return m_expressionAttributeNames; }
  inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }
  template <typename ExpressionAttributeNamesT = Aws::Map<Aws::String, Aws::String>>
  void SetExpressionAttributeNames(ExpressionAttributeNamesT&& value) {
    m_expressionAttributeNamesHasBeenSet = true;
    m_expressionAttributeNames = std::forward<ExpressionAttributeNamesT>(value);
  }
  template <typename ExpressionAttributeNamesT = Aws::Map<Aws::String, Aws::String>>
  SearchVectorsRequest& WithExpressionAttributeNames(ExpressionAttributeNamesT&& value) {
    SetExpressionAttributeNames(std::forward<ExpressionAttributeNamesT>(value));
    return *this;
  }
  template <typename ExpressionAttributeNamesKeyT = Aws::String, typename ExpressionAttributeNamesValueT = Aws::String>
  SearchVectorsRequest& AddExpressionAttributeNames(ExpressionAttributeNamesKeyT&& key, ExpressionAttributeNamesValueT&& value) {
    m_expressionAttributeNamesHasBeenSet = true;
    m_expressionAttributeNames.emplace(std::forward<ExpressionAttributeNamesKeyT>(key),
                                       std::forward<ExpressionAttributeNamesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more values that can be substituted in an expression. Use the
   * <code>:</code> character in an expression to dereference an attribute value.</p>
   */
  inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const { return m_expressionAttributeValues; }
  inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }
  template <typename ExpressionAttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
  void SetExpressionAttributeValues(ExpressionAttributeValuesT&& value) {
    m_expressionAttributeValuesHasBeenSet = true;
    m_expressionAttributeValues = std::forward<ExpressionAttributeValuesT>(value);
  }
  template <typename ExpressionAttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
  SearchVectorsRequest& WithExpressionAttributeValues(ExpressionAttributeValuesT&& value) {
    SetExpressionAttributeValues(std::forward<ExpressionAttributeValuesT>(value));
    return *this;
  }
  template <typename ExpressionAttributeValuesKeyT = Aws::String, typename ExpressionAttributeValuesValueT = AttributeValue>
  SearchVectorsRequest& AddExpressionAttributeValues(ExpressionAttributeValuesKeyT&& key, ExpressionAttributeValuesValueT&& value) {
    m_expressionAttributeValuesHasBeenSet = true;
    m_expressionAttributeValues.emplace(std::forward<ExpressionAttributeValuesKeyT>(key),
                                        std::forward<ExpressionAttributeValuesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string that identifies one or more attributes to retrieve from the index.
   * Separate attribute names with commas. If not specified, the operation returns
   * all attributes projected into the vector index.</p> <p>Only attributes projected
   * into the vector index can be retrieved.</p>
   */
  inline const Aws::String& GetProjectionExpression() const { return m_projectionExpression; }
  inline bool ProjectionExpressionHasBeenSet() const { return m_projectionExpressionHasBeenSet; }
  template <typename ProjectionExpressionT = Aws::String>
  void SetProjectionExpression(ProjectionExpressionT&& value) {
    m_projectionExpressionHasBeenSet = true;
    m_projectionExpression = std::forward<ProjectionExpressionT>(value);
  }
  template <typename ProjectionExpressionT = Aws::String>
  SearchVectorsRequest& WithProjectionExpression(ProjectionExpressionT&& value) {
    SetProjectionExpression(std::forward<ProjectionExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The search vector to compare against the indexed vectors. Each element is a
   * 32-bit IEEE-754 floating point number, provided in DynamoDB list format.</p>
   * <p>The number of dimensions must match the number of dimensions configured for
   * the vector index.</p>
   */
  inline const Aws::Vector<AttributeValue>& GetSearchVector() const { return m_searchVector; }
  inline bool SearchVectorHasBeenSet() const { return m_searchVectorHasBeenSet; }
  template <typename SearchVectorT = Aws::Vector<AttributeValue>>
  void SetSearchVector(SearchVectorT&& value) {
    m_searchVectorHasBeenSet = true;
    m_searchVector = std::forward<SearchVectorT>(value);
  }
  template <typename SearchVectorT = Aws::Vector<AttributeValue>>
  SearchVectorsRequest& WithSearchVector(SearchVectorT&& value) {
    SetSearchVector(std::forward<SearchVectorT>(value));
    return *this;
  }
  template <typename SearchVectorT = AttributeValue>
  SearchVectorsRequest& AddSearchVector(SearchVectorT&& value) {
    m_searchVectorHasBeenSet = true;
    m_searchVector.emplace_back(std::forward<SearchVectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition expression used to filter the vector search results. The
   * expression can reference attributes defined in the vector index search schema,
   * including <code>HASH</code> and <code>INLINE_FILTER</code> key elements.</p>
   * <p>Only the equality operator (<code>=</code>) is supported for
   * <code>HASH</code> attributes. Comparison and range operators are supported for
   * <code>INLINE_FILTER</code> attributes. Only top-level attributes from the search
   * schema can be referenced.</p>
   */
  inline const Aws::String& GetSearchConditionExpression() const { return m_searchConditionExpression; }
  inline bool SearchConditionExpressionHasBeenSet() const { return m_searchConditionExpressionHasBeenSet; }
  template <typename SearchConditionExpressionT = Aws::String>
  void SetSearchConditionExpression(SearchConditionExpressionT&& value) {
    m_searchConditionExpressionHasBeenSet = true;
    m_searchConditionExpression = std::forward<SearchConditionExpressionT>(value);
  }
  template <typename SearchConditionExpressionT = Aws::String>
  SearchVectorsRequest& WithSearchConditionExpression(SearchConditionExpressionT&& value) {
    SetSearchConditionExpression(std::forward<SearchConditionExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of most similar results to return.</p>
   */
  inline int GetTopK() const { return m_topK; }
  inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
  inline void SetTopK(int value) {
    m_topKHasBeenSet = true;
    m_topK = value;
  }
  inline SearchVectorsRequest& WithTopK(int value) {
    SetTopK(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableName;

  Aws::String m_indexName;

  ReturnConsumedCapacity m_returnConsumedCapacity{ReturnConsumedCapacity::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;

  Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;

  Aws::String m_projectionExpression;

  Aws::Vector<AttributeValue> m_searchVector;

  Aws::String m_searchConditionExpression;

  int m_topK{0};
  bool m_tableNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_returnConsumedCapacityHasBeenSet = false;
  bool m_expressionAttributeNamesHasBeenSet = false;
  bool m_expressionAttributeValuesHasBeenSet = false;
  bool m_projectionExpressionHasBeenSet = false;
  bool m_searchVectorHasBeenSet = false;
  bool m_searchConditionExpressionHasBeenSet = false;
  bool m_topKHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
