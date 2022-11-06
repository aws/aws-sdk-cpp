/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ListActivatedRulesInRuleGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListActivatedRulesInRuleGroupResult::ListActivatedRulesInRuleGroupResult()
{
}

ListActivatedRulesInRuleGroupResult::ListActivatedRulesInRuleGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListActivatedRulesInRuleGroupResult& ListActivatedRulesInRuleGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("ActivatedRules"))
  {
    Aws::Utils::Array<JsonView> activatedRulesJsonList = jsonValue.GetArray("ActivatedRules");
    for(unsigned activatedRulesIndex = 0; activatedRulesIndex < activatedRulesJsonList.GetLength(); ++activatedRulesIndex)
    {
      m_activatedRules.push_back(activatedRulesJsonList[activatedRulesIndex].AsObject());
    }
  }



  return *this;
}
