/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildResultAssets.h>
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

AutomatedReasoningPolicyBuildResultAssets::AutomatedReasoningPolicyBuildResultAssets(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildResultAssets& AutomatedReasoningPolicyBuildResultAssets::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyDefinition"))
  {
    m_policyDefinition = jsonValue.GetObject("policyDefinition");
    m_policyDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qualityReport"))
  {
    m_qualityReport = jsonValue.GetObject("qualityReport");
    m_qualityReportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildLog"))
  {
    m_buildLog = jsonValue.GetObject("buildLog");
    m_buildLogHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildResultAssets::Jsonize() const
{
  JsonValue payload;

  if(m_policyDefinitionHasBeenSet)
  {
   payload.WithObject("policyDefinition", m_policyDefinition.Jsonize());

  }

  if(m_qualityReportHasBeenSet)
  {
   payload.WithObject("qualityReport", m_qualityReport.Jsonize());

  }

  if(m_buildLogHasBeenSet)
  {
   payload.WithObject("buildLog", m_buildLog.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
