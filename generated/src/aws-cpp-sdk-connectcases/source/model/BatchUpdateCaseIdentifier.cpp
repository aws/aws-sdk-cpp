/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchUpdateCaseIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

BatchUpdateCaseIdentifier::BatchUpdateCaseIdentifier(JsonView jsonValue) { *this = jsonValue; }

BatchUpdateCaseIdentifier& BatchUpdateCaseIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseIdentifier")) {
    m_caseIdentifier = jsonValue.GetObject("caseIdentifier");
    m_caseIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateCaseIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_caseIdentifierHasBeenSet) {
    payload.WithObject("caseIdentifier", m_caseIdentifier.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
