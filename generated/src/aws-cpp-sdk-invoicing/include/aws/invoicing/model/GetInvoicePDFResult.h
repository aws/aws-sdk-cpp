/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/InvoicePDF.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {
class GetInvoicePDFResult {
 public:
  AWS_INVOICING_API GetInvoicePDFResult() = default;
  AWS_INVOICING_API GetInvoicePDFResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_INVOICING_API GetInvoicePDFResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The invoice document and supplemental documents associated with the invoice.
   * </p>
   */
  inline const InvoicePDF& GetInvoicePDF() const { return m_invoicePDF; }
  template <typename InvoicePDFT = InvoicePDF>
  void SetInvoicePDF(InvoicePDFT&& value) {
    m_invoicePDFHasBeenSet = true;
    m_invoicePDF = std::forward<InvoicePDFT>(value);
  }
  template <typename InvoicePDFT = InvoicePDF>
  GetInvoicePDFResult& WithInvoicePDF(InvoicePDFT&& value) {
    SetInvoicePDF(std::forward<InvoicePDFT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetInvoicePDFResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  InvoicePDF m_invoicePDF;
  bool m_invoicePDFHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
