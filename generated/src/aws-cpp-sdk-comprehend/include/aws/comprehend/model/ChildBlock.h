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
 * <p>Nested block contained within a block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ChildBlock">AWS
 * API Reference</a></p>
 */
class ChildBlock {
 public:
  AWS_COMPREHEND_API ChildBlock() = default;
  AWS_COMPREHEND_API ChildBlock(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API ChildBlock& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Unique identifier for the child block.</p>
   */
  inline const Aws::String& GetChildBlockId() const { return m_childBlockId; }
  inline bool ChildBlockIdHasBeenSet() const { return m_childBlockIdHasBeenSet; }
  template <typename ChildBlockIdT = Aws::String>
  void SetChildBlockId(ChildBlockIdT&& value) {
    m_childBlockIdHasBeenSet = true;
    m_childBlockId = std::forward<ChildBlockIdT>(value);
  }
  template <typename ChildBlockIdT = Aws::String>
  ChildBlock& WithChildBlockId(ChildBlockIdT&& value) {
    SetChildBlockId(std::forward<ChildBlockIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Offset of the start of the child block within its parent block.</p>
   */
  inline int64_t GetBeginOffset() const { return m_beginOffset; }
  inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
  inline void SetBeginOffset(int64_t value) {
    m_beginOffsetHasBeenSet = true;
    m_beginOffset = value;
  }
  inline ChildBlock& WithBeginOffset(int64_t value) {
    SetBeginOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Offset of the end of the child block within its parent block.</p>
   */
  inline int64_t GetEndOffset() const { return m_endOffset; }
  inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
  inline void SetEndOffset(int64_t value) {
    m_endOffsetHasBeenSet = true;
    m_endOffset = value;
  }
  inline ChildBlock& WithEndOffset(int64_t value) {
    SetEndOffset(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_childBlockId;

  int64_t m_beginOffset{0};

  int64_t m_endOffset{0};
  bool m_childBlockIdHasBeenSet = false;
  bool m_beginOffsetHasBeenSet = false;
  bool m_endOffsetHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
