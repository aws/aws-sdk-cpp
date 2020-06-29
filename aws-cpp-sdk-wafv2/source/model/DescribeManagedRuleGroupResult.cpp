/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DescribeManagedRuleGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeManagedRuleGroupResult::DescribeManagedRuleGroupResult() : 
    m_capacity(0)
{
}

DescribeManagedRuleGroupResult::DescribeManagedRuleGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_capacity(0)
{
  *this = result;
}

DescribeManagedRuleGroupResult& DescribeManagedRuleGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInt64("Capacity");

  }

  if(jsonValue.ValueExists("Rules"))
  {
    Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
  }



  return *this;
}
