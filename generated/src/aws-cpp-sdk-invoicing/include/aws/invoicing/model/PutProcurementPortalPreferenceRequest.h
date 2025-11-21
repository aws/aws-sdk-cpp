/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/Contact.h>
#include <aws/invoicing/model/EinvoiceDeliveryPreference.h>
#include <aws/invoicing/model/ProcurementPortalPreferenceSelector.h>
#include <aws/invoicing/model/TestEnvPreferenceInput.h>

#include <utility>

namespace Aws {
namespace Invoicing {
namespace Model {

/**
 */
class PutProcurementPortalPreferenceRequest : public InvoicingRequest {
 public:
  AWS_INVOICING_API PutProcurementPortalPreferenceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutProcurementPortalPreference"; }

  AWS_INVOICING_API Aws::String SerializePayload() const override;

  AWS_INVOICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the procurement portal preference to
   * update.</p>
   */
  inline const Aws::String& GetProcurementPortalPreferenceArn() const { return m_procurementPortalPreferenceArn; }
  inline bool ProcurementPortalPreferenceArnHasBeenSet() const { return m_procurementPortalPreferenceArnHasBeenSet; }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  void SetProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    m_procurementPortalPreferenceArnHasBeenSet = true;
    m_procurementPortalPreferenceArn = std::forward<ProcurementPortalPreferenceArnT>(value);
  }
  template <typename ProcurementPortalPreferenceArnT = Aws::String>
  PutProcurementPortalPreferenceRequest& WithProcurementPortalPreferenceArn(ProcurementPortalPreferenceArnT&& value) {
    SetProcurementPortalPreferenceArn(std::forward<ProcurementPortalPreferenceArnT>(value));
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
  PutProcurementPortalPreferenceRequest& WithSelector(SelectorT&& value) {
    SetSelector(std::forward<SelectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated shared secret or authentication credential for the procurement
   * portal. This value must be encrypted at rest.</p>
   */
  inline const Aws::String& GetProcurementPortalSharedSecret() const { return m_procurementPortalSharedSecret; }
  inline bool ProcurementPortalSharedSecretHasBeenSet() const { return m_procurementPortalSharedSecretHasBeenSet; }
  template <typename ProcurementPortalSharedSecretT = Aws::String>
  void SetProcurementPortalSharedSecret(ProcurementPortalSharedSecretT&& value) {
    m_procurementPortalSharedSecretHasBeenSet = true;
    m_procurementPortalSharedSecret = std::forward<ProcurementPortalSharedSecretT>(value);
  }
  template <typename ProcurementPortalSharedSecretT = Aws::String>
  PutProcurementPortalPreferenceRequest& WithProcurementPortalSharedSecret(ProcurementPortalSharedSecretT&& value) {
    SetProcurementPortalSharedSecret(std::forward<ProcurementPortalSharedSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated endpoint URL where e-invoices will be delivered to the
   * procurement portal. Must be a valid HTTPS URL.</p>
   */
  inline const Aws::String& GetProcurementPortalInstanceEndpoint() const { return m_procurementPortalInstanceEndpoint; }
  inline bool ProcurementPortalInstanceEndpointHasBeenSet() const { return m_procurementPortalInstanceEndpointHasBeenSet; }
  template <typename ProcurementPortalInstanceEndpointT = Aws::String>
  void SetProcurementPortalInstanceEndpoint(ProcurementPortalInstanceEndpointT&& value) {
    m_procurementPortalInstanceEndpointHasBeenSet = true;
    m_procurementPortalInstanceEndpoint = std::forward<ProcurementPortalInstanceEndpointT>(value);
  }
  template <typename ProcurementPortalInstanceEndpointT = Aws::String>
  PutProcurementPortalPreferenceRequest& WithProcurementPortalInstanceEndpoint(ProcurementPortalInstanceEndpointT&& value) {
    SetProcurementPortalInstanceEndpoint(std::forward<ProcurementPortalInstanceEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated configuration settings for the test environment of the procurement
   * portal.</p>
   */
  inline const TestEnvPreferenceInput& GetTestEnvPreference() const { return m_testEnvPreference; }
  inline bool TestEnvPreferenceHasBeenSet() const { return m_testEnvPreferenceHasBeenSet; }
  template <typename TestEnvPreferenceT = TestEnvPreferenceInput>
  void SetTestEnvPreference(TestEnvPreferenceT&& value) {
    m_testEnvPreferenceHasBeenSet = true;
    m_testEnvPreference = std::forward<TestEnvPreferenceT>(value);
  }
  template <typename TestEnvPreferenceT = TestEnvPreferenceInput>
  PutProcurementPortalPreferenceRequest& WithTestEnvPreference(TestEnvPreferenceT&& value) {
    SetTestEnvPreference(std::forward<TestEnvPreferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated flag indicating whether e-invoice delivery is enabled for this
   * procurement portal preference.</p>
   */
  inline bool GetEinvoiceDeliveryEnabled() const { return m_einvoiceDeliveryEnabled; }
  inline bool EinvoiceDeliveryEnabledHasBeenSet() const { return m_einvoiceDeliveryEnabledHasBeenSet; }
  inline void SetEinvoiceDeliveryEnabled(bool value) {
    m_einvoiceDeliveryEnabledHasBeenSet = true;
    m_einvoiceDeliveryEnabled = value;
  }
  inline PutProcurementPortalPreferenceRequest& WithEinvoiceDeliveryEnabled(bool value) {
    SetEinvoiceDeliveryEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated e-invoice delivery configuration including document types, attachment
   * types, and customization settings for the portal.</p>
   */
  inline const EinvoiceDeliveryPreference& GetEinvoiceDeliveryPreference() const { return m_einvoiceDeliveryPreference; }
  inline bool EinvoiceDeliveryPreferenceHasBeenSet() const { return m_einvoiceDeliveryPreferenceHasBeenSet; }
  template <typename EinvoiceDeliveryPreferenceT = EinvoiceDeliveryPreference>
  void SetEinvoiceDeliveryPreference(EinvoiceDeliveryPreferenceT&& value) {
    m_einvoiceDeliveryPreferenceHasBeenSet = true;
    m_einvoiceDeliveryPreference = std::forward<EinvoiceDeliveryPreferenceT>(value);
  }
  template <typename EinvoiceDeliveryPreferenceT = EinvoiceDeliveryPreference>
  PutProcurementPortalPreferenceRequest& WithEinvoiceDeliveryPreference(EinvoiceDeliveryPreferenceT&& value) {
    SetEinvoiceDeliveryPreference(std::forward<EinvoiceDeliveryPreferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated flag indicating whether purchase order retrieval is enabled for this
   * procurement portal preference.</p>
   */
  inline bool GetPurchaseOrderRetrievalEnabled() const { return m_purchaseOrderRetrievalEnabled; }
  inline bool PurchaseOrderRetrievalEnabledHasBeenSet() const { return m_purchaseOrderRetrievalEnabledHasBeenSet; }
  inline void SetPurchaseOrderRetrievalEnabled(bool value) {
    m_purchaseOrderRetrievalEnabledHasBeenSet = true;
    m_purchaseOrderRetrievalEnabled = value;
  }
  inline PutProcurementPortalPreferenceRequest& WithPurchaseOrderRetrievalEnabled(bool value) {
    SetPurchaseOrderRetrievalEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated list of contact information for portal administrators and technical
   * contacts.</p>
   */
  inline const Aws::Vector<Contact>& GetContacts() const { return m_contacts; }
  inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }
  template <typename ContactsT = Aws::Vector<Contact>>
  void SetContacts(ContactsT&& value) {
    m_contactsHasBeenSet = true;
    m_contacts = std::forward<ContactsT>(value);
  }
  template <typename ContactsT = Aws::Vector<Contact>>
  PutProcurementPortalPreferenceRequest& WithContacts(ContactsT&& value) {
    SetContacts(std::forward<ContactsT>(value));
    return *this;
  }
  template <typename ContactsT = Contact>
  PutProcurementPortalPreferenceRequest& AddContacts(ContactsT&& value) {
    m_contactsHasBeenSet = true;
    m_contacts.emplace_back(std::forward<ContactsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_procurementPortalPreferenceArn;
  bool m_procurementPortalPreferenceArnHasBeenSet = false;

  ProcurementPortalPreferenceSelector m_selector;
  bool m_selectorHasBeenSet = false;

  Aws::String m_procurementPortalSharedSecret;
  bool m_procurementPortalSharedSecretHasBeenSet = false;

  Aws::String m_procurementPortalInstanceEndpoint;
  bool m_procurementPortalInstanceEndpointHasBeenSet = false;

  TestEnvPreferenceInput m_testEnvPreference;
  bool m_testEnvPreferenceHasBeenSet = false;

  bool m_einvoiceDeliveryEnabled{false};
  bool m_einvoiceDeliveryEnabledHasBeenSet = false;

  EinvoiceDeliveryPreference m_einvoiceDeliveryPreference;
  bool m_einvoiceDeliveryPreferenceHasBeenSet = false;

  bool m_purchaseOrderRetrievalEnabled{false};
  bool m_purchaseOrderRetrievalEnabledHasBeenSet = false;

  Aws::Vector<Contact> m_contacts;
  bool m_contactsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
