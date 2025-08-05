/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyTestCase.h>
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

AutomatedReasoningPolicyTestCase::AutomatedReasoningPolicyTestCase(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyTestCase& AutomatedReasoningPolicyTestCase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testCaseId"))
  {
    m_testCaseId = jsonValue.GetString("testCaseId");
    m_testCaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardContent"))
  {
    m_guardContent = jsonValue.GetString("guardContent");
    m_guardContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryContent"))
  {
    m_queryContent = jsonValue.GetString("queryContent");
    m_queryContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expectedAggregatedFindingsResult"))
  {
    m_expectedAggregatedFindingsResult = AutomatedReasoningCheckResultMapper::GetAutomatedReasoningCheckResultForName(jsonValue.GetString("expectedAggregatedFindingsResult"));
    m_expectedAggregatedFindingsResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("confidenceThreshold"))
  {
    m_confidenceThreshold = jsonValue.GetDouble("confidenceThreshold");
    m_confidenceThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyTestCase::Jsonize() const
{
  JsonValue payload;

  if(m_testCaseIdHasBeenSet)
  {
   payload.WithString("testCaseId", m_testCaseId);

  }

  if(m_guardContentHasBeenSet)
  {
   payload.WithString("guardContent", m_guardContent);

  }

  if(m_queryContentHasBeenSet)
  {
   payload.WithString("queryContent", m_queryContent);

  }

  if(m_expectedAggregatedFindingsResultHasBeenSet)
  {
   payload.WithString("expectedAggregatedFindingsResult", AutomatedReasoningCheckResultMapper::GetNameForAutomatedReasoningCheckResult(m_expectedAggregatedFindingsResult));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_confidenceThresholdHasBeenSet)
  {
   payload.WithDouble("confidenceThreshold", m_confidenceThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
