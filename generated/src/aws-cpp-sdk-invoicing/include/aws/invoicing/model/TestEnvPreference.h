/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/BuyerDomain.h>
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
 * <p>Contains configuration settings for testing the procurement portal
 * integration in a non-production environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/TestEnvPreference">AWS
 * API Reference</a></p>
 */
class TestEnvPreference {
 public:
  AWS_INVOICING_API TestEnvPreference() = default;
  AWS_INVOICING_API TestEnvPreference(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API TestEnvPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domain identifier for the buyer in the test environment of the
   * procurement portal.</p>
   */
  inline BuyerDomain GetBuyerDomain() const { return m_buyerDomain; }
  inline bool BuyerDomainHasBeenSet() const { return m_buyerDomainHasBeenSet; }
  inline void SetBuyerDomain(BuyerDomain value) {
    m_buyerDomainHasBeenSet = true;
    m_buyerDomain = value;
  }
  inline TestEnvPreference& WithBuyerDomain(BuyerDomain value) {
    SetBuyerDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the buyer in the test environment of the
   * procurement portal.</p>
   */
  inline const Aws::String& GetBuyerIdentifier() const { return m_buyerIdentifier; }
  inline bool BuyerIdentifierHasBeenSet() const { return m_buyerIdentifierHasBeenSet; }
  template <typename BuyerIdentifierT = Aws::String>
  void SetBuyerIdentifier(BuyerIdentifierT&& value) {
    m_buyerIdentifierHasBeenSet = true;
    m_buyerIdentifier = std::forward<BuyerIdentifierT>(value);
  }
  template <typename BuyerIdentifierT = Aws::String>
  TestEnvPreference& WithBuyerIdentifier(BuyerIdentifierT&& value) {
    SetBuyerIdentifier(std::forward<BuyerIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain identifier for the supplier in the test environment of the
   * procurement portal.</p>
   */
  inline SupplierDomain GetSupplierDomain() const { return m_supplierDomain; }
  inline bool SupplierDomainHasBeenSet() const { return m_supplierDomainHasBeenSet; }
  inline void SetSupplierDomain(SupplierDomain value) {
    m_supplierDomainHasBeenSet = true;
    m_supplierDomain = value;
  }
  inline TestEnvPreference& WithSupplierDomain(SupplierDomain value) {
    SetSupplierDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the supplier in the test environment of the
   * procurement portal.</p>
   */
  inline const Aws::String& GetSupplierIdentifier() const { return m_supplierIdentifier; }
  inline bool SupplierIdentifierHasBeenSet() const { return m_supplierIdentifierHasBeenSet; }
  template <typename SupplierIdentifierT = Aws::String>
  void SetSupplierIdentifier(SupplierIdentifierT&& value) {
    m_supplierIdentifierHasBeenSet = true;
    m_supplierIdentifier = std::forward<SupplierIdentifierT>(value);
  }
  template <typename SupplierIdentifierT = Aws::String>
  TestEnvPreference& WithSupplierIdentifier(SupplierIdentifierT&& value) {
    SetSupplierIdentifier(std::forward<SupplierIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shared secret or authentication credential used for secure communication
   * with the test environment.</p>
   */
  inline const Aws::String& GetProcurementPortalSharedSecret() const { return m_procurementPortalSharedSecret; }
  inline bool ProcurementPortalSharedSecretHasBeenSet() const { return m_procurementPortalSharedSecretHasBeenSet; }
  template <typename ProcurementPortalSharedSecretT = Aws::String>
  void SetProcurementPortalSharedSecret(ProcurementPortalSharedSecretT&& value) {
    m_procurementPortalSharedSecretHasBeenSet = true;
    m_procurementPortalSharedSecret = std::forward<ProcurementPortalSharedSecretT>(value);
  }
  template <typename ProcurementPortalSharedSecretT = Aws::String>
  TestEnvPreference& WithProcurementPortalSharedSecret(ProcurementPortalSharedSecretT&& value) {
    SetProcurementPortalSharedSecret(std::forward<ProcurementPortalSharedSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint URL where e-invoices are delivered in the test environment.</p>
   */
  inline const Aws::String& GetProcurementPortalInstanceEndpoint() const { return m_procurementPortalInstanceEndpoint; }
  inline bool ProcurementPortalInstanceEndpointHasBeenSet() const { return m_procurementPortalInstanceEndpointHasBeenSet; }
  template <typename ProcurementPortalInstanceEndpointT = Aws::String>
  void SetProcurementPortalInstanceEndpoint(ProcurementPortalInstanceEndpointT&& value) {
    m_procurementPortalInstanceEndpointHasBeenSet = true;
    m_procurementPortalInstanceEndpoint = std::forward<ProcurementPortalInstanceEndpointT>(value);
  }
  template <typename ProcurementPortalInstanceEndpointT = Aws::String>
  TestEnvPreference& WithProcurementPortalInstanceEndpoint(ProcurementPortalInstanceEndpointT&& value) {
    SetProcurementPortalInstanceEndpoint(std::forward<ProcurementPortalInstanceEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint URL used for retrieving purchase orders in the test
   * environment.</p>
   */
  inline const Aws::String& GetPurchaseOrderRetrievalEndpoint() const { return m_purchaseOrderRetrievalEndpoint; }
  inline bool PurchaseOrderRetrievalEndpointHasBeenSet() const { return m_purchaseOrderRetrievalEndpointHasBeenSet; }
  template <typename PurchaseOrderRetrievalEndpointT = Aws::String>
  void SetPurchaseOrderRetrievalEndpoint(PurchaseOrderRetrievalEndpointT&& value) {
    m_purchaseOrderRetrievalEndpointHasBeenSet = true;
    m_purchaseOrderRetrievalEndpoint = std::forward<PurchaseOrderRetrievalEndpointT>(value);
  }
  template <typename PurchaseOrderRetrievalEndpointT = Aws::String>
  TestEnvPreference& WithPurchaseOrderRetrievalEndpoint(PurchaseOrderRetrievalEndpointT&& value) {
    SetPurchaseOrderRetrievalEndpoint(std::forward<PurchaseOrderRetrievalEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  BuyerDomain m_buyerDomain{BuyerDomain::NOT_SET};

  Aws::String m_buyerIdentifier;

  SupplierDomain m_supplierDomain{SupplierDomain::NOT_SET};

  Aws::String m_supplierIdentifier;

  Aws::String m_procurementPortalSharedSecret;

  Aws::String m_procurementPortalInstanceEndpoint;

  Aws::String m_purchaseOrderRetrievalEndpoint;
  bool m_buyerDomainHasBeenSet = false;
  bool m_buyerIdentifierHasBeenSet = false;
  bool m_supplierDomainHasBeenSet = false;
  bool m_supplierIdentifierHasBeenSet = false;
  bool m_procurementPortalSharedSecretHasBeenSet = false;
  bool m_procurementPortalInstanceEndpointHasBeenSet = false;
  bool m_purchaseOrderRetrievalEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
