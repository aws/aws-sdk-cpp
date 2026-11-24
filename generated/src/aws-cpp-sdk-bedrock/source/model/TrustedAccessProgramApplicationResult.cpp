/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrustedAccessProgramApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

TrustedAccessProgramApplicationResult::TrustedAccessProgramApplicationResult(JsonView jsonValue) { *this = jsonValue; }

TrustedAccessProgramApplicationResult& TrustedAccessProgramApplicationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("providerHandoff")) {
    m_providerHandoff = jsonValue.GetObject("providerHandoff");
    m_providerHandoffHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustedAccessProgramApplicationResult::Jsonize() const {
  JsonValue payload;

  if (m_providerHandoffHasBeenSet) {
    payload.WithObject("providerHandoff", m_providerHandoff.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
