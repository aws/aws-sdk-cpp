/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DeleteConfiguredTableAnalysisRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConfiguredTableAnalysisRuleRequest::DeleteConfiguredTableAnalysisRuleRequest() : 
    m_configuredTableIdentifierHasBeenSet(false),
    m_analysisRuleType(ConfiguredTableAnalysisRuleType::NOT_SET),
    m_analysisRuleTypeHasBeenSet(false)
{
}

Aws::String DeleteConfiguredTableAnalysisRuleRequest::SerializePayload() const
{
  return {};
}




