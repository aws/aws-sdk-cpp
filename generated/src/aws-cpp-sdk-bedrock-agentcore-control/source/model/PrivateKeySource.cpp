/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PrivateKeySource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PrivateKeySource::PrivateKeySource(JsonView jsonValue) { *this = jsonValue; }

PrivateKeySource& PrivateKeySource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kmsKeySource")) {
    m_kmsKeySource = jsonValue.GetObject("kmsKeySource");
    m_kmsKeySourceHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateKeySource::Jsonize() const {
  JsonValue payload;

  if (m_kmsKeySourceHasBeenSet) {
    payload.WithObject("kmsKeySource", m_kmsKeySource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
