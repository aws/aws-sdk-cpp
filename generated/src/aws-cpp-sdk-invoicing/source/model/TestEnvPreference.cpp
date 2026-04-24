/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/TestEnvPreference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

TestEnvPreference::TestEnvPreference(JsonView jsonValue) { *this = jsonValue; }

TestEnvPreference& TestEnvPreference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BuyerDomain")) {
    m_buyerDomain = BuyerDomainMapper::GetBuyerDomainForName(jsonValue.GetString("BuyerDomain"));
    m_buyerDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BuyerIdentifier")) {
    m_buyerIdentifier = jsonValue.GetString("BuyerIdentifier");
    m_buyerIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupplierDomain")) {
    m_supplierDomain = SupplierDomainMapper::GetSupplierDomainForName(jsonValue.GetString("SupplierDomain"));
    m_supplierDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupplierIdentifier")) {
    m_supplierIdentifier = jsonValue.GetString("SupplierIdentifier");
    m_supplierIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcurementPortalSharedSecret")) {
    m_procurementPortalSharedSecret = jsonValue.GetString("ProcurementPortalSharedSecret");
    m_procurementPortalSharedSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcurementPortalInstanceEndpoint")) {
    m_procurementPortalInstanceEndpoint = jsonValue.GetString("ProcurementPortalInstanceEndpoint");
    m_procurementPortalInstanceEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PurchaseOrderRetrievalEndpoint")) {
    m_purchaseOrderRetrievalEndpoint = jsonValue.GetString("PurchaseOrderRetrievalEndpoint");
    m_purchaseOrderRetrievalEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue TestEnvPreference::Jsonize() const {
  JsonValue payload;

  if (m_buyerDomainHasBeenSet) {
    payload.WithString("BuyerDomain", BuyerDomainMapper::GetNameForBuyerDomain(m_buyerDomain));
  }

  if (m_buyerIdentifierHasBeenSet) {
    payload.WithString("BuyerIdentifier", m_buyerIdentifier);
  }

  if (m_supplierDomainHasBeenSet) {
    payload.WithString("SupplierDomain", SupplierDomainMapper::GetNameForSupplierDomain(m_supplierDomain));
  }

  if (m_supplierIdentifierHasBeenSet) {
    payload.WithString("SupplierIdentifier", m_supplierIdentifier);
  }

  if (m_procurementPortalSharedSecretHasBeenSet) {
    payload.WithString("ProcurementPortalSharedSecret", m_procurementPortalSharedSecret);
  }

  if (m_procurementPortalInstanceEndpointHasBeenSet) {
    payload.WithString("ProcurementPortalInstanceEndpoint", m_procurementPortalInstanceEndpoint);
  }

  if (m_purchaseOrderRetrievalEndpointHasBeenSet) {
    payload.WithString("PurchaseOrderRetrievalEndpoint", m_purchaseOrderRetrievalEndpoint);
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
