/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InlineExamplesSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InlineExamplesSource::InlineExamplesSource(JsonView jsonValue) { *this = jsonValue; }

InlineExamplesSource& InlineExamplesSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("examples")) {
    Aws::Utils::Array<JsonView> examplesJsonList = jsonValue.GetArray("examples");
    for (unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex) {
      m_examples.push_back(examplesJsonList[examplesIndex].AsObject());
    }
    m_examplesHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineExamplesSource::Jsonize() const {
  JsonValue payload;

  if (m_examplesHasBeenSet) {
    Aws::Utils::Array<JsonValue> examplesJsonList(m_examples.size());
    for (unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex) {
      examplesJsonList[examplesIndex].AsObject(m_examples[examplesIndex].View());
    }
    payload.WithArray("examples", std::move(examplesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
