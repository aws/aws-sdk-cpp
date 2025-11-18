/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyGeneratedTestCases.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyGeneratedTestCases::AutomatedReasoningPolicyGeneratedTestCases(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyGeneratedTestCases& AutomatedReasoningPolicyGeneratedTestCases::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("generatedTestCases")) {
    Aws::Utils::Array<JsonView> generatedTestCasesJsonList = jsonValue.GetArray("generatedTestCases");
    for (unsigned generatedTestCasesIndex = 0; generatedTestCasesIndex < generatedTestCasesJsonList.GetLength();
         ++generatedTestCasesIndex) {
      m_generatedTestCases.push_back(generatedTestCasesJsonList[generatedTestCasesIndex].AsObject());
    }
    m_generatedTestCasesHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyGeneratedTestCases::Jsonize() const {
  JsonValue payload;

  if (m_generatedTestCasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> generatedTestCasesJsonList(m_generatedTestCases.size());
    for (unsigned generatedTestCasesIndex = 0; generatedTestCasesIndex < generatedTestCasesJsonList.GetLength();
         ++generatedTestCasesIndex) {
      generatedTestCasesJsonList[generatedTestCasesIndex].AsObject(m_generatedTestCases[generatedTestCasesIndex].Jsonize());
    }
    payload.WithArray("generatedTestCases", std::move(generatedTestCasesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
