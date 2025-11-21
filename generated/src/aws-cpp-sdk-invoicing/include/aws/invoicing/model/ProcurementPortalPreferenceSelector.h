/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Specifies criteria for selecting which invoices should be processed using a
 * particular procurement portal preference.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ProcurementPortalPreferenceSelector">AWS
 * API Reference</a></p>
 */
class ProcurementPortalPreferenceSelector {
 public:
  AWS_INVOICING_API ProcurementPortalPreferenceSelector() = default;
  AWS_INVOICING_API ProcurementPortalPreferenceSelector(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API ProcurementPortalPreferenceSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of invoice unit identifiers to which this
   * preference applies. </p>
   */
  inline const Aws::Vector<Aws::String>& GetInvoiceUnitArns() const { return m_invoiceUnitArns; }
  inline bool InvoiceUnitArnsHasBeenSet() const { return m_invoiceUnitArnsHasBeenSet; }
  template <typename InvoiceUnitArnsT = Aws::Vector<Aws::String>>
  void SetInvoiceUnitArns(InvoiceUnitArnsT&& value) {
    m_invoiceUnitArnsHasBeenSet = true;
    m_invoiceUnitArns = std::forward<InvoiceUnitArnsT>(value);
  }
  template <typename InvoiceUnitArnsT = Aws::Vector<Aws::String>>
  ProcurementPortalPreferenceSelector& WithInvoiceUnitArns(InvoiceUnitArnsT&& value) {
    SetInvoiceUnitArns(std::forward<InvoiceUnitArnsT>(value));
    return *this;
  }
  template <typename InvoiceUnitArnsT = Aws::String>
  ProcurementPortalPreferenceSelector& AddInvoiceUnitArns(InvoiceUnitArnsT&& value) {
    m_invoiceUnitArnsHasBeenSet = true;
    m_invoiceUnitArns.emplace_back(std::forward<InvoiceUnitArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of seller of record IDs to which this preference applies. </p>
   */
  inline const Aws::Vector<Aws::String>& GetSellerOfRecords() const { return m_sellerOfRecords; }
  inline bool SellerOfRecordsHasBeenSet() const { return m_sellerOfRecordsHasBeenSet; }
  template <typename SellerOfRecordsT = Aws::Vector<Aws::String>>
  void SetSellerOfRecords(SellerOfRecordsT&& value) {
    m_sellerOfRecordsHasBeenSet = true;
    m_sellerOfRecords = std::forward<SellerOfRecordsT>(value);
  }
  template <typename SellerOfRecordsT = Aws::Vector<Aws::String>>
  ProcurementPortalPreferenceSelector& WithSellerOfRecords(SellerOfRecordsT&& value) {
    SetSellerOfRecords(std::forward<SellerOfRecordsT>(value));
    return *this;
  }
  template <typename SellerOfRecordsT = Aws::String>
  ProcurementPortalPreferenceSelector& AddSellerOfRecords(SellerOfRecordsT&& value) {
    m_sellerOfRecordsHasBeenSet = true;
    m_sellerOfRecords.emplace_back(std::forward<SellerOfRecordsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_invoiceUnitArns;
  bool m_invoiceUnitArnsHasBeenSet = false;

  Aws::Vector<Aws::String> m_sellerOfRecords;
  bool m_sellerOfRecordsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
