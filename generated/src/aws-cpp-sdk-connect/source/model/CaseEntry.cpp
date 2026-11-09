/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CaseEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

CaseEntry::CaseEntry(JsonView jsonValue) { *this = jsonValue; }

CaseEntry& CaseEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CaseId")) {
    m_caseId = jsonValue.GetString("CaseId");
    m_caseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaseReferenceNumber")) {
    m_caseReferenceNumber = jsonValue.GetString("CaseReferenceNumber");
    m_caseReferenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseEntry::Jsonize() const {
  JsonValue payload;

  if (m_caseIdHasBeenSet) {
    payload.WithString("CaseId", m_caseId);
  }

  if (m_caseReferenceNumberHasBeenSet) {
    payload.WithString("CaseReferenceNumber", m_caseReferenceNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
