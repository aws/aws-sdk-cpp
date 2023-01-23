/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetComplianceSummaryByConfigRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComplianceSummaryByConfigRuleResult::GetComplianceSummaryByConfigRuleResult()
{
}

GetComplianceSummaryByConfigRuleResult::GetComplianceSummaryByConfigRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetComplianceSummaryByConfigRuleResult& GetComplianceSummaryByConfigRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComplianceSummary"))
  {
    m_complianceSummary = jsonValue.GetObject("ComplianceSummary");

  }



  return *this;
}
