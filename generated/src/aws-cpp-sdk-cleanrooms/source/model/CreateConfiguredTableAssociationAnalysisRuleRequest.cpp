/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfiguredTableAssociationAnalysisRuleRequest::CreateConfiguredTableAssociationAnalysisRuleRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_configuredTableAssociationIdentifierHasBeenSet(false),
    m_analysisRuleType(ConfiguredTableAssociationAnalysisRuleType::NOT_SET),
    m_analysisRuleTypeHasBeenSet(false),
    m_analysisRulePolicyHasBeenSet(false)
{
}

Aws::String CreateConfiguredTableAssociationAnalysisRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analysisRuleTypeHasBeenSet)
  {
   payload.WithString("analysisRuleType", ConfiguredTableAssociationAnalysisRuleTypeMapper::GetNameForConfiguredTableAssociationAnalysisRuleType(m_analysisRuleType));
  }

  if(m_analysisRulePolicyHasBeenSet)
  {
   payload.WithObject("analysisRulePolicy", m_analysisRulePolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}




