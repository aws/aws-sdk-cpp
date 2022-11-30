/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListDataQualityRulesetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataQualityRulesetsResult::ListDataQualityRulesetsResult()
{
}

ListDataQualityRulesetsResult::ListDataQualityRulesetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataQualityRulesetsResult& ListDataQualityRulesetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Rulesets"))
  {
    Aws::Utils::Array<JsonView> rulesetsJsonList = jsonValue.GetArray("Rulesets");
    for(unsigned rulesetsIndex = 0; rulesetsIndex < rulesetsJsonList.GetLength(); ++rulesetsIndex)
    {
      m_rulesets.push_back(rulesetsJsonList[rulesetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
