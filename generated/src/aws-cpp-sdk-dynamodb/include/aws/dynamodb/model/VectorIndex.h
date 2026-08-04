/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
 * <p>Contains the configuration settings for a vector index, including the index
 * name, vector attribute, dimensions, distance function, search schema, and
 * projection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/VectorIndex">AWS
 * API Reference</a></p>
 */
class VectorIndex {
 public:
  AWS_DYNAMODB_API VectorIndex() = default;
  AWS_DYNAMODB_API VectorIndex(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API VectorIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  VectorIndex& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
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
  VectorIndex& WithVectorAttribute(VectorAttributeT&& value) {
    SetVectorAttribute(std::forward<VectorAttributeT>(value));
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
  VectorIndex& WithSearchSchema(SearchSchemaT&& value) {
    SetSearchSchema(std::forward<SearchSchemaT>(value));
    return *this;
  }
  template <typename SearchSchemaT = SearchSchemaElement>
  VectorIndex& AddSearchSchema(SearchSchemaT&& value) {
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
  VectorIndex& WithProjection(ProjectionT&& value) {
    SetProjection(std::forward<ProjectionT>(value));
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
  inline VectorIndex& WithDimensions(long long value) {
    SetDimensions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distance function used to calculate similarity between vectors. Valid
   * values: <code>COSINE</code>, <code>EUCLIDEAN</code>,
   * <code>DOT_PRODUCT</code>.</p>
   */
  inline VectorDistanceFunction GetDistanceFunction() const { return m_distanceFunction; }
  inline bool DistanceFunctionHasBeenSet() const { return m_distanceFunctionHasBeenSet; }
  inline void SetDistanceFunction(VectorDistanceFunction value) {
    m_distanceFunctionHasBeenSet = true;
    m_distanceFunction = value;
  }
  inline VectorIndex& WithDistanceFunction(VectorDistanceFunction value) {
    SetDistanceFunction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_indexName;

  VectorAttributeDefinition m_vectorAttribute;

  Aws::Vector<SearchSchemaElement> m_searchSchema;

  Projection m_projection;

  long long m_dimensions{0};

  VectorDistanceFunction m_distanceFunction{VectorDistanceFunction::NOT_SET};
  bool m_indexNameHasBeenSet = false;
  bool m_vectorAttributeHasBeenSet = false;
  bool m_searchSchemaHasBeenSet = false;
  bool m_projectionHasBeenSet = false;
  bool m_dimensionsHasBeenSet = false;
  bool m_distanceFunctionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
