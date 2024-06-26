﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetTrafficPolicyResult.h>
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

GetTrafficPolicyResult::GetTrafficPolicyResult() : 
    m_defaultAction(AcceptAction::NOT_SET),
    m_maxMessageSizeBytes(0)
{
}

GetTrafficPolicyResult::GetTrafficPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetTrafficPolicyResult()
{
  *this = result;
}

GetTrafficPolicyResult& GetTrafficPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = AcceptActionMapper::GetAcceptActionForName(jsonValue.GetString("DefaultAction"));

  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

  }

  if(jsonValue.ValueExists("MaxMessageSizeBytes"))
  {
    m_maxMessageSizeBytes = jsonValue.GetInteger("MaxMessageSizeBytes");

  }

  if(jsonValue.ValueExists("PolicyStatements"))
  {
    Aws::Utils::Array<JsonView> policyStatementsJsonList = jsonValue.GetArray("PolicyStatements");
    for(unsigned policyStatementsIndex = 0; policyStatementsIndex < policyStatementsJsonList.GetLength(); ++policyStatementsIndex)
    {
      m_policyStatements.push_back(policyStatementsJsonList[policyStatementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TrafficPolicyArn"))
  {
    m_trafficPolicyArn = jsonValue.GetString("TrafficPolicyArn");

  }

  if(jsonValue.ValueExists("TrafficPolicyId"))
  {
    m_trafficPolicyId = jsonValue.GetString("TrafficPolicyId");

  }

  if(jsonValue.ValueExists("TrafficPolicyName"))
  {
    m_trafficPolicyName = jsonValue.GetString("TrafficPolicyName");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
