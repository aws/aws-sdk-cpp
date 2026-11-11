/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DocumentType.h>
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
 * <p>Document type for each page in the document.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentTypeListItem">AWS
 * API Reference</a></p>
 */
class DocumentTypeListItem {
 public:
  AWS_COMPREHEND_API DocumentTypeListItem() = default;
  AWS_COMPREHEND_API DocumentTypeListItem(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API DocumentTypeListItem& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  inline DocumentTypeListItem& WithPage(int64_t value) {
    SetPage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Document type.</p>
   */
  inline DocumentType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(DocumentType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DocumentTypeListItem& WithType(DocumentType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_page{0};

  DocumentType m_type{DocumentType::NOT_SET};
  bool m_pageHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
