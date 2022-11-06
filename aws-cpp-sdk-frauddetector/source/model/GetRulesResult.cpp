/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRulesResult::GetRulesResult()
{
}

GetRulesResult::GetRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRulesResult& GetRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ruleDetails"))
  {
    Aws::Utils::Array<JsonView> ruleDetailsJsonList = jsonValue.GetArray("ruleDetails");
    for(unsigned ruleDetailsIndex = 0; ruleDetailsIndex < ruleDetailsJsonList.GetLength(); ++ruleDetailsIndex)
    {
      m_ruleDetails.push_back(ruleDetailsJsonList[ruleDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
