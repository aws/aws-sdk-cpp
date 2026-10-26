/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ValidationProofCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ValidationProofCode::ValidationProofCode(JsonView jsonValue) { *this = jsonValue; }

ValidationProofCode& ValidationProofCode::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("proofCode")) {
    Aws::Utils::Array<JsonView> proofCodeJsonList = jsonValue.GetArray("proofCode");
    for (unsigned proofCodeIndex = 0; proofCodeIndex < proofCodeJsonList.GetLength(); ++proofCodeIndex) {
      m_proofCode.push_back(proofCodeJsonList[proofCodeIndex].AsObject());
    }
    m_proofCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationProofCode::Jsonize() const {
  JsonValue payload;

  if (m_proofCodeHasBeenSet) {
    Aws::Utils::Array<JsonValue> proofCodeJsonList(m_proofCode.size());
    for (unsigned proofCodeIndex = 0; proofCodeIndex < proofCodeJsonList.GetLength(); ++proofCodeIndex) {
      proofCodeJsonList[proofCodeIndex].AsObject(m_proofCode[proofCodeIndex].Jsonize());
    }
    payload.WithArray("proofCode", std::move(proofCodeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
