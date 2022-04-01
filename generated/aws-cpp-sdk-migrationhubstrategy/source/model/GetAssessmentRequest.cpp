/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAssessmentRequest::GetAssessmentRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetAssessmentRequest::SerializePayload() const
{
  return {};
}




