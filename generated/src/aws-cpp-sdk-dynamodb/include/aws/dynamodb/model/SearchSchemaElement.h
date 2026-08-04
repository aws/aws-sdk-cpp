/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/SearchSchemaElementType.h>

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
 * <p>An element in the search schema of a vector index.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/SearchSchemaElement">AWS
 * API Reference</a></p>
 */
class SearchSchemaElement {
 public:
  AWS_DYNAMODB_API SearchSchemaElement() = default;
  AWS_DYNAMODB_API SearchSchemaElement(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API SearchSchemaElement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the attribute.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  SearchSchemaElement& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role of the attribute in the search schema. Valid values:</p> <ul> <li>
   * <p> <code>HASH</code> - A partition key that partitions the vector index for
   * independent scaling. When specified, you must provide this attribute's value in
   * the <code>SearchConditionExpression</code>.</p> </li> <li> <p>
   * <code>INLINE_FILTER</code> - An attribute projected into the vector index for
   * filtering at the storage layer during search. Inline filters are optional in the
   * <code>SearchConditionExpression</code>.</p> </li> </ul>
   */
  inline SearchSchemaElementType GetSearchSchemaElementType() const { return m_searchSchemaElementType; }
  inline bool SearchSchemaElementTypeHasBeenSet() const { return m_searchSchemaElementTypeHasBeenSet; }
  inline void SetSearchSchemaElementType(SearchSchemaElementType value) {
    m_searchSchemaElementTypeHasBeenSet = true;
    m_searchSchemaElementType = value;
  }
  inline SearchSchemaElement& WithSearchSchemaElementType(SearchSchemaElementType value) {
    SetSearchSchemaElementType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeName;

  SearchSchemaElementType m_searchSchemaElementType{SearchSchemaElementType::NOT_SET};
  bool m_attributeNameHasBeenSet = false;
  bool m_searchSchemaElementTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
