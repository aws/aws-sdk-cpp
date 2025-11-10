/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/SupplementalDocument.h>

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
 * <p> Invoice document data. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoicePDF">AWS
 * API Reference</a></p>
 */
class InvoicePDF {
 public:
  AWS_INVOICING_API InvoicePDF() = default;
  AWS_INVOICING_API InvoicePDF(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API InvoicePDF& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Your unique invoice ID. </p>
   */
  inline const Aws::String& GetInvoiceId() const { return m_invoiceId; }
  inline bool InvoiceIdHasBeenSet() const { return m_invoiceIdHasBeenSet; }
  template <typename InvoiceIdT = Aws::String>
  void SetInvoiceId(InvoiceIdT&& value) {
    m_invoiceIdHasBeenSet = true;
    m_invoiceId = std::forward<InvoiceIdT>(value);
  }
  template <typename InvoiceIdT = Aws::String>
  InvoicePDF& WithInvoiceId(InvoiceIdT&& value) {
    SetInvoiceId(std::forward<InvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pre-signed URL to download the invoice document. </p>
   */
  inline const Aws::String& GetDocumentUrl() const { return m_documentUrl; }
  inline bool DocumentUrlHasBeenSet() const { return m_documentUrlHasBeenSet; }
  template <typename DocumentUrlT = Aws::String>
  void SetDocumentUrl(DocumentUrlT&& value) {
    m_documentUrlHasBeenSet = true;
    m_documentUrl = std::forward<DocumentUrlT>(value);
  }
  template <typename DocumentUrlT = Aws::String>
  InvoicePDF& WithDocumentUrl(DocumentUrlT&& value) {
    SetDocumentUrl(std::forward<DocumentUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pre-signed URL expiration date of the invoice document.</p>
   */
  inline const Aws::Utils::DateTime& GetDocumentUrlExpirationDate() const { return m_documentUrlExpirationDate; }
  inline bool DocumentUrlExpirationDateHasBeenSet() const { return m_documentUrlExpirationDateHasBeenSet; }
  template <typename DocumentUrlExpirationDateT = Aws::Utils::DateTime>
  void SetDocumentUrlExpirationDate(DocumentUrlExpirationDateT&& value) {
    m_documentUrlExpirationDateHasBeenSet = true;
    m_documentUrlExpirationDate = std::forward<DocumentUrlExpirationDateT>(value);
  }
  template <typename DocumentUrlExpirationDateT = Aws::Utils::DateTime>
  InvoicePDF& WithDocumentUrlExpirationDate(DocumentUrlExpirationDateT&& value) {
    SetDocumentUrlExpirationDate(std::forward<DocumentUrlExpirationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of supplemental documents associated with the invoice.</p>
   */
  inline const Aws::Vector<SupplementalDocument>& GetSupplementalDocuments() const { return m_supplementalDocuments; }
  inline bool SupplementalDocumentsHasBeenSet() const { return m_supplementalDocumentsHasBeenSet; }
  template <typename SupplementalDocumentsT = Aws::Vector<SupplementalDocument>>
  void SetSupplementalDocuments(SupplementalDocumentsT&& value) {
    m_supplementalDocumentsHasBeenSet = true;
    m_supplementalDocuments = std::forward<SupplementalDocumentsT>(value);
  }
  template <typename SupplementalDocumentsT = Aws::Vector<SupplementalDocument>>
  InvoicePDF& WithSupplementalDocuments(SupplementalDocumentsT&& value) {
    SetSupplementalDocuments(std::forward<SupplementalDocumentsT>(value));
    return *this;
  }
  template <typename SupplementalDocumentsT = SupplementalDocument>
  InvoicePDF& AddSupplementalDocuments(SupplementalDocumentsT&& value) {
    m_supplementalDocumentsHasBeenSet = true;
    m_supplementalDocuments.emplace_back(std::forward<SupplementalDocumentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_invoiceId;
  bool m_invoiceIdHasBeenSet = false;

  Aws::String m_documentUrl;
  bool m_documentUrlHasBeenSet = false;

  Aws::Utils::DateTime m_documentUrlExpirationDate{};
  bool m_documentUrlExpirationDateHasBeenSet = false;

  Aws::Vector<SupplementalDocument> m_supplementalDocuments;
  bool m_supplementalDocumentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
