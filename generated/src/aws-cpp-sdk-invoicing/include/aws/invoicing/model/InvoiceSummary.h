/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/BillType.h>
#include <aws/invoicing/model/BillingPeriod.h>
#include <aws/invoicing/model/EinvoiceDeliveryStatus.h>
#include <aws/invoicing/model/Entity.h>
#include <aws/invoicing/model/InvoiceCurrencyAmount.h>
#include <aws/invoicing/model/InvoiceFrequency.h>
#include <aws/invoicing/model/InvoiceType.h>
#include <aws/invoicing/model/ReceiverRole.h>
#include <aws/invoicing/model/TaxAuthorityStatus.h>

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
 * <p> The invoice that the API retrieved. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceSummary">AWS
 * API Reference</a></p>
 */
class InvoiceSummary {
 public:
  AWS_INVOICING_API InvoiceSummary() = default;
  AWS_INVOICING_API InvoiceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API InvoiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Web Services account ID. </p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  InvoiceSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The invoice ID. </p>
   */
  inline const Aws::String& GetInvoiceId() const { return m_invoiceId; }
  inline bool InvoiceIdHasBeenSet() const { return m_invoiceIdHasBeenSet; }
  template <typename InvoiceIdT = Aws::String>
  void SetInvoiceId(InvoiceIdT&& value) {
    m_invoiceIdHasBeenSet = true;
    m_invoiceId = std::forward<InvoiceIdT>(value);
  }
  template <typename InvoiceIdT = Aws::String>
  InvoiceSummary& WithInvoiceId(InvoiceIdT&& value) {
    SetInvoiceId(std::forward<InvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The issued date of the invoice. </p>
   */
  inline const Aws::Utils::DateTime& GetIssuedDate() const { return m_issuedDate; }
  inline bool IssuedDateHasBeenSet() const { return m_issuedDateHasBeenSet; }
  template <typename IssuedDateT = Aws::Utils::DateTime>
  void SetIssuedDate(IssuedDateT&& value) {
    m_issuedDateHasBeenSet = true;
    m_issuedDate = std::forward<IssuedDateT>(value);
  }
  template <typename IssuedDateT = Aws::Utils::DateTime>
  InvoiceSummary& WithIssuedDate(IssuedDateT&& value) {
    SetIssuedDate(std::forward<IssuedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The invoice due date. </p>
   */
  inline const Aws::Utils::DateTime& GetDueDate() const { return m_dueDate; }
  inline bool DueDateHasBeenSet() const { return m_dueDateHasBeenSet; }
  template <typename DueDateT = Aws::Utils::DateTime>
  void SetDueDate(DueDateT&& value) {
    m_dueDateHasBeenSet = true;
    m_dueDate = std::forward<DueDateT>(value);
  }
  template <typename DueDateT = Aws::Utils::DateTime>
  InvoiceSummary& WithDueDate(DueDateT&& value) {
    SetDueDate(std::forward<DueDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of Amazon Web Services account IDs that are the bill source of the
   * invoice. Currently, only a single bill source account is returned.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBillSourceAccounts() const { return m_billSourceAccounts; }
  inline bool BillSourceAccountsHasBeenSet() const { return m_billSourceAccountsHasBeenSet; }
  template <typename BillSourceAccountsT = Aws::Vector<Aws::String>>
  void SetBillSourceAccounts(BillSourceAccountsT&& value) {
    m_billSourceAccountsHasBeenSet = true;
    m_billSourceAccounts = std::forward<BillSourceAccountsT>(value);
  }
  template <typename BillSourceAccountsT = Aws::Vector<Aws::String>>
  InvoiceSummary& WithBillSourceAccounts(BillSourceAccountsT&& value) {
    SetBillSourceAccounts(std::forward<BillSourceAccountsT>(value));
    return *this;
  }
  template <typename BillSourceAccountsT = Aws::String>
  InvoiceSummary& AddBillSourceAccounts(BillSourceAccountsT&& value) {
    m_billSourceAccountsHasBeenSet = true;
    m_billSourceAccounts.emplace_back(std::forward<BillSourceAccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The total number of accounts that are the bill source of the invoice. </p>
   */
  inline int GetBillSourceAccountsTotalCount() const { return m_billSourceAccountsTotalCount; }
  inline bool BillSourceAccountsTotalCountHasBeenSet() const { return m_billSourceAccountsTotalCountHasBeenSet; }
  inline void SetBillSourceAccountsTotalCount(int value) {
    m_billSourceAccountsTotalCountHasBeenSet = true;
    m_billSourceAccountsTotalCount = value;
  }
  inline InvoiceSummary& WithBillSourceAccountsTotalCount(int value) {
    SetBillSourceAccountsTotalCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role of the invoice receiver.</p>
   */
  inline ReceiverRole GetReceiverRole() const { return m_receiverRole; }
  inline bool ReceiverRoleHasBeenSet() const { return m_receiverRoleHasBeenSet; }
  inline void SetReceiverRole(ReceiverRole value) {
    m_receiverRoleHasBeenSet = true;
    m_receiverRole = value;
  }
  inline InvoiceSummary& WithReceiverRole(ReceiverRole value) {
    SetReceiverRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization name providing Amazon Web Services services.</p>
   */
  inline const Entity& GetEntity() const { return m_entity; }
  inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
  template <typename EntityT = Entity>
  void SetEntity(EntityT&& value) {
    m_entityHasBeenSet = true;
    m_entity = std::forward<EntityT>(value);
  }
  template <typename EntityT = Entity>
  InvoiceSummary& WithEntity(EntityT&& value) {
    SetEntity(std::forward<EntityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The billing period of the invoice-related document. </p>
   */
  inline const BillingPeriod& GetBillingPeriod() const { return m_billingPeriod; }
  inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
  template <typename BillingPeriodT = BillingPeriod>
  void SetBillingPeriod(BillingPeriodT&& value) {
    m_billingPeriodHasBeenSet = true;
    m_billingPeriod = std::forward<BillingPeriodT>(value);
  }
  template <typename BillingPeriodT = BillingPeriod>
  InvoiceSummary& WithBillingPeriod(BillingPeriodT&& value) {
    SetBillingPeriod(std::forward<BillingPeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The frequency of the invoice. </p>
   */
  inline InvoiceFrequency GetInvoiceFrequency() const { return m_invoiceFrequency; }
  inline bool InvoiceFrequencyHasBeenSet() const { return m_invoiceFrequencyHasBeenSet; }
  inline void SetInvoiceFrequency(InvoiceFrequency value) {
    m_invoiceFrequencyHasBeenSet = true;
    m_invoiceFrequency = value;
  }
  inline InvoiceSummary& WithInvoiceFrequency(InvoiceFrequency value) {
    SetInvoiceFrequency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of the bill. </p>
   */
  inline BillType GetBillType() const { return m_billType; }
  inline bool BillTypeHasBeenSet() const { return m_billTypeHasBeenSet; }
  inline void SetBillType(BillType value) {
    m_billTypeHasBeenSet = true;
    m_billType = value;
  }
  inline InvoiceSummary& WithBillType(BillType value) {
    SetBillType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of invoice. </p>
   */
  inline InvoiceType GetInvoiceType() const { return m_invoiceType; }
  inline bool InvoiceTypeHasBeenSet() const { return m_invoiceTypeHasBeenSet; }
  inline void SetInvoiceType(InvoiceType value) {
    m_invoiceTypeHasBeenSet = true;
    m_invoiceType = value;
  }
  inline InvoiceSummary& WithInvoiceType(InvoiceType value) {
    SetInvoiceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The commercial invoice ID. This is only applicable for tax invoices and
   * identifies the associated commercial invoice. </p>
   */
  inline const Aws::String& GetCommercialInvoiceId() const { return m_commercialInvoiceId; }
  inline bool CommercialInvoiceIdHasBeenSet() const { return m_commercialInvoiceIdHasBeenSet; }
  template <typename CommercialInvoiceIdT = Aws::String>
  void SetCommercialInvoiceId(CommercialInvoiceIdT&& value) {
    m_commercialInvoiceIdHasBeenSet = true;
    m_commercialInvoiceId = std::forward<CommercialInvoiceIdT>(value);
  }
  template <typename CommercialInvoiceIdT = Aws::String>
  InvoiceSummary& WithCommercialInvoiceId(CommercialInvoiceIdT&& value) {
    SetCommercialInvoiceId(std::forward<CommercialInvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial or original invoice ID. </p>
   */
  inline const Aws::String& GetOriginalInvoiceId() const { return m_originalInvoiceId; }
  inline bool OriginalInvoiceIdHasBeenSet() const { return m_originalInvoiceIdHasBeenSet; }
  template <typename OriginalInvoiceIdT = Aws::String>
  void SetOriginalInvoiceId(OriginalInvoiceIdT&& value) {
    m_originalInvoiceIdHasBeenSet = true;
    m_originalInvoiceId = std::forward<OriginalInvoiceIdT>(value);
  }
  template <typename OriginalInvoiceIdT = Aws::String>
  InvoiceSummary& WithOriginalInvoiceId(OriginalInvoiceIdT&& value) {
    SetOriginalInvoiceId(std::forward<OriginalInvoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The purchase order number associated to the invoice.</p>
   */
  inline const Aws::String& GetPurchaseOrderNumber() const { return m_purchaseOrderNumber; }
  inline bool PurchaseOrderNumberHasBeenSet() const { return m_purchaseOrderNumberHasBeenSet; }
  template <typename PurchaseOrderNumberT = Aws::String>
  void SetPurchaseOrderNumber(PurchaseOrderNumberT&& value) {
    m_purchaseOrderNumberHasBeenSet = true;
    m_purchaseOrderNumber = std::forward<PurchaseOrderNumberT>(value);
  }
  template <typename PurchaseOrderNumberT = Aws::String>
  InvoiceSummary& WithPurchaseOrderNumber(PurchaseOrderNumberT&& value) {
    SetPurchaseOrderNumber(std::forward<PurchaseOrderNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The e-invoice delivery status. </p>
   */
  inline EinvoiceDeliveryStatus GetEinvoiceDeliveryStatus() const { return m_einvoiceDeliveryStatus; }
  inline bool EinvoiceDeliveryStatusHasBeenSet() const { return m_einvoiceDeliveryStatusHasBeenSet; }
  inline void SetEinvoiceDeliveryStatus(EinvoiceDeliveryStatus value) {
    m_einvoiceDeliveryStatusHasBeenSet = true;
    m_einvoiceDeliveryStatus = value;
  }
  inline InvoiceSummary& WithEinvoiceDeliveryStatus(EinvoiceDeliveryStatus value) {
    SetEinvoiceDeliveryStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of an invoice as reported to the tax authority. This
   * captures scenarios where an invoice may be cancelled after issuance. </p>
   */
  inline TaxAuthorityStatus GetTaxAuthorityStatus() const { return m_taxAuthorityStatus; }
  inline bool TaxAuthorityStatusHasBeenSet() const { return m_taxAuthorityStatusHasBeenSet; }
  inline void SetTaxAuthorityStatus(TaxAuthorityStatus value) {
    m_taxAuthorityStatusHasBeenSet = true;
    m_taxAuthorityStatus = value;
  }
  inline InvoiceSummary& WithTaxAuthorityStatus(TaxAuthorityStatus value) {
    SetTaxAuthorityStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The summary with the product and service currency. </p>
   */
  inline const InvoiceCurrencyAmount& GetBaseCurrencyAmount() const { return m_baseCurrencyAmount; }
  inline bool BaseCurrencyAmountHasBeenSet() const { return m_baseCurrencyAmountHasBeenSet; }
  template <typename BaseCurrencyAmountT = InvoiceCurrencyAmount>
  void SetBaseCurrencyAmount(BaseCurrencyAmountT&& value) {
    m_baseCurrencyAmountHasBeenSet = true;
    m_baseCurrencyAmount = std::forward<BaseCurrencyAmountT>(value);
  }
  template <typename BaseCurrencyAmountT = InvoiceCurrencyAmount>
  InvoiceSummary& WithBaseCurrencyAmount(BaseCurrencyAmountT&& value) {
    SetBaseCurrencyAmount(std::forward<BaseCurrencyAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The summary with the tax currency. </p>
   */
  inline const InvoiceCurrencyAmount& GetTaxCurrencyAmount() const { return m_taxCurrencyAmount; }
  inline bool TaxCurrencyAmountHasBeenSet() const { return m_taxCurrencyAmountHasBeenSet; }
  template <typename TaxCurrencyAmountT = InvoiceCurrencyAmount>
  void SetTaxCurrencyAmount(TaxCurrencyAmountT&& value) {
    m_taxCurrencyAmountHasBeenSet = true;
    m_taxCurrencyAmount = std::forward<TaxCurrencyAmountT>(value);
  }
  template <typename TaxCurrencyAmountT = InvoiceCurrencyAmount>
  InvoiceSummary& WithTaxCurrencyAmount(TaxCurrencyAmountT&& value) {
    SetTaxCurrencyAmount(std::forward<TaxCurrencyAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The summary with the customer configured currency. </p>
   */
  inline const InvoiceCurrencyAmount& GetPaymentCurrencyAmount() const { return m_paymentCurrencyAmount; }
  inline bool PaymentCurrencyAmountHasBeenSet() const { return m_paymentCurrencyAmountHasBeenSet; }
  template <typename PaymentCurrencyAmountT = InvoiceCurrencyAmount>
  void SetPaymentCurrencyAmount(PaymentCurrencyAmountT&& value) {
    m_paymentCurrencyAmountHasBeenSet = true;
    m_paymentCurrencyAmount = std::forward<PaymentCurrencyAmountT>(value);
  }
  template <typename PaymentCurrencyAmountT = InvoiceCurrencyAmount>
  InvoiceSummary& WithPaymentCurrencyAmount(PaymentCurrencyAmountT&& value) {
    SetPaymentCurrencyAmount(std::forward<PaymentCurrencyAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_invoiceId;

  Aws::Utils::DateTime m_issuedDate{};

  Aws::Utils::DateTime m_dueDate{};

  Aws::Vector<Aws::String> m_billSourceAccounts;

  int m_billSourceAccountsTotalCount{0};

  ReceiverRole m_receiverRole{ReceiverRole::NOT_SET};

  Entity m_entity;

  BillingPeriod m_billingPeriod;

  InvoiceFrequency m_invoiceFrequency{InvoiceFrequency::NOT_SET};

  BillType m_billType{BillType::NOT_SET};

  InvoiceType m_invoiceType{InvoiceType::NOT_SET};

  Aws::String m_commercialInvoiceId;

  Aws::String m_originalInvoiceId;

  Aws::String m_purchaseOrderNumber;

  EinvoiceDeliveryStatus m_einvoiceDeliveryStatus{EinvoiceDeliveryStatus::NOT_SET};

  TaxAuthorityStatus m_taxAuthorityStatus{TaxAuthorityStatus::NOT_SET};

  InvoiceCurrencyAmount m_baseCurrencyAmount;

  InvoiceCurrencyAmount m_taxCurrencyAmount;

  InvoiceCurrencyAmount m_paymentCurrencyAmount;
  bool m_accountIdHasBeenSet = false;
  bool m_invoiceIdHasBeenSet = false;
  bool m_issuedDateHasBeenSet = false;
  bool m_dueDateHasBeenSet = false;
  bool m_billSourceAccountsHasBeenSet = false;
  bool m_billSourceAccountsTotalCountHasBeenSet = false;
  bool m_receiverRoleHasBeenSet = false;
  bool m_entityHasBeenSet = false;
  bool m_billingPeriodHasBeenSet = false;
  bool m_invoiceFrequencyHasBeenSet = false;
  bool m_billTypeHasBeenSet = false;
  bool m_invoiceTypeHasBeenSet = false;
  bool m_commercialInvoiceIdHasBeenSet = false;
  bool m_originalInvoiceIdHasBeenSet = false;
  bool m_purchaseOrderNumberHasBeenSet = false;
  bool m_einvoiceDeliveryStatusHasBeenSet = false;
  bool m_taxAuthorityStatusHasBeenSet = false;
  bool m_baseCurrencyAmountHasBeenSet = false;
  bool m_taxCurrencyAmountHasBeenSet = false;
  bool m_paymentCurrencyAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
