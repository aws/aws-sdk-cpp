/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InterceptorInputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InterceptorInputConfiguration::InterceptorInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

InterceptorInputConfiguration& InterceptorInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("passRequestHeaders")) {
    m_passRequestHeaders = jsonValue.GetBool("passRequestHeaders");
    m_passRequestHeadersHasBeenSet = true;
  }
  return *this;
}

JsonValue InterceptorInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_passRequestHeadersHasBeenSet) {
    payload.WithBool("passRequestHeaders", m_passRequestHeaders);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
