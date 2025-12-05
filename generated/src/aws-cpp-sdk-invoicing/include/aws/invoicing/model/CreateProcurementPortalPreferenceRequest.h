/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/BuyerDomain.h>
#include <aws/invoicing/model/Contact.h>
#include <aws/invoicing/model/EinvoiceDeliveryPreference.h>
#include <aws/invoicing/model/ProcurementPortalName.h>
#include <aws/invoicing/model/ProcurementPortalPreferenceSelector.h>
#include <aws/invoicing/model/ResourceTag.h>
#include <aws/invoicing/model/SupplierDomain.h>
#include <aws/invoicing/model/TestEnvPreferenceInput.h>

#include <utility>

namespace Aws {
namespace Invoicing {
namespace Model {

/**
 */
class CreateProcurementPortalPreferenceRequest : public InvoicingRequest {
 public:
  AWS_INVOICING_API CreateProcurementPortalPreferenceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProcurementPortalPreference"; }

  AWS_INVOICING_API Aws::String SerializePayload() const override;

  AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
  inline CreateProcurementPortalPreferenceRequest& WithProcurementPortalName(ProcurementPortalName value) {
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
  inline CreateProcurementPortalPreferenceRequest& WithBuyerDomain(BuyerDomain value) {
    SetBuyerDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the buyer in the procurement portal. </p>
   */
  inline const Aws::String& GetBuyerIdentifier() const { return m_buyerIdentifier; }
  inline bool BuyerIdentifierHasBeenSet() const { return m_buyerIdentifierHasBeenSet; }
  template <typename BuyerIdentifierT = Aws::String>
  void SetBuyerIdentifier(BuyerIdentifierT&& value) {
    m_buyerIdentifierHasBeenSet = true;
    m_buyerIdentifier = std::forward<BuyerIdentifierT>(value);
  }
  template <typename BuyerIdentifierT = Aws::String>
  CreateProcurementPortalPreferenceRequest& WithBuyerIdentifier(BuyerIdentifierT&& value) {
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
  inline CreateProcurementPortalPreferenceRequest& WithSupplierDomain(SupplierDomain value) {
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
  CreateProcurementPortalPreferenceRequest& WithSupplierIdentifier(SupplierIdentifierT&& value) {
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
  CreateProcurementPortalPreferenceRequest& WithSelector(SelectorT&& value) {
    SetSelector(std::forward<SelectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shared secret or authentication credential used to establish secure
   * communication with the procurement portal. This value must be encrypted at
   * rest.</p>
   */
  inline const Aws::String& GetProcurementPortalSharedSecret() const { return m_procurementPortalSharedSecret; }
  inline bool ProcurementPortalSharedSecretHasBeenSet() const { return m_procurementPortalSharedSecretHasBeenSet; }
  template <typename ProcurementPortalSharedSecretT = Aws::String>
  void SetProcurementPortalSharedSecret(ProcurementPortalSharedSecretT&& value) {
    m_procurementPortalSharedSecretHasBeenSet = true;
    m_procurementPortalSharedSecret = std::forward<ProcurementPortalSharedSecretT>(value);
  }
  template <typename ProcurementPortalSharedSecretT = Aws::String>
  CreateProcurementPortalPreferenceRequest& WithProcurementPortalSharedSecret(ProcurementPortalSharedSecretT&& value) {
    SetProcurementPortalSharedSecret(std::forward<ProcurementPortalSharedSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint URL where e-invoices will be delivered to the procurement
   * portal. Must be a valid HTTPS URL.</p>
   */
  inline const Aws::String& GetProcurementPortalInstanceEndpoint() const { return m_procurementPortalInstanceEndpoint; }
  inline bool ProcurementPortalInstanceEndpointHasBeenSet() const { return m_procurementPortalInstanceEndpointHasBeenSet; }
  template <typename ProcurementPortalInstanceEndpointT = Aws::String>
  void SetProcurementPortalInstanceEndpoint(ProcurementPortalInstanceEndpointT&& value) {
    m_procurementPortalInstanceEndpointHasBeenSet = true;
    m_procurementPortalInstanceEndpoint = std::forward<ProcurementPortalInstanceEndpointT>(value);
  }
  template <typename ProcurementPortalInstanceEndpointT = Aws::String>
  CreateProcurementPortalPreferenceRequest& WithProcurementPortalInstanceEndpoint(ProcurementPortalInstanceEndpointT&& value) {
    SetProcurementPortalInstanceEndpoint(std::forward<ProcurementPortalInstanceEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for the test environment of the procurement portal.
   * Includes test credentials and endpoints that are used for validation before
   * production deployment.</p>
   */
  inline const TestEnvPreferenceInput& GetTestEnvPreference() const { return m_testEnvPreference; }
  inline bool TestEnvPreferenceHasBeenSet() const { return m_testEnvPreferenceHasBeenSet; }
  template <typename TestEnvPreferenceT = TestEnvPreferenceInput>
  void SetTestEnvPreference(TestEnvPreferenceT&& value) {
    m_testEnvPreferenceHasBeenSet = true;
    m_testEnvPreference = std::forward<TestEnvPreferenceT>(value);
  }
  template <typename TestEnvPreferenceT = TestEnvPreferenceInput>
  CreateProcurementPortalPreferenceRequest& WithTestEnvPreference(TestEnvPreferenceT&& value) {
    SetTestEnvPreference(std::forward<TestEnvPreferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether e-invoice delivery is enabled for this procurement portal
   * preference. Set to true to enable e-invoice delivery, false to disable.</p>
   */
  inline bool GetEinvoiceDeliveryEnabled() const { return m_einvoiceDeliveryEnabled; }
  inline bool EinvoiceDeliveryEnabledHasBeenSet() const { return m_einvoiceDeliveryEnabledHasBeenSet; }
  inline void SetEinvoiceDeliveryEnabled(bool value) {
    m_einvoiceDeliveryEnabledHasBeenSet = true;
    m_einvoiceDeliveryEnabled = value;
  }
  inline CreateProcurementPortalPreferenceRequest& WithEinvoiceDeliveryEnabled(bool value) {
    SetEinvoiceDeliveryEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the e-invoice delivery configuration including document types,
   * attachment types, and customization settings for the portal.</p>
   */
  inline const EinvoiceDeliveryPreference& GetEinvoiceDeliveryPreference() const { return m_einvoiceDeliveryPreference; }
  inline bool EinvoiceDeliveryPreferenceHasBeenSet() const { return m_einvoiceDeliveryPreferenceHasBeenSet; }
  template <typename EinvoiceDeliveryPreferenceT = EinvoiceDeliveryPreference>
  void SetEinvoiceDeliveryPreference(EinvoiceDeliveryPreferenceT&& value) {
    m_einvoiceDeliveryPreferenceHasBeenSet = true;
    m_einvoiceDeliveryPreference = std::forward<EinvoiceDeliveryPreferenceT>(value);
  }
  template <typename EinvoiceDeliveryPreferenceT = EinvoiceDeliveryPreference>
  CreateProcurementPortalPreferenceRequest& WithEinvoiceDeliveryPreference(EinvoiceDeliveryPreferenceT&& value) {
    SetEinvoiceDeliveryPreference(std::forward<EinvoiceDeliveryPreferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether purchase order retrieval is enabled for this procurement
   * portal preference. Set to true to enable PO retrieval, false to disable.</p>
   */
  inline bool GetPurchaseOrderRetrievalEnabled() const { return m_purchaseOrderRetrievalEnabled; }
  inline bool PurchaseOrderRetrievalEnabledHasBeenSet() const { return m_purchaseOrderRetrievalEnabledHasBeenSet; }
  inline void SetPurchaseOrderRetrievalEnabled(bool value) {
    m_purchaseOrderRetrievalEnabledHasBeenSet = true;
    m_purchaseOrderRetrievalEnabled = value;
  }
  inline CreateProcurementPortalPreferenceRequest& WithPurchaseOrderRetrievalEnabled(bool value) {
    SetPurchaseOrderRetrievalEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of contact information for portal administrators and technical contacts
   * responsible for the e-invoice integration.</p>
   */
  inline const Aws::Vector<Contact>& GetContacts() const { return m_contacts; }
  inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }
  template <typename ContactsT = Aws::Vector<Contact>>
  void SetContacts(ContactsT&& value) {
    m_contactsHasBeenSet = true;
    m_contacts = std::forward<ContactsT>(value);
  }
  template <typename ContactsT = Aws::Vector<Contact>>
  CreateProcurementPortalPreferenceRequest& WithContacts(ContactsT&& value) {
    SetContacts(std::forward<ContactsT>(value));
    return *this;
  }
  template <typename ContactsT = Contact>
  CreateProcurementPortalPreferenceRequest& AddContacts(ContactsT&& value) {
    m_contactsHasBeenSet = true;
    m_contacts.emplace_back(std::forward<ContactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to this procurement portal preference resource. Each tag
   * consists of a key and an optional value.</p>
   */
  inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  CreateProcurementPortalPreferenceRequest& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsT = ResourceTag>
  CreateProcurementPortalPreferenceRequest& AddResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure idempotency of
   * the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateProcurementPortalPreferenceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ProcurementPortalName m_procurementPortalName{ProcurementPortalName::NOT_SET};

  BuyerDomain m_buyerDomain{BuyerDomain::NOT_SET};

  Aws::String m_buyerIdentifier;

  SupplierDomain m_supplierDomain{SupplierDomain::NOT_SET};

  Aws::String m_supplierIdentifier;

  ProcurementPortalPreferenceSelector m_selector;

  Aws::String m_procurementPortalSharedSecret;

  Aws::String m_procurementPortalInstanceEndpoint;

  TestEnvPreferenceInput m_testEnvPreference;

  bool m_einvoiceDeliveryEnabled{false};

  EinvoiceDeliveryPreference m_einvoiceDeliveryPreference;

  bool m_purchaseOrderRetrievalEnabled{false};

  Aws::Vector<Contact> m_contacts;

  Aws::Vector<ResourceTag> m_resourceTags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_procurementPortalNameHasBeenSet = false;
  bool m_buyerDomainHasBeenSet = false;
  bool m_buyerIdentifierHasBeenSet = false;
  bool m_supplierDomainHasBeenSet = false;
  bool m_supplierIdentifierHasBeenSet = false;
  bool m_selectorHasBeenSet = false;
  bool m_procurementPortalSharedSecretHasBeenSet = false;
  bool m_procurementPortalInstanceEndpointHasBeenSet = false;
  bool m_testEnvPreferenceHasBeenSet = false;
  bool m_einvoiceDeliveryEnabledHasBeenSet = false;
  bool m_einvoiceDeliveryPreferenceHasBeenSet = false;
  bool m_purchaseOrderRetrievalEnabledHasBeenSet = false;
  bool m_contactsHasBeenSet = false;
  bool m_resourceTagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
