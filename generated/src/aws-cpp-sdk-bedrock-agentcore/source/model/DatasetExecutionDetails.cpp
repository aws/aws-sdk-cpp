/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/DatasetExecutionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

DatasetExecutionDetails::DatasetExecutionDetails(JsonView jsonValue) { *this = jsonValue; }

DatasetExecutionDetails& DatasetExecutionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dataset")) {
    m_dataset = jsonValue.GetObject("dataset");
    m_datasetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentInvocation")) {
    m_agentInvocation = jsonValue.GetObject("agentInvocation");
    m_agentInvocationHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetExecutionDetails::Jsonize() const {
  JsonValue payload;

  if (m_datasetHasBeenSet) {
    payload.WithObject("dataset", m_dataset.Jsonize());
  }

  if (m_agentInvocationHasBeenSet) {
    payload.WithObject("agentInvocation", m_agentInvocation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
