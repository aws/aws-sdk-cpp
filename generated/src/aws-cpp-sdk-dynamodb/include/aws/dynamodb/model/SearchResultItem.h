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
 * <p>A single result from a <code>SearchVectors</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/SearchResultItem">AWS
 * API Reference</a></p>
 */
class SearchResultItem {
 public:
  AWS_DYNAMODB_API SearchResultItem() = default;
  AWS_DYNAMODB_API SearchResultItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API SearchResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
   * the projected attributes of the item returned by the vector search.</p>
   */
  inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const { return m_item; }
  inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
  template <typename ItemT = Aws::Map<Aws::String, AttributeValue>>
  void SetItem(ItemT&& value) {
    m_itemHasBeenSet = true;
    m_item = std::forward<ItemT>(value);
  }
  template <typename ItemT = Aws::Map<Aws::String, AttributeValue>>
  SearchResultItem& WithItem(ItemT&& value) {
    SetItem(std::forward<ItemT>(value));
    return *this;
  }
  template <typename ItemKeyT = Aws::String, typename ItemValueT = AttributeValue>
  SearchResultItem& AddItem(ItemKeyT&& key, ItemValueT&& value) {
    m_itemHasBeenSet = true;
    m_item.emplace(std::forward<ItemKeyT>(key), std::forward<ItemValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The similarity score for this item relative to the search vector. The
   * interpretation depends on the distance function configured for the vector
   * index.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline SearchResultItem& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, AttributeValue> m_item;

  double m_score{0.0};
  bool m_itemHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
