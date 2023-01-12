/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/UpdateConfiguredTableAnalysisRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfiguredTableAnalysisRuleRequest::UpdateConfiguredTableAnalysisRuleRequest() : 
    m_configuredTableIdentifierHasBeenSet(false),
    m_analysisRuleType(ConfiguredTableAnalysisRuleType::NOT_SET),
    m_analysisRuleTypeHasBeenSet(false),
    m_analysisRulePolicyHasBeenSet(false)
{
}

Aws::String UpdateConfiguredTableAnalysisRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analysisRulePolicyHasBeenSet)
  {
   payload.WithObject("analysisRulePolicy", m_analysisRulePolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}




