/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {

/**
 * <p>Supplemental document associated with the invoice.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/SupplementalDocument">AWS
 * API Reference</a></p>
 */
class SupplementalDocument {
 public:
  AWS_INVOICING_API SupplementalDocument() = default;
  AWS_INVOICING_API SupplementalDocument(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API SupplementalDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pre-signed URL to download invoice supplemental document.</p>
   */
  inline const Aws::String& GetDocumentUrl() const { return m_documentUrl; }
  inline bool DocumentUrlHasBeenSet() const { return m_documentUrlHasBeenSet; }
  template <typename DocumentUrlT = Aws::String>
  void SetDocumentUrl(DocumentUrlT&& value) {
    m_documentUrlHasBeenSet = true;
    m_documentUrl = std::forward<DocumentUrlT>(value);
  }
  template <typename DocumentUrlT = Aws::String>
  SupplementalDocument& WithDocumentUrl(DocumentUrlT&& value) {
    SetDocumentUrl(std::forward<DocumentUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pre-signed URL expiration date of invoice supplemental document.</p>
   */
  inline const Aws::Utils::DateTime& GetDocumentUrlExpirationDate() const { return m_documentUrlExpirationDate; }
  inline bool DocumentUrlExpirationDateHasBeenSet() const { return m_documentUrlExpirationDateHasBeenSet; }
  template <typename DocumentUrlExpirationDateT = Aws::Utils::DateTime>
  void SetDocumentUrlExpirationDate(DocumentUrlExpirationDateT&& value) {
    m_documentUrlExpirationDateHasBeenSet = true;
    m_documentUrlExpirationDate = std::forward<DocumentUrlExpirationDateT>(value);
  }
  template <typename DocumentUrlExpirationDateT = Aws::Utils::DateTime>
  SupplementalDocument& WithDocumentUrlExpirationDate(DocumentUrlExpirationDateT&& value) {
    SetDocumentUrlExpirationDate(std::forward<DocumentUrlExpirationDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_documentUrl;

  Aws::Utils::DateTime m_documentUrlExpirationDate{};
  bool m_documentUrlHasBeenSet = false;
  bool m_documentUrlExpirationDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
