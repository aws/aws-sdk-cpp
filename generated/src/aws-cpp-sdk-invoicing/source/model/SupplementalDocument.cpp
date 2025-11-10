/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/SupplementalDocument.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

SupplementalDocument::SupplementalDocument(JsonView jsonValue) { *this = jsonValue; }

SupplementalDocument& SupplementalDocument::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DocumentUrl")) {
    m_documentUrl = jsonValue.GetString("DocumentUrl");
    m_documentUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DocumentUrlExpirationDate")) {
    m_documentUrlExpirationDate = jsonValue.GetDouble("DocumentUrlExpirationDate");
    m_documentUrlExpirationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue SupplementalDocument::Jsonize() const {
  JsonValue payload;

  if (m_documentUrlHasBeenSet) {
    payload.WithString("DocumentUrl", m_documentUrl);
  }

  if (m_documentUrlExpirationDateHasBeenSet) {
    payload.WithDouble("DocumentUrlExpirationDate", m_documentUrlExpirationDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
