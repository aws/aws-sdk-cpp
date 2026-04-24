/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InterceptorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InterceptorConfiguration::InterceptorConfiguration(JsonView jsonValue) { *this = jsonValue; }

InterceptorConfiguration& InterceptorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lambda")) {
    m_lambda = jsonValue.GetObject("lambda");
    m_lambdaHasBeenSet = true;
  }
  return *this;
}

JsonValue InterceptorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_lambdaHasBeenSet) {
    payload.WithObject("lambda", m_lambda.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
