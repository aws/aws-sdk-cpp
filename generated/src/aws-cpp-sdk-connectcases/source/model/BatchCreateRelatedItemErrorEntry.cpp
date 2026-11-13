/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchCreateRelatedItemErrorEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

BatchCreateRelatedItemErrorEntry::BatchCreateRelatedItemErrorEntry(JsonView jsonValue) { *this = jsonValue; }

BatchCreateRelatedItemErrorEntry& BatchCreateRelatedItemErrorEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseIdentifier")) {
    m_caseIdentifier = jsonValue.GetObject("caseIdentifier");
    m_caseIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateRelatedItemErrorEntry::Jsonize() const {
  JsonValue payload;

  if (m_caseIdentifierHasBeenSet) {
    payload.WithObject("caseIdentifier", m_caseIdentifier.Jsonize());
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
