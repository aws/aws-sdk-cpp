﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ListRuleGroupsNamespacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRuleGroupsNamespacesResult::ListRuleGroupsNamespacesResult()
{
}

ListRuleGroupsNamespacesResult::ListRuleGroupsNamespacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRuleGroupsNamespacesResult& ListRuleGroupsNamespacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ruleGroupsNamespaces"))
  {
    Aws::Utils::Array<JsonView> ruleGroupsNamespacesJsonList = jsonValue.GetArray("ruleGroupsNamespaces");
    for(unsigned ruleGroupsNamespacesIndex = 0; ruleGroupsNamespacesIndex < ruleGroupsNamespacesJsonList.GetLength(); ++ruleGroupsNamespacesIndex)
    {
      m_ruleGroupsNamespaces.push_back(ruleGroupsNamespacesJsonList[ruleGroupsNamespacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
