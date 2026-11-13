/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Comprehend {
namespace Model {

/**
 * <p>Array of the number of characters extracted from each page.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ExtractedCharactersListItem">AWS
 * API Reference</a></p>
 */
class ExtractedCharactersListItem {
 public:
  AWS_COMPREHEND_API ExtractedCharactersListItem() = default;
  AWS_COMPREHEND_API ExtractedCharactersListItem(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API ExtractedCharactersListItem& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Page number.</p>
   */
  inline int64_t GetPage() const { return m_page; }
  inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
  inline void SetPage(int64_t value) {
    m_pageHasBeenSet = true;
    m_page = value;
  }
  inline ExtractedCharactersListItem& WithPage(int64_t value) {
    SetPage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of characters extracted from each page.</p>
   */
  inline int64_t GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int64_t value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline ExtractedCharactersListItem& WithCount(int64_t value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_page{0};

  int64_t m_count{0};
  bool m_pageHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
