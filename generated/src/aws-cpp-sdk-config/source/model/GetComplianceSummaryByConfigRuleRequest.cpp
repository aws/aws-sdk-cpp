﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetComplianceSummaryByConfigRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetComplianceSummaryByConfigRuleRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetComplianceSummaryByConfigRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetComplianceSummaryByConfigRule"));
  return headers;

}




