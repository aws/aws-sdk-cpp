/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/GetConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConfiguredTableAssociationAnalysisRuleRequest::GetConfiguredTableAssociationAnalysisRuleRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_configuredTableAssociationIdentifierHasBeenSet(false),
    m_analysisRuleType(ConfiguredTableAssociationAnalysisRuleType::NOT_SET),
    m_analysisRuleTypeHasBeenSet(false)
{
}

Aws::String GetConfiguredTableAssociationAnalysisRuleRequest::SerializePayload() const
{
  return {};
}




