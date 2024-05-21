/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetRuleSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRuleSetResult::GetRuleSetResult()
{
}

GetRuleSetResult::GetRuleSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRuleSetResult& GetRuleSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

  }

  if(jsonValue.ValueExists("LastModificationDate"))
  {
    m_lastModificationDate = jsonValue.GetDouble("LastModificationDate");

  }

  if(jsonValue.ValueExists("RuleSetArn"))
  {
    m_ruleSetArn = jsonValue.GetString("RuleSetArn");

  }

  if(jsonValue.ValueExists("RuleSetId"))
  {
    m_ruleSetId = jsonValue.GetString("RuleSetId");

  }

  if(jsonValue.ValueExists("RuleSetName"))
  {
    m_ruleSetName = jsonValue.GetString("RuleSetName");

  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
