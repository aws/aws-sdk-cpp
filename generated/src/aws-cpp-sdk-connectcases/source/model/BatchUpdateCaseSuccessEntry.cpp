/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchUpdateCaseSuccessEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

BatchUpdateCaseSuccessEntry::BatchUpdateCaseSuccessEntry(JsonView jsonValue) { *this = jsonValue; }

BatchUpdateCaseSuccessEntry& BatchUpdateCaseSuccessEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseIdentifier")) {
    m_caseIdentifier = jsonValue.GetObject("caseIdentifier");
    m_caseIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateCaseSuccessEntry::Jsonize() const {
  JsonValue payload;

  if (m_caseIdentifierHasBeenSet) {
    payload.WithObject("caseIdentifier", m_caseIdentifier.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
