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
 * <p>Input parameters for configuring test environment preferences for a
 * procurement portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/TestEnvPreferenceInput">AWS
 * API Reference</a></p>
 */
class TestEnvPreferenceInput {
 public:
  AWS_INVOICING_API TestEnvPreferenceInput() = default;
  AWS_INVOICING_API TestEnvPreferenceInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API TestEnvPreferenceInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domain identifier to use for the buyer in the test environment.</p>
   */
  inline BuyerDomain GetBuyerDomain() const { return m_buyerDomain; }
  inline bool BuyerDomainHasBeenSet() const { return m_buyerDomainHasBeenSet; }
  inline void SetBuyerDomain(BuyerDomain value) {
    m_buyerDomainHasBeenSet = true;
    m_buyerDomain = value;
  }
  inline TestEnvPreferenceInput& WithBuyerDomain(BuyerDomain value) {
    SetBuyerDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier to use for the buyer in the test environment.</p>
   */
  inline const Aws::String& GetBuyerIdentifier() const { return m_buyerIdentifier; }
  inline bool BuyerIdentifierHasBeenSet() const { return m_buyerIdentifierHasBeenSet; }
  template <typename BuyerIdentifierT = Aws::String>
  void SetBuyerIdentifier(BuyerIdentifierT&& value) {
    m_buyerIdentifierHasBeenSet = true;
    m_buyerIdentifier = std::forward<BuyerIdentifierT>(value);
  }
  template <typename BuyerIdentifierT = Aws::String>
  TestEnvPreferenceInput& WithBuyerIdentifier(BuyerIdentifierT&& value) {
    SetBuyerIdentifier(std::forward<BuyerIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain identifier to use for the supplier in the test environment.</p>
   */
  inline SupplierDomain GetSupplierDomain() const { return m_supplierDomain; }
  inline bool SupplierDomainHasBeenSet() const { return m_supplierDomainHasBeenSet; }
  inline void SetSupplierDomain(SupplierDomain value) {
    m_supplierDomainHasBeenSet = true;
    m_supplierDomain = value;
  }
  inline TestEnvPreferenceInput& WithSupplierDomain(SupplierDomain value) {
    SetSupplierDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier to use for the supplier in the test environment.</p>
   */
  inline const Aws::String& GetSupplierIdentifier() const { return m_supplierIdentifier; }
  inline bool SupplierIdentifierHasBeenSet() const { return m_supplierIdentifierHasBeenSet; }
  template <typename SupplierIdentifierT = Aws::String>
  void SetSupplierIdentifier(SupplierIdentifierT&& value) {
    m_supplierIdentifierHasBeenSet = true;
    m_supplierIdentifier = std::forward<SupplierIdentifierT>(value);
  }
  template <typename SupplierIdentifierT = Aws::String>
  TestEnvPreferenceInput& WithSupplierIdentifier(SupplierIdentifierT&& value) {
    SetSupplierIdentifier(std::forward<SupplierIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shared secret or authentication credential to use for secure
   * communication in the test environment.</p>
   */
  inline const Aws::String& GetProcurementPortalSharedSecret() const { return m_procurementPortalSharedSecret; }
  inline bool ProcurementPortalSharedSecretHasBeenSet() const { return m_procurementPortalSharedSecretHasBeenSet; }
  template <typename ProcurementPortalSharedSecretT = Aws::String>
  void SetProcurementPortalSharedSecret(ProcurementPortalSharedSecretT&& value) {
    m_procurementPortalSharedSecretHasBeenSet = true;
    m_procurementPortalSharedSecret = std::forward<ProcurementPortalSharedSecretT>(value);
  }
  template <typename ProcurementPortalSharedSecretT = Aws::String>
  TestEnvPreferenceInput& WithProcurementPortalSharedSecret(ProcurementPortalSharedSecretT&& value) {
    SetProcurementPortalSharedSecret(std::forward<ProcurementPortalSharedSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint URL where e-invoices will be delivered in the test
   * environment.</p>
   */
  inline const Aws::String& GetProcurementPortalInstanceEndpoint() const { return m_procurementPortalInstanceEndpoint; }
  inline bool ProcurementPortalInstanceEndpointHasBeenSet() const { return m_procurementPortalInstanceEndpointHasBeenSet; }
  template <typename ProcurementPortalInstanceEndpointT = Aws::String>
  void SetProcurementPortalInstanceEndpoint(ProcurementPortalInstanceEndpointT&& value) {
    m_procurementPortalInstanceEndpointHasBeenSet = true;
    m_procurementPortalInstanceEndpoint = std::forward<ProcurementPortalInstanceEndpointT>(value);
  }
  template <typename ProcurementPortalInstanceEndpointT = Aws::String>
  TestEnvPreferenceInput& WithProcurementPortalInstanceEndpoint(ProcurementPortalInstanceEndpointT&& value) {
    SetProcurementPortalInstanceEndpoint(std::forward<ProcurementPortalInstanceEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  BuyerDomain m_buyerDomain{BuyerDomain::NOT_SET};
  bool m_buyerDomainHasBeenSet = false;

  Aws::String m_buyerIdentifier;
  bool m_buyerIdentifierHasBeenSet = false;

  SupplierDomain m_supplierDomain{SupplierDomain::NOT_SET};
  bool m_supplierDomainHasBeenSet = false;

  Aws::String m_supplierIdentifier;
  bool m_supplierIdentifierHasBeenSet = false;

  Aws::String m_procurementPortalSharedSecret;
  bool m_procurementPortalSharedSecretHasBeenSet = false;

  Aws::String m_procurementPortalInstanceEndpoint;
  bool m_procurementPortalInstanceEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
