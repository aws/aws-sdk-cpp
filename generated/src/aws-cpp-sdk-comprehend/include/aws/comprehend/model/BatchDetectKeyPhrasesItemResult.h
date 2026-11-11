/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/KeyPhrase.h>
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
 * <p>The result of calling the operation. The operation returns one object for
 * each document that is successfully processed by the operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectKeyPhrasesItemResult">AWS
 * API Reference</a></p>
 */
class BatchDetectKeyPhrasesItemResult {
 public:
  AWS_COMPREHEND_API BatchDetectKeyPhrasesItemResult() = default;
  AWS_COMPREHEND_API BatchDetectKeyPhrasesItemResult(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API BatchDetectKeyPhrasesItemResult& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The zero-based index of the document in the input list.</p>
   */
  inline int64_t GetIndex() const { return m_index; }
  inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
  inline void SetIndex(int64_t value) {
    m_indexHasBeenSet = true;
    m_index = value;
  }
  inline BatchDetectKeyPhrasesItemResult& WithIndex(int64_t value) {
    SetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more <a>KeyPhrase</a> objects, one for each key phrase detected in the
   * document.</p>
   */
  inline const Aws::Vector<KeyPhrase>& GetKeyPhrases() const { return m_keyPhrases; }
  inline bool KeyPhrasesHasBeenSet() const { return m_keyPhrasesHasBeenSet; }
  template <typename KeyPhrasesT = Aws::Vector<KeyPhrase>>
  void SetKeyPhrases(KeyPhrasesT&& value) {
    m_keyPhrasesHasBeenSet = true;
    m_keyPhrases = std::forward<KeyPhrasesT>(value);
  }
  template <typename KeyPhrasesT = Aws::Vector<KeyPhrase>>
  BatchDetectKeyPhrasesItemResult& WithKeyPhrases(KeyPhrasesT&& value) {
    SetKeyPhrases(std::forward<KeyPhrasesT>(value));
    return *this;
  }
  template <typename KeyPhrasesT = KeyPhrase>
  BatchDetectKeyPhrasesItemResult& AddKeyPhrases(KeyPhrasesT&& value) {
    m_keyPhrasesHasBeenSet = true;
    m_keyPhrases.emplace_back(std::forward<KeyPhrasesT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_index{0};

  Aws::Vector<KeyPhrase> m_keyPhrases;
  bool m_indexHasBeenSet = false;
  bool m_keyPhrasesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
