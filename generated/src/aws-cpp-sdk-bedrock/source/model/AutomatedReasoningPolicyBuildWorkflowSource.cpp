/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowSource.h>
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

AutomatedReasoningPolicyBuildWorkflowSource::AutomatedReasoningPolicyBuildWorkflowSource(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildWorkflowSource& AutomatedReasoningPolicyBuildWorkflowSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyDefinition"))
  {
    m_policyDefinition = jsonValue.GetObject("policyDefinition");
    m_policyDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowContent"))
  {
    m_workflowContent = jsonValue.GetObject("workflowContent");
    m_workflowContentHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildWorkflowSource::Jsonize() const
{
  JsonValue payload;

  if(m_policyDefinitionHasBeenSet)
  {
   payload.WithObject("policyDefinition", m_policyDefinition.Jsonize());

  }

  if(m_workflowContentHasBeenSet)
  {
   payload.WithObject("workflowContent", m_workflowContent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
