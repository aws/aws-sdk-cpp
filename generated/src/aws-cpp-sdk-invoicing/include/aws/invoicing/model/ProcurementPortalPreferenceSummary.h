/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/BuyerDomain.h>
#include <aws/invoicing/model/ProcurementPortalName.h>
#include <aws/invoicing/model/ProcurementPortalPreferenceSelector.h>
#include <aws/invoicing/model/ProcurementPortalPreferenceStatus.h>
#include <aws/invoicing/model/SupplierDomain.h>

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
 * <p>Provides a summary of a procurement portal preference, including key
 * identifiers and status information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ProcurementPortalPreferenceSummary">AWS
 * API Reference</a></p>
 */
class ProcurementPortalPreferenceSummary {
 public:
  AWS_INVOICING_API ProcurementPortalPreferenceSummary() = default;
  AWS_INVOICING_API ProcurementPortalPreferenceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API ProcurementPortalPreferenceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with this procurement portal
   * preference summary.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  ProcurementPortalPreferenceSummary& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the procurement portal preference.</p>
   */
  inline const Aws::String& GetProcurementPortalPreferenceArn() const { return m_procurementPortalPreferenceArn; }
  inline bool ProcurementPortalPreferenceArnHasBeenSet() const { return m_procurementPortalPreferenceArnHasBeenSet; }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  void SetProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    m_procurementPortalPreferenceArnHasBeenSet = true;
    m_procurementPortalPreferenceArn = std::forward<ProcurementPortalPreferenceArnT>(value);
  }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  ProcurementPortalPreferenceSummary& WithProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    SetProcurementPortalPreferenceArn(std::forward<ProcurementPortalPreferenceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the procurement portal.</p>
   */
  inline ProcurementPortalName GetProcurementPortalName() const { return m_procurementPortalName; }
  inline bool ProcurementPortalNameHasBeenSet() const { return m_procurementPortalNameHasBeenSet; }
  inline void SetProcurementPortalName(ProcurementPortalName value) {
    m_procurementPortalNameHasBeenSet = true;
    m_procurementPortalName = value;
  }
  inline ProcurementPortalPreferenceSummary& WithProcurementPortalName(ProcurementPortalName value) {
    SetProcurementPortalName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain identifier for the buyer in the procurement portal.</p>
   */
  inline BuyerDomain GetBuyerDomain() const { return m_buyerDomain; }
  inline bool BuyerDomainHasBeenSet() const { return m_buyerDomainHasBeenSet; }
  inline void SetBuyerDomain(BuyerDomain value) {
    m_buyerDomainHasBeenSet = true;
    m_buyerDomain = value;
  }
  inline ProcurementPortalPreferenceSummary& WithBuyerDomain(BuyerDomain value) {
    SetBuyerDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the buyer in the procurement portal.</p>
   */
  inline const Aws::String& GetBuyerIdentifier() const { return m_buyerIdentifier; }
  inline bool BuyerIdentifierHasBeenSet() const { return m_buyerIdentifierHasBeenSet; }
  template <typename BuyerIdentifierT = Aws::String>
  void SetBuyerIdentifier(BuyerIdentifierT&& value) {
    m_buyerIdentifierHasBeenSet = true;
    m_buyerIdentifier = std::forward<BuyerIdentifierT>(value);
  }
  template <typename BuyerIdentifierT = Aws::String>
  ProcurementPortalPreferenceSummary& WithBuyerIdentifier(BuyerIdentifierT&& value) {
    SetBuyerIdentifier(std::forward<BuyerIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain identifier for the supplier in the procurement portal.</p>
   */
  inline SupplierDomain GetSupplierDomain() const { return m_supplierDomain; }
  inline bool SupplierDomainHasBeenSet() const { return m_supplierDomainHasBeenSet; }
  inline void SetSupplierDomain(SupplierDomain value) {
    m_supplierDomainHasBeenSet = true;
    m_supplierDomain = value;
  }
  inline ProcurementPortalPreferenceSummary& WithSupplierDomain(SupplierDomain value) {
    SetSupplierDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the supplier in the procurement portal.</p>
   */
  inline const Aws::String& GetSupplierIdentifier() const { return m_supplierIdentifier; }
  inline bool SupplierIdentifierHasBeenSet() const { return m_supplierIdentifierHasBeenSet; }
  template <typename SupplierIdentifierT = Aws::String>
  void SetSupplierIdentifier(SupplierIdentifierT&& value) {
    m_supplierIdentifierHasBeenSet = true;
    m_supplierIdentifier = std::forward<SupplierIdentifierT>(value);
  }
  template <typename SupplierIdentifierT = Aws::String>
  ProcurementPortalPreferenceSummary& WithSupplierIdentifier(SupplierIdentifierT&& value) {
    SetSupplierIdentifier(std::forward<SupplierIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ProcurementPortalPreferenceSelector& GetSelector() const { return m_selector; }
  inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }
  template <typename SelectorT = ProcurementPortalPreferenceSelector>
  void SetSelector(SelectorT&& value) {
    m_selectorHasBeenSet = true;
    m_selector = std::forward<SelectorT>(value);
  }
  template <typename SelectorT = ProcurementPortalPreferenceSelector>
  ProcurementPortalPreferenceSummary& WithSelector(SelectorT&& value) {
    SetSelector(std::forward<SelectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether e-invoice delivery is enabled for this procurement portal
   * preference.</p>
   */
  inline bool GetEinvoiceDeliveryEnabled() const { return m_einvoiceDeliveryEnabled; }
  inline bool EinvoiceDeliveryEnabledHasBeenSet() const { return m_einvoiceDeliveryEnabledHasBeenSet; }
  inline void SetEinvoiceDeliveryEnabled(bool value) {
    m_einvoiceDeliveryEnabledHasBeenSet = true;
    m_einvoiceDeliveryEnabled = value;
  }
  inline ProcurementPortalPreferenceSummary& WithEinvoiceDeliveryEnabled(bool value) {
    SetEinvoiceDeliveryEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether purchase order retrieval is enabled for this procurement
   * portal preference.</p>
   */
  inline bool GetPurchaseOrderRetrievalEnabled() const { return m_purchaseOrderRetrievalEnabled; }
  inline bool PurchaseOrderRetrievalEnabledHasBeenSet() const { return m_purchaseOrderRetrievalEnabledHasBeenSet; }
  inline void SetPurchaseOrderRetrievalEnabled(bool value) {
    m_purchaseOrderRetrievalEnabledHasBeenSet = true;
    m_purchaseOrderRetrievalEnabled = value;
  }
  inline ProcurementPortalPreferenceSummary& WithPurchaseOrderRetrievalEnabled(bool value) {
    SetPurchaseOrderRetrievalEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the e-invoice delivery preference in this summary.</p>
   */
  inline ProcurementPortalPreferenceStatus GetEinvoiceDeliveryPreferenceStatus() const { return m_einvoiceDeliveryPreferenceStatus; }
  inline bool EinvoiceDeliveryPreferenceStatusHasBeenSet() const { return m_einvoiceDeliveryPreferenceStatusHasBeenSet; }
  inline void SetEinvoiceDeliveryPreferenceStatus(ProcurementPortalPreferenceStatus value) {
    m_einvoiceDeliveryPreferenceStatusHasBeenSet = true;
    m_einvoiceDeliveryPreferenceStatus = value;
  }
  inline ProcurementPortalPreferenceSummary& WithEinvoiceDeliveryPreferenceStatus(ProcurementPortalPreferenceStatus value) {
    SetEinvoiceDeliveryPreferenceStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current e-invoice delivery preference status in this
   * summary.</p>
   */
  inline const Aws::String& GetEinvoiceDeliveryPreferenceStatusReason() const { return m_einvoiceDeliveryPreferenceStatusReason; }
  inline bool EinvoiceDeliveryPreferenceStatusReasonHasBeenSet() const { return m_einvoiceDeliveryPreferenceStatusReasonHasBeenSet; }
  template <typename EinvoiceDeliveryPreferenceStatusReasonT = Aws::String>
  void SetEinvoiceDeliveryPreferenceStatusReason(EinvoiceDeliveryPreferenceStatusReasonT&& value) {
    m_einvoiceDeliveryPreferenceStatusReasonHasBeenSet = true;
    m_einvoiceDeliveryPreferenceStatusReason = std::forward<EinvoiceDeliveryPreferenceStatusReasonT>(value);
  }
  template <typename EinvoiceDeliveryPreferenceStatusReasonT = Aws::String>
  ProcurementPortalPreferenceSummary& WithEinvoiceDeliveryPreferenceStatusReason(EinvoiceDeliveryPreferenceStatusReasonT&& value) {
    SetEinvoiceDeliveryPreferenceStatusReason(std::forward<EinvoiceDeliveryPreferenceStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the purchase order retrieval preference in this
   * summary.</p>
   */
  inline ProcurementPortalPreferenceStatus GetPurchaseOrderRetrievalPreferenceStatus() const {
    return m_purchaseOrderRetrievalPreferenceStatus;
  }
  inline bool PurchaseOrderRetrievalPreferenceStatusHasBeenSet() const { return m_purchaseOrderRetrievalPreferenceStatusHasBeenSet; }
  inline void SetPurchaseOrderRetrievalPreferenceStatus(ProcurementPortalPreferenceStatus value) {
    m_purchaseOrderRetrievalPreferenceStatusHasBeenSet = true;
    m_purchaseOrderRetrievalPreferenceStatus = value;
  }
  inline ProcurementPortalPreferenceSummary& WithPurchaseOrderRetrievalPreferenceStatus(ProcurementPortalPreferenceStatus value) {
    SetPurchaseOrderRetrievalPreferenceStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current purchase order retrieval preference status in this
   * summary.</p>
   */
  inline const Aws::String& GetPurchaseOrderRetrievalPreferenceStatusReason() const {
    return m_purchaseOrderRetrievalPreferenceStatusReason;
  }
  inline bool PurchaseOrderRetrievalPreferenceStatusReasonHasBeenSet() const {
    return m_purchaseOrderRetrievalPreferenceStatusReasonHasBeenSet;
  }
  template <typename PurchaseOrderRetrievalPreferenceStatusReasonT = Aws::String>
  void SetPurchaseOrderRetrievalPreferenceStatusReason(PurchaseOrderRetrievalPreferenceStatusReasonT&& value) {
    m_purchaseOrderRetrievalPreferenceStatusReasonHasBeenSet = true;
    m_purchaseOrderRetrievalPreferenceStatusReason = std::forward<PurchaseOrderRetrievalPreferenceStatusReasonT>(value);
  }
  template <typename PurchaseOrderRetrievalPreferenceStatusReasonT = Aws::String>
  ProcurementPortalPreferenceSummary& WithPurchaseOrderRetrievalPreferenceStatusReason(
      PurchaseOrderRetrievalPreferenceStatusReasonT&& value) {
    SetPurchaseOrderRetrievalPreferenceStatusReason(std::forward<PurchaseOrderRetrievalPreferenceStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the procurement portal preference configuration in this
   * summary.</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline ProcurementPortalPreferenceSummary& WithVersion(long long value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the procurement portal preference was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
  inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
  template <typename CreateDateT = Aws::Utils::DateTime>
  void SetCreateDate(CreateDateT&& value) {
    m_createDateHasBeenSet = true;
    m_createDate = std::forward<CreateDateT>(value);
  }
  template <typename CreateDateT = Aws::Utils::DateTime>
  ProcurementPortalPreferenceSummary& WithCreateDate(CreateDateT&& value) {
    SetCreateDate(std::forward<CreateDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the procurement portal preference was last
   * updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdateDate() const { return m_lastUpdateDate; }
  inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }
  template <typename LastUpdateDateT = Aws::Utils::DateTime>
  void SetLastUpdateDate(LastUpdateDateT&& value) {
    m_lastUpdateDateHasBeenSet = true;
    m_lastUpdateDate = std::forward<LastUpdateDateT>(value);
  }
  template <typename LastUpdateDateT = Aws::Utils::DateTime>
  ProcurementPortalPreferenceSummary& WithLastUpdateDate(LastUpdateDateT&& value) {
    SetLastUpdateDate(std::forward<LastUpdateDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;
  bool m_awsAccountIdHasBeenSet = false;

  Aws::String m_procurementPortalPreferenceArn;
  bool m_procurementPortalPreferenceArnHasBeenSet = false;

  ProcurementPortalName m_procurementPortalName{ProcurementPortalName::NOT_SET};
  bool m_procurementPortalNameHasBeenSet = false;

  BuyerDomain m_buyerDomain{BuyerDomain::NOT_SET};
  bool m_buyerDomainHasBeenSet = false;

  Aws::String m_buyerIdentifier;
  bool m_buyerIdentifierHasBeenSet = false;

  SupplierDomain m_supplierDomain{SupplierDomain::NOT_SET};
  bool m_supplierDomainHasBeenSet = false;

  Aws::String m_supplierIdentifier;
  bool m_supplierIdentifierHasBeenSet = false;

  ProcurementPortalPreferenceSelector m_selector;
  bool m_selectorHasBeenSet = false;

  bool m_einvoiceDeliveryEnabled{false};
  bool m_einvoiceDeliveryEnabledHasBeenSet = false;

  bool m_purchaseOrderRetrievalEnabled{false};
  bool m_purchaseOrderRetrievalEnabledHasBeenSet = false;

  ProcurementPortalPreferenceStatus m_einvoiceDeliveryPreferenceStatus{ProcurementPortalPreferenceStatus::NOT_SET};
  bool m_einvoiceDeliveryPreferenceStatusHasBeenSet = false;

  Aws::String m_einvoiceDeliveryPreferenceStatusReason;
  bool m_einvoiceDeliveryPreferenceStatusReasonHasBeenSet = false;

  ProcurementPortalPreferenceStatus m_purchaseOrderRetrievalPreferenceStatus{ProcurementPortalPreferenceStatus::NOT_SET};
  bool m_purchaseOrderRetrievalPreferenceStatusHasBeenSet = false;

  Aws::String m_purchaseOrderRetrievalPreferenceStatusReason;
  bool m_purchaseOrderRetrievalPreferenceStatusReasonHasBeenSet = false;

  long long m_version{0};
  bool m_versionHasBeenSet = false;

  Aws::Utils::DateTime m_createDate{};
  bool m_createDateHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdateDate{};
  bool m_lastUpdateDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
