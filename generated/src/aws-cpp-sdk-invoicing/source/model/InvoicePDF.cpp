/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/InvoicePDF.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

InvoicePDF::InvoicePDF(JsonView jsonValue) { *this = jsonValue; }

InvoicePDF& InvoicePDF::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InvoiceId")) {
    m_invoiceId = jsonValue.GetString("InvoiceId");
    m_invoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DocumentUrl")) {
    m_documentUrl = jsonValue.GetString("DocumentUrl");
    m_documentUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DocumentUrlExpirationDate")) {
    m_documentUrlExpirationDate = jsonValue.GetDouble("DocumentUrlExpirationDate");
    m_documentUrlExpirationDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupplementalDocuments")) {
    Aws::Utils::Array<JsonView> supplementalDocumentsJsonList = jsonValue.GetArray("SupplementalDocuments");
    for (unsigned supplementalDocumentsIndex = 0; supplementalDocumentsIndex < supplementalDocumentsJsonList.GetLength();
         ++supplementalDocumentsIndex) {
      m_supplementalDocuments.push_back(supplementalDocumentsJsonList[supplementalDocumentsIndex].AsObject());
    }
    m_supplementalDocumentsHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoicePDF::Jsonize() const {
  JsonValue payload;

  if (m_invoiceIdHasBeenSet) {
    payload.WithString("InvoiceId", m_invoiceId);
  }

  if (m_documentUrlHasBeenSet) {
    payload.WithString("DocumentUrl", m_documentUrl);
  }

  if (m_documentUrlExpirationDateHasBeenSet) {
    payload.WithDouble("DocumentUrlExpirationDate", m_documentUrlExpirationDate.SecondsWithMSPrecision());
  }

  if (m_supplementalDocumentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> supplementalDocumentsJsonList(m_supplementalDocuments.size());
    for (unsigned supplementalDocumentsIndex = 0; supplementalDocumentsIndex < supplementalDocumentsJsonList.GetLength();
         ++supplementalDocumentsIndex) {
      supplementalDocumentsJsonList[supplementalDocumentsIndex].AsObject(m_supplementalDocuments[supplementalDocumentsIndex].Jsonize());
    }
    payload.WithArray("SupplementalDocuments", std::move(supplementalDocumentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
