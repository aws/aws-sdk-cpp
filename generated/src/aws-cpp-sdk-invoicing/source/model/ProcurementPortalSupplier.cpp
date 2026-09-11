/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/ProcurementPortalSupplier.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

ProcurementPortalSupplier::ProcurementPortalSupplier(JsonView jsonValue) { *this = jsonValue; }

ProcurementPortalSupplier& ProcurementPortalSupplier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SupplierIdentifier")) {
    m_supplierIdentifier = jsonValue.GetString("SupplierIdentifier");
    m_supplierIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SellerOfRecord")) {
    m_sellerOfRecord = jsonValue.GetString("SellerOfRecord");
    m_sellerOfRecordHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CountryCode")) {
    m_countryCode = jsonValue.GetString("CountryCode");
    m_countryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Environment")) {
    m_environment = ProcurementPortalEnvMapper::GetProcurementPortalEnvForName(jsonValue.GetString("Environment"));
    m_environmentHasBeenSet = true;
  }
  return *this;
}

JsonValue ProcurementPortalSupplier::Jsonize() const {
  JsonValue payload;

  if (m_supplierIdentifierHasBeenSet) {
    payload.WithString("SupplierIdentifier", m_supplierIdentifier);
  }

  if (m_sellerOfRecordHasBeenSet) {
    payload.WithString("SellerOfRecord", m_sellerOfRecord);
  }

  if (m_countryCodeHasBeenSet) {
    payload.WithString("CountryCode", m_countryCode);
  }

  if (m_environmentHasBeenSet) {
    payload.WithString("Environment", ProcurementPortalEnvMapper::GetNameForProcurementPortalEnv(m_environment));
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
