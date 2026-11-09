/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CaseIdentifierUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

CaseIdentifierUnion::CaseIdentifierUnion(JsonView jsonValue) { *this = jsonValue; }

CaseIdentifierUnion& CaseIdentifierUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseId")) {
    m_caseId = jsonValue.GetString("caseId");
    m_caseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("referenceId")) {
    m_referenceId = jsonValue.GetString("referenceId");
    m_referenceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseIdentifierUnion::Jsonize() const {
  JsonValue payload;

  if (m_caseIdHasBeenSet) {
    payload.WithString("caseId", m_caseId);
  }

  if (m_referenceIdHasBeenSet) {
    payload.WithString("referenceId", m_referenceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
