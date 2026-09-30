/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CertificateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CertificateConfiguration::CertificateConfiguration(JsonView jsonValue) { *this = jsonValue; }

CertificateConfiguration& CertificateConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3")) {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretsManager")) {
    m_secretsManager = jsonValue.GetObject("secretsManager");
    m_secretsManagerHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3HasBeenSet) {
    payload.WithObject("s3", m_s3.Jsonize());
  }

  if (m_secretsManagerHasBeenSet) {
    payload.WithObject("secretsManager", m_secretsManager.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
