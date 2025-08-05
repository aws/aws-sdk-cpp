/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyTestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyTestResult::AutomatedReasoningPolicyTestResult(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyTestResult& AutomatedReasoningPolicyTestResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testCase"))
  {
    m_testCase = jsonValue.GetObject("testCase");
    m_testCaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testRunStatus"))
  {
    m_testRunStatus = AutomatedReasoningPolicyTestRunStatusMapper::GetAutomatedReasoningPolicyTestRunStatusForName(jsonValue.GetString("testRunStatus"));
    m_testRunStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testFindings"))
  {
    Aws::Utils::Array<JsonView> testFindingsJsonList = jsonValue.GetArray("testFindings");
    for(unsigned testFindingsIndex = 0; testFindingsIndex < testFindingsJsonList.GetLength(); ++testFindingsIndex)
    {
      m_testFindings.push_back(testFindingsJsonList[testFindingsIndex].AsObject());
    }
    m_testFindingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testRunResult"))
  {
    m_testRunResult = AutomatedReasoningPolicyTestRunResultMapper::GetAutomatedReasoningPolicyTestRunResultForName(jsonValue.GetString("testRunResult"));
    m_testRunResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregatedTestFindingsResult"))
  {
    m_aggregatedTestFindingsResult = AutomatedReasoningCheckResultMapper::GetAutomatedReasoningCheckResultForName(jsonValue.GetString("aggregatedTestFindingsResult"));
    m_aggregatedTestFindingsResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyTestResult::Jsonize() const
{
  JsonValue payload;

  if(m_testCaseHasBeenSet)
  {
   payload.WithObject("testCase", m_testCase.Jsonize());

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_testRunStatusHasBeenSet)
  {
   payload.WithString("testRunStatus", AutomatedReasoningPolicyTestRunStatusMapper::GetNameForAutomatedReasoningPolicyTestRunStatus(m_testRunStatus));
  }

  if(m_testFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> testFindingsJsonList(m_testFindings.size());
   for(unsigned testFindingsIndex = 0; testFindingsIndex < testFindingsJsonList.GetLength(); ++testFindingsIndex)
   {
     testFindingsJsonList[testFindingsIndex].AsObject(m_testFindings[testFindingsIndex].Jsonize());
   }
   payload.WithArray("testFindings", std::move(testFindingsJsonList));

  }

  if(m_testRunResultHasBeenSet)
  {
   payload.WithString("testRunResult", AutomatedReasoningPolicyTestRunResultMapper::GetNameForAutomatedReasoningPolicyTestRunResult(m_testRunResult));
  }

  if(m_aggregatedTestFindingsResultHasBeenSet)
  {
   payload.WithString("aggregatedTestFindingsResult", AutomatedReasoningCheckResultMapper::GetNameForAutomatedReasoningCheckResult(m_aggregatedTestFindingsResult));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
