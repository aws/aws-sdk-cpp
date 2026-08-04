/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/IndexStatus.h>
#include <aws/dynamodb/model/Projection.h>
#include <aws/dynamodb/model/SearchSchemaElement.h>
#include <aws/dynamodb/model/VectorAttributeDefinition.h>
#include <aws/dynamodb/model/VectorDistanceFunction.h>

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
 * <p>Contains the current state and configuration of a vector index, including its
 * status, size, item count, and the settings specified when the index was
 * created.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/VectorIndexDescription">AWS
 * API Reference</a></p>
 */
class VectorIndexDescription {
 public:
  AWS_DYNAMODB_API VectorIndexDescription() = default;
  AWS_DYNAMODB_API VectorIndexDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API VectorIndexDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the vector index.</p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  VectorIndexDescription& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The search schema that defines partition key and inline filter attributes for
   * the vector index.</p>
   */
  inline const Aws::Vector<SearchSchemaElement>& GetSearchSchema() const { return m_searchSchema; }
  inline bool SearchSchemaHasBeenSet() const { return m_searchSchemaHasBeenSet; }
  template <typename SearchSchemaT = Aws::Vector<SearchSchemaElement>>
  void SetSearchSchema(SearchSchemaT&& value) {
    m_searchSchemaHasBeenSet = true;
    m_searchSchema = std::forward<SearchSchemaT>(value);
  }
  template <typename SearchSchemaT = Aws::Vector<SearchSchemaElement>>
  VectorIndexDescription& WithSearchSchema(SearchSchemaT&& value) {
    SetSearchSchema(std::forward<SearchSchemaT>(value));
    return *this;
  }
  template <typename SearchSchemaT = SearchSchemaElement>
  VectorIndexDescription& AddSearchSchema(SearchSchemaT&& value) {
    m_searchSchemaHasBeenSet = true;
    m_searchSchema.emplace_back(std::forward<SearchSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies attributes that are copied (projected) from the table into the
   * vector index.</p>
   */
  inline const Projection& GetProjection() const { return m_projection; }
  inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }
  template <typename ProjectionT = Projection>
  void SetProjection(ProjectionT&& value) {
    m_projectionHasBeenSet = true;
    m_projection = std::forward<ProjectionT>(value);
  }
  template <typename ProjectionT = Projection>
  VectorIndexDescription& WithProjection(ProjectionT&& value) {
    SetProjection(std::forward<ProjectionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vector attribute configuration for the index.</p>
   */
  inline const VectorAttributeDefinition& GetVectorAttribute() const { return m_vectorAttribute; }
  inline bool VectorAttributeHasBeenSet() const { return m_vectorAttributeHasBeenSet; }
  template <typename VectorAttributeT = VectorAttributeDefinition>
  void SetVectorAttribute(VectorAttributeT&& value) {
    m_vectorAttributeHasBeenSet = true;
    m_vectorAttribute = std::forward<VectorAttributeT>(value);
  }
  template <typename VectorAttributeT = VectorAttributeDefinition>
  VectorIndexDescription& WithVectorAttribute(VectorAttributeT&& value) {
    SetVectorAttribute(std::forward<VectorAttributeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of dimensions in each vector.</p>
   */
  inline long long GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  inline void SetDimensions(long long value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = value;
  }
  inline VectorIndexDescription& WithDimensions(long long value) {
    SetDimensions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distance function used to calculate similarity between vectors.</p>
   */
  inline VectorDistanceFunction GetDistanceFunction() const { return m_distanceFunction; }
  inline bool DistanceFunctionHasBeenSet() const { return m_distanceFunctionHasBeenSet; }
  inline void SetDistanceFunction(VectorDistanceFunction value) {
    m_distanceFunctionHasBeenSet = true;
    m_distanceFunction = value;
  }
  inline VectorIndexDescription& WithDistanceFunction(VectorDistanceFunction value) {
    SetDistanceFunction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the vector index:</p> <ul> <li> <p>
   * <code>CREATING</code> - The index is being created.</p> </li> <li> <p>
   * <code>ACTIVE</code> - The index is ready for use.</p> </li> <li> <p>
   * <code>DELETING</code> - The index is being deleted.</p> </li> </ul>
   */
  inline IndexStatus GetIndexStatus() const { return m_indexStatus; }
  inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
  inline void SetIndexStatus(IndexStatus value) {
    m_indexStatusHasBeenSet = true;
    m_indexStatus = value;
  }
  inline VectorIndexDescription& WithIndexStatus(IndexStatus value) {
    SetIndexStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the index is currently backfilling. During backfill,
   * <code>SearchVectors</code> operations might return incomplete results.</p>
   */
  inline bool GetBackfilling() const { return m_backfilling; }
  inline bool BackfillingHasBeenSet() const { return m_backfillingHasBeenSet; }
  inline void SetBackfilling(bool value) {
    m_backfillingHasBeenSet = true;
    m_backfilling = value;
  }
  inline VectorIndexDescription& WithBackfilling(bool value) {
    SetBackfilling(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total size of the vector index, in bytes. Amazon DynamoDB updates this
   * value approximately every six hours. Recent changes might not be reflected in
   * this value.</p>
   */
  inline long long GetIndexSizeBytes() const { return m_indexSizeBytes; }
  inline bool IndexSizeBytesHasBeenSet() const { return m_indexSizeBytesHasBeenSet; }
  inline void SetIndexSizeBytes(long long value) {
    m_indexSizeBytesHasBeenSet = true;
    m_indexSizeBytes = value;
  }
  inline VectorIndexDescription& WithIndexSizeBytes(long long value) {
    SetIndexSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of items indexed in the vector index. Amazon DynamoDB updates this
   * value approximately every six hours. Recent changes might not be reflected in
   * this value.</p>
   */
  inline long long GetItemCount() const { return m_itemCount; }
  inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
  inline void SetItemCount(long long value) {
    m_itemCountHasBeenSet = true;
    m_itemCount = value;
  }
  inline VectorIndexDescription& WithItemCount(long long value) {
    SetItemCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies the vector index.</p>
   */
  inline const Aws::String& GetIndexArn() const { return m_indexArn; }
  inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
  template <typename IndexArnT = Aws::String>
  void SetIndexArn(IndexArnT&& value) {
    m_indexArnHasBeenSet = true;
    m_indexArn = std::forward<IndexArnT>(value);
  }
  template <typename IndexArnT = Aws::String>
  VectorIndexDescription& WithIndexArn(IndexArnT&& value) {
    SetIndexArn(std::forward<IndexArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_indexName;

  Aws::Vector<SearchSchemaElement> m_searchSchema;

  Projection m_projection;

  VectorAttributeDefinition m_vectorAttribute;

  long long m_dimensions{0};

  VectorDistanceFunction m_distanceFunction{VectorDistanceFunction::NOT_SET};

  IndexStatus m_indexStatus{IndexStatus::NOT_SET};

  bool m_backfilling{false};

  long long m_indexSizeBytes{0};

  long long m_itemCount{0};

  Aws::String m_indexArn;
  bool m_indexNameHasBeenSet = false;
  bool m_searchSchemaHasBeenSet = false;
  bool m_projectionHasBeenSet = false;
  bool m_vectorAttributeHasBeenSet = false;
  bool m_dimensionsHasBeenSet = false;
  bool m_distanceFunctionHasBeenSet = false;
  bool m_indexStatusHasBeenSet = false;
  bool m_backfillingHasBeenSet = false;
  bool m_indexSizeBytesHasBeenSet = false;
  bool m_itemCountHasBeenSet = false;
  bool m_indexArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
