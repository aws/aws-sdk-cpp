/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/BedrockGuardrail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

BedrockGuardrail::BedrockGuardrail(JsonView jsonValue) { *this = jsonValue; }

BedrockGuardrail& BedrockGuardrail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockGuardrail::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
