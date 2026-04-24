/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CertificateLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CertificateLocation::CertificateLocation(JsonView jsonValue) { *this = jsonValue; }

CertificateLocation& CertificateLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("secretsManager")) {
    m_secretsManager = jsonValue.GetObject("secretsManager");
    m_secretsManagerHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateLocation::Jsonize() const {
  JsonValue payload;

  if (m_secretsManagerHasBeenSet) {
    payload.WithObject("secretsManager", m_secretsManager.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
