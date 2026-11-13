/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Describes a key noun phrase.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/KeyPhrase">AWS
 * API Reference</a></p>
 */
class KeyPhrase {
 public:
  AWS_COMPREHEND_API KeyPhrase() = default;
  AWS_COMPREHEND_API KeyPhrase(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API KeyPhrase& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
   * detection.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline KeyPhrase& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text of a key noun phrase.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  KeyPhrase& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The zero-based offset from the beginning of the source text to the first
   * character in the key phrase.</p>
   */
  inline int64_t GetBeginOffset() const { return m_beginOffset; }
  inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
  inline void SetBeginOffset(int64_t value) {
    m_beginOffsetHasBeenSet = true;
    m_beginOffset = value;
  }
  inline KeyPhrase& WithBeginOffset(int64_t value) {
    SetBeginOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The zero-based offset from the beginning of the source text to the last
   * character in the key phrase.</p>
   */
  inline int64_t GetEndOffset() const { return m_endOffset; }
  inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
  inline void SetEndOffset(int64_t value) {
    m_endOffsetHasBeenSet = true;
    m_endOffset = value;
  }
  inline KeyPhrase& WithEndOffset(int64_t value) {
    SetEndOffset(value);
    return *this;
  }
  ///@}
 private:
  double m_score{0.0};

  Aws::String m_text;

  int64_t m_beginOffset{0};

  int64_t m_endOffset{0};
  bool m_scoreHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_beginOffsetHasBeenSet = false;
  bool m_endOffsetHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
