/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/PageBasedWarningCode.h>
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
 * <p>The system identified one of the following warnings while processing the
 * input document:</p> <ul> <li> <p>The document to classify is plain text, but the
 * classifier is a native document model.</p> </li> <li> <p>The document to
 * classify is semi-structured, but the classifier is a plain-text model.</p> </li>
 * </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/WarningsListItem">AWS
 * API Reference</a></p>
 */
class WarningsListItem {
 public:
  AWS_COMPREHEND_API WarningsListItem() = default;
  AWS_COMPREHEND_API WarningsListItem(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API WarningsListItem& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Page number in the input document.</p>
   */
  inline int64_t GetPage() const { return m_page; }
  inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
  inline void SetPage(int64_t value) {
    m_pageHasBeenSet = true;
    m_page = value;
  }
  inline WarningsListItem& WithPage(int64_t value) {
    SetPage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of warning.</p>
   */
  inline PageBasedWarningCode GetWarnCode() const { return m_warnCode; }
  inline bool WarnCodeHasBeenSet() const { return m_warnCodeHasBeenSet; }
  inline void SetWarnCode(PageBasedWarningCode value) {
    m_warnCodeHasBeenSet = true;
    m_warnCode = value;
  }
  inline WarningsListItem& WithWarnCode(PageBasedWarningCode value) {
    SetWarnCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Text message associated with the warning.</p>
   */
  inline const Aws::String& GetWarnMessage() const { return m_warnMessage; }
  inline bool WarnMessageHasBeenSet() const { return m_warnMessageHasBeenSet; }
  template <typename WarnMessageT = Aws::String>
  void SetWarnMessage(WarnMessageT&& value) {
    m_warnMessageHasBeenSet = true;
    m_warnMessage = std::forward<WarnMessageT>(value);
  }
  template <typename WarnMessageT = Aws::String>
  WarningsListItem& WithWarnMessage(WarnMessageT&& value) {
    SetWarnMessage(std::forward<WarnMessageT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_page{0};

  PageBasedWarningCode m_warnCode{PageBasedWarningCode::NOT_SET};

  Aws::String m_warnMessage;
  bool m_pageHasBeenSet = false;
  bool m_warnCodeHasBeenSet = false;
  bool m_warnMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
