/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/EinvoiceDeliveryPreference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

EinvoiceDeliveryPreference::EinvoiceDeliveryPreference(JsonView jsonValue) { *this = jsonValue; }

EinvoiceDeliveryPreference& EinvoiceDeliveryPreference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EinvoiceDeliveryDocumentTypes")) {
    Aws::Utils::Array<JsonView> einvoiceDeliveryDocumentTypesJsonList = jsonValue.GetArray("EinvoiceDeliveryDocumentTypes");
    for (unsigned einvoiceDeliveryDocumentTypesIndex = 0;
         einvoiceDeliveryDocumentTypesIndex < einvoiceDeliveryDocumentTypesJsonList.GetLength(); ++einvoiceDeliveryDocumentTypesIndex) {
      m_einvoiceDeliveryDocumentTypes.push_back(EinvoiceDeliveryDocumentTypeMapper::GetEinvoiceDeliveryDocumentTypeForName(
          einvoiceDeliveryDocumentTypesJsonList[einvoiceDeliveryDocumentTypesIndex].AsString()));
    }
    m_einvoiceDeliveryDocumentTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EinvoiceDeliveryAttachmentTypes")) {
    Aws::Utils::Array<JsonView> einvoiceDeliveryAttachmentTypesJsonList = jsonValue.GetArray("EinvoiceDeliveryAttachmentTypes");
    for (unsigned einvoiceDeliveryAttachmentTypesIndex = 0;
         einvoiceDeliveryAttachmentTypesIndex < einvoiceDeliveryAttachmentTypesJsonList.GetLength();
         ++einvoiceDeliveryAttachmentTypesIndex) {
      m_einvoiceDeliveryAttachmentTypes.push_back(EinvoiceDeliveryAttachmentTypeMapper::GetEinvoiceDeliveryAttachmentTypeForName(
          einvoiceDeliveryAttachmentTypesJsonList[einvoiceDeliveryAttachmentTypesIndex].AsString()));
    }
    m_einvoiceDeliveryAttachmentTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Protocol")) {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("Protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PurchaseOrderDataSources")) {
    Aws::Utils::Array<JsonView> purchaseOrderDataSourcesJsonList = jsonValue.GetArray("PurchaseOrderDataSources");
    for (unsigned purchaseOrderDataSourcesIndex = 0; purchaseOrderDataSourcesIndex < purchaseOrderDataSourcesJsonList.GetLength();
         ++purchaseOrderDataSourcesIndex) {
      m_purchaseOrderDataSources.push_back(purchaseOrderDataSourcesJsonList[purchaseOrderDataSourcesIndex].AsObject());
    }
    m_purchaseOrderDataSourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectionTestingMethod")) {
    m_connectionTestingMethod =
        ConnectionTestingMethodMapper::GetConnectionTestingMethodForName(jsonValue.GetString("ConnectionTestingMethod"));
    m_connectionTestingMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EinvoiceDeliveryActivationDate")) {
    m_einvoiceDeliveryActivationDate = jsonValue.GetDouble("EinvoiceDeliveryActivationDate");
    m_einvoiceDeliveryActivationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue EinvoiceDeliveryPreference::Jsonize() const {
  JsonValue payload;

  if (m_einvoiceDeliveryDocumentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> einvoiceDeliveryDocumentTypesJsonList(m_einvoiceDeliveryDocumentTypes.size());
    for (unsigned einvoiceDeliveryDocumentTypesIndex = 0;
         einvoiceDeliveryDocumentTypesIndex < einvoiceDeliveryDocumentTypesJsonList.GetLength(); ++einvoiceDeliveryDocumentTypesIndex) {
      einvoiceDeliveryDocumentTypesJsonList[einvoiceDeliveryDocumentTypesIndex].AsString(
          EinvoiceDeliveryDocumentTypeMapper::GetNameForEinvoiceDeliveryDocumentType(
              m_einvoiceDeliveryDocumentTypes[einvoiceDeliveryDocumentTypesIndex]));
    }
    payload.WithArray("EinvoiceDeliveryDocumentTypes", std::move(einvoiceDeliveryDocumentTypesJsonList));
  }

  if (m_einvoiceDeliveryAttachmentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> einvoiceDeliveryAttachmentTypesJsonList(m_einvoiceDeliveryAttachmentTypes.size());
    for (unsigned einvoiceDeliveryAttachmentTypesIndex = 0;
         einvoiceDeliveryAttachmentTypesIndex < einvoiceDeliveryAttachmentTypesJsonList.GetLength();
         ++einvoiceDeliveryAttachmentTypesIndex) {
      einvoiceDeliveryAttachmentTypesJsonList[einvoiceDeliveryAttachmentTypesIndex].AsString(
          EinvoiceDeliveryAttachmentTypeMapper::GetNameForEinvoiceDeliveryAttachmentType(
              m_einvoiceDeliveryAttachmentTypes[einvoiceDeliveryAttachmentTypesIndex]));
    }
    payload.WithArray("EinvoiceDeliveryAttachmentTypes", std::move(einvoiceDeliveryAttachmentTypesJsonList));
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("Protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if (m_purchaseOrderDataSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> purchaseOrderDataSourcesJsonList(m_purchaseOrderDataSources.size());
    for (unsigned purchaseOrderDataSourcesIndex = 0; purchaseOrderDataSourcesIndex < purchaseOrderDataSourcesJsonList.GetLength();
         ++purchaseOrderDataSourcesIndex) {
      purchaseOrderDataSourcesJsonList[purchaseOrderDataSourcesIndex].AsObject(
          m_purchaseOrderDataSources[purchaseOrderDataSourcesIndex].Jsonize());
    }
    payload.WithArray("PurchaseOrderDataSources", std::move(purchaseOrderDataSourcesJsonList));
  }

  if (m_connectionTestingMethodHasBeenSet) {
    payload.WithString("ConnectionTestingMethod",
                       ConnectionTestingMethodMapper::GetNameForConnectionTestingMethod(m_connectionTestingMethod));
  }

  if (m_einvoiceDeliveryActivationDateHasBeenSet) {
    payload.WithDouble("EinvoiceDeliveryActivationDate", m_einvoiceDeliveryActivationDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
