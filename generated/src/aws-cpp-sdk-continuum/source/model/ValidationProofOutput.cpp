/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ValidationProofOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ValidationProofOutput::ValidationProofOutput(JsonView jsonValue) { *this = jsonValue; }

ValidationProofOutput& ValidationProofOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("consoleOutput")) {
    m_consoleOutput = jsonValue.GetString("consoleOutput");
    m_consoleOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationProofOutput::Jsonize() const {
  JsonValue payload;

  if (m_consoleOutputHasBeenSet) {
    payload.WithString("consoleOutput", m_consoleOutput);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
