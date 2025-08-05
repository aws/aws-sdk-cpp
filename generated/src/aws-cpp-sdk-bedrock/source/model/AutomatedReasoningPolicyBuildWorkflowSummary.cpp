/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowSummary.h>
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

AutomatedReasoningPolicyBuildWorkflowSummary::AutomatedReasoningPolicyBuildWorkflowSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildWorkflowSummary& AutomatedReasoningPolicyBuildWorkflowSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildWorkflowId"))
  {
    m_buildWorkflowId = jsonValue.GetString("buildWorkflowId");
    m_buildWorkflowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AutomatedReasoningPolicyBuildWorkflowStatusMapper::GetAutomatedReasoningPolicyBuildWorkflowStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildWorkflowType"))
  {
    m_buildWorkflowType = AutomatedReasoningPolicyBuildWorkflowTypeMapper::GetAutomatedReasoningPolicyBuildWorkflowTypeForName(jsonValue.GetString("buildWorkflowType"));
    m_buildWorkflowTypeHasBeenSet = true;
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
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildWorkflowSummary::Jsonize() const
{
  JsonValue payload;

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_buildWorkflowIdHasBeenSet)
  {
   payload.WithString("buildWorkflowId", m_buildWorkflowId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AutomatedReasoningPolicyBuildWorkflowStatusMapper::GetNameForAutomatedReasoningPolicyBuildWorkflowStatus(m_status));
  }

  if(m_buildWorkflowTypeHasBeenSet)
  {
   payload.WithString("buildWorkflowType", AutomatedReasoningPolicyBuildWorkflowTypeMapper::GetNameForAutomatedReasoningPolicyBuildWorkflowType(m_buildWorkflowType));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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
