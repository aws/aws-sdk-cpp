/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildStepContext.h>
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

AutomatedReasoningPolicyBuildStepContext::AutomatedReasoningPolicyBuildStepContext(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildStepContext& AutomatedReasoningPolicyBuildStepContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("planning"))
  {
    m_planning = jsonValue.GetObject("planning");
    m_planningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mutation"))
  {
    m_mutation = jsonValue.GetObject("mutation");
    m_mutationHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildStepContext::Jsonize() const
{
  JsonValue payload;

  if(m_planningHasBeenSet)
  {
   payload.WithObject("planning", m_planning.Jsonize());

  }

  if(m_mutationHasBeenSet)
  {
   payload.WithObject("mutation", m_mutation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
