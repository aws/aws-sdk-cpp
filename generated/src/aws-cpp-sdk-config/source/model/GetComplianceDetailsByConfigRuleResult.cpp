/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetComplianceDetailsByConfigRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComplianceDetailsByConfigRuleResult::GetComplianceDetailsByConfigRuleResult()
{
}

GetComplianceDetailsByConfigRuleResult::GetComplianceDetailsByConfigRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetComplianceDetailsByConfigRuleResult& GetComplianceDetailsByConfigRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EvaluationResults"))
  {
    Aws::Utils::Array<JsonView> evaluationResultsJsonList = jsonValue.GetArray("EvaluationResults");
    for(unsigned evaluationResultsIndex = 0; evaluationResultsIndex < evaluationResultsJsonList.GetLength(); ++evaluationResultsIndex)
    {
      m_evaluationResults.push_back(evaluationResultsJsonList[evaluationResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
