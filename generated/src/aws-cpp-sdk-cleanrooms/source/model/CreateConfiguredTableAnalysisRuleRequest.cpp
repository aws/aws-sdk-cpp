/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateConfiguredTableAnalysisRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfiguredTableAnalysisRuleRequest::CreateConfiguredTableAnalysisRuleRequest() : 
    m_configuredTableIdentifierHasBeenSet(false),
    m_analysisRuleType(ConfiguredTableAnalysisRuleType::NOT_SET),
    m_analysisRuleTypeHasBeenSet(false),
    m_analysisRulePolicyHasBeenSet(false)
{
}

Aws::String CreateConfiguredTableAnalysisRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analysisRuleTypeHasBeenSet)
  {
   payload.WithString("analysisRuleType", ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(m_analysisRuleType));
  }

  if(m_analysisRulePolicyHasBeenSet)
  {
   payload.WithObject("analysisRulePolicy", m_analysisRulePolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}




