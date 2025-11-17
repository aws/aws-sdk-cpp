/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyGeneratedTestCase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyGeneratedTestCase::AutomatedReasoningPolicyGeneratedTestCase(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyGeneratedTestCase& AutomatedReasoningPolicyGeneratedTestCase::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("queryContent")) {
    m_queryContent = jsonValue.GetString("queryContent");
    m_queryContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardContent")) {
    m_guardContent = jsonValue.GetString("guardContent");
    m_guardContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedAggregatedFindingsResult")) {
    m_expectedAggregatedFindingsResult = AutomatedReasoningCheckResultMapper::GetAutomatedReasoningCheckResultForName(
        jsonValue.GetString("expectedAggregatedFindingsResult"));
    m_expectedAggregatedFindingsResultHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyGeneratedTestCase::Jsonize() const {
  JsonValue payload;

  if (m_queryContentHasBeenSet) {
    payload.WithString("queryContent", m_queryContent);
  }

  if (m_guardContentHasBeenSet) {
    payload.WithString("guardContent", m_guardContent);
  }

  if (m_expectedAggregatedFindingsResultHasBeenSet) {
    payload.WithString("expectedAggregatedFindingsResult",
                       AutomatedReasoningCheckResultMapper::GetNameForAutomatedReasoningCheckResult(m_expectedAggregatedFindingsResult));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
