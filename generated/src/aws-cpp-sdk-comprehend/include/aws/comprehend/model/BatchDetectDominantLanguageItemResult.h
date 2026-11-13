/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DominantLanguage.h>
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
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectDominantLanguageItemResult">AWS
 * API Reference</a></p>
 */
class BatchDetectDominantLanguageItemResult {
 public:
  AWS_COMPREHEND_API BatchDetectDominantLanguageItemResult() = default;
  AWS_COMPREHEND_API BatchDetectDominantLanguageItemResult(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API BatchDetectDominantLanguageItemResult& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  inline BatchDetectDominantLanguageItemResult& WithIndex(int64_t value) {
    SetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
   * in the document.</p>
   */
  inline const Aws::Vector<DominantLanguage>& GetLanguages() const { return m_languages; }
  inline bool LanguagesHasBeenSet() const { return m_languagesHasBeenSet; }
  template <typename LanguagesT = Aws::Vector<DominantLanguage>>
  void SetLanguages(LanguagesT&& value) {
    m_languagesHasBeenSet = true;
    m_languages = std::forward<LanguagesT>(value);
  }
  template <typename LanguagesT = Aws::Vector<DominantLanguage>>
  BatchDetectDominantLanguageItemResult& WithLanguages(LanguagesT&& value) {
    SetLanguages(std::forward<LanguagesT>(value));
    return *this;
  }
  template <typename LanguagesT = DominantLanguage>
  BatchDetectDominantLanguageItemResult& AddLanguages(LanguagesT&& value) {
    m_languagesHasBeenSet = true;
    m_languages.emplace_back(std::forward<LanguagesT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_index{0};

  Aws::Vector<DominantLanguage> m_languages;
  bool m_indexHasBeenSet = false;
  bool m_languagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
