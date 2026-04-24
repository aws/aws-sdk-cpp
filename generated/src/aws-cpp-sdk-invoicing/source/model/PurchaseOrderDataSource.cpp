/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/PurchaseOrderDataSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

PurchaseOrderDataSource::PurchaseOrderDataSource(JsonView jsonValue) { *this = jsonValue; }

PurchaseOrderDataSource& PurchaseOrderDataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EinvoiceDeliveryDocumentType")) {
    m_einvoiceDeliveryDocumentType =
        EinvoiceDeliveryDocumentTypeMapper::GetEinvoiceDeliveryDocumentTypeForName(jsonValue.GetString("EinvoiceDeliveryDocumentType"));
    m_einvoiceDeliveryDocumentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PurchaseOrderDataSourceType")) {
    m_purchaseOrderDataSourceType =
        PurchaseOrderDataSourceTypeMapper::GetPurchaseOrderDataSourceTypeForName(jsonValue.GetString("PurchaseOrderDataSourceType"));
    m_purchaseOrderDataSourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PurchaseOrderDataSource::Jsonize() const {
  JsonValue payload;

  if (m_einvoiceDeliveryDocumentTypeHasBeenSet) {
    payload.WithString("EinvoiceDeliveryDocumentType",
                       EinvoiceDeliveryDocumentTypeMapper::GetNameForEinvoiceDeliveryDocumentType(m_einvoiceDeliveryDocumentType));
  }

  if (m_purchaseOrderDataSourceTypeHasBeenSet) {
    payload.WithString("PurchaseOrderDataSourceType",
                       PurchaseOrderDataSourceTypeMapper::GetNameForPurchaseOrderDataSourceType(m_purchaseOrderDataSourceType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
