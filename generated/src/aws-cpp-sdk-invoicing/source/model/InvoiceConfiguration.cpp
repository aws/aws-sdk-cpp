/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/InvoiceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

InvoiceConfiguration::InvoiceConfiguration(JsonView jsonValue) { *this = jsonValue; }

InvoiceConfiguration& InvoiceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DocumentTypes")) {
    Aws::Utils::Array<JsonView> documentTypesJsonList = jsonValue.GetArray("DocumentTypes");
    for (unsigned documentTypesIndex = 0; documentTypesIndex < documentTypesJsonList.GetLength(); ++documentTypesIndex) {
      m_documentTypes.push_back(
          EinvoiceDeliveryDocumentTypeMapper::GetEinvoiceDeliveryDocumentTypeForName(documentTypesJsonList[documentTypesIndex].AsString()));
    }
    m_documentTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttachmentTypes")) {
    Aws::Utils::Array<JsonView> attachmentTypesJsonList = jsonValue.GetArray("AttachmentTypes");
    for (unsigned attachmentTypesIndex = 0; attachmentTypesIndex < attachmentTypesJsonList.GetLength(); ++attachmentTypesIndex) {
      m_attachmentTypes.push_back(EinvoiceDeliveryAttachmentTypeMapper::GetEinvoiceDeliveryAttachmentTypeForName(
          attachmentTypesJsonList[attachmentTypesIndex].AsString()));
    }
    m_attachmentTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_documentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentTypesJsonList(m_documentTypes.size());
    for (unsigned documentTypesIndex = 0; documentTypesIndex < documentTypesJsonList.GetLength(); ++documentTypesIndex) {
      documentTypesJsonList[documentTypesIndex].AsString(
          EinvoiceDeliveryDocumentTypeMapper::GetNameForEinvoiceDeliveryDocumentType(m_documentTypes[documentTypesIndex]));
    }
    payload.WithArray("DocumentTypes", std::move(documentTypesJsonList));
  }

  if (m_attachmentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attachmentTypesJsonList(m_attachmentTypes.size());
    for (unsigned attachmentTypesIndex = 0; attachmentTypesIndex < attachmentTypesJsonList.GetLength(); ++attachmentTypesIndex) {
      attachmentTypesJsonList[attachmentTypesIndex].AsString(
          EinvoiceDeliveryAttachmentTypeMapper::GetNameForEinvoiceDeliveryAttachmentType(m_attachmentTypes[attachmentTypesIndex]));
    }
    payload.WithArray("AttachmentTypes", std::move(attachmentTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
