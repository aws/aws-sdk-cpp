/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/TargetedSentimentEntity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Comprehend {
namespace Model {

/**
 * <p>Analysis results for one of the documents in the batch.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectTargetedSentimentItemResult">AWS
 * API Reference</a></p>
 */
class BatchDetectTargetedSentimentItemResult {
 public:
  AWS_COMPREHEND_API BatchDetectTargetedSentimentItemResult() = default;
  AWS_COMPREHEND_API BatchDetectTargetedSentimentItemResult(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API BatchDetectTargetedSentimentItemResult& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The zero-based index of this result in the input list.</p>
   */
  inline int64_t GetIndex() const { return m_index; }
  inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
  inline void SetIndex(int64_t value) {
    m_indexHasBeenSet = true;
    m_index = value;
  }
  inline BatchDetectTargetedSentimentItemResult& WithIndex(int64_t value) {
    SetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of targeted sentiment entities.</p>
   */
  inline const Aws::Vector<TargetedSentimentEntity>& GetEntities() const { return m_entities; }
  inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
  template <typename EntitiesT = Aws::Vector<TargetedSentimentEntity>>
  void SetEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities = std::forward<EntitiesT>(value);
  }
  template <typename EntitiesT = Aws::Vector<TargetedSentimentEntity>>
  BatchDetectTargetedSentimentItemResult& WithEntities(EntitiesT&& value) {
    SetEntities(std::forward<EntitiesT>(value));
    return *this;
  }
  template <typename EntitiesT = TargetedSentimentEntity>
  BatchDetectTargetedSentimentItemResult& AddEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities.emplace_back(std::forward<EntitiesT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_index{0};

  Aws::Vector<TargetedSentimentEntity> m_entities;
  bool m_indexHasBeenSet = false;
  bool m_entitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
