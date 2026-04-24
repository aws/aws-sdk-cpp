/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/ProcurementPortalPreferenceSelector.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

ProcurementPortalPreferenceSelector::ProcurementPortalPreferenceSelector(JsonView jsonValue) { *this = jsonValue; }

ProcurementPortalPreferenceSelector& ProcurementPortalPreferenceSelector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InvoiceUnitArns")) {
    Aws::Utils::Array<JsonView> invoiceUnitArnsJsonList = jsonValue.GetArray("InvoiceUnitArns");
    for (unsigned invoiceUnitArnsIndex = 0; invoiceUnitArnsIndex < invoiceUnitArnsJsonList.GetLength(); ++invoiceUnitArnsIndex) {
      m_invoiceUnitArns.push_back(invoiceUnitArnsJsonList[invoiceUnitArnsIndex].AsString());
    }
    m_invoiceUnitArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SellerOfRecords")) {
    Aws::Utils::Array<JsonView> sellerOfRecordsJsonList = jsonValue.GetArray("SellerOfRecords");
    for (unsigned sellerOfRecordsIndex = 0; sellerOfRecordsIndex < sellerOfRecordsJsonList.GetLength(); ++sellerOfRecordsIndex) {
      m_sellerOfRecords.push_back(sellerOfRecordsJsonList[sellerOfRecordsIndex].AsString());
    }
    m_sellerOfRecordsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProcurementPortalPreferenceSelector::Jsonize() const {
  JsonValue payload;

  if (m_invoiceUnitArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> invoiceUnitArnsJsonList(m_invoiceUnitArns.size());
    for (unsigned invoiceUnitArnsIndex = 0; invoiceUnitArnsIndex < invoiceUnitArnsJsonList.GetLength(); ++invoiceUnitArnsIndex) {
      invoiceUnitArnsJsonList[invoiceUnitArnsIndex].AsString(m_invoiceUnitArns[invoiceUnitArnsIndex]);
    }
    payload.WithArray("InvoiceUnitArns", std::move(invoiceUnitArnsJsonList));
  }

  if (m_sellerOfRecordsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sellerOfRecordsJsonList(m_sellerOfRecords.size());
    for (unsigned sellerOfRecordsIndex = 0; sellerOfRecordsIndex < sellerOfRecordsJsonList.GetLength(); ++sellerOfRecordsIndex) {
      sellerOfRecordsJsonList[sellerOfRecordsIndex].AsString(m_sellerOfRecords[sellerOfRecordsIndex]);
    }
    payload.WithArray("SellerOfRecords", std::move(sellerOfRecordsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
