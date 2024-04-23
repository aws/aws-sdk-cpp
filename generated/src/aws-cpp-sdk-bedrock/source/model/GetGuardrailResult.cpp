/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetGuardrailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGuardrailResult::GetGuardrailResult() : 
    m_status(GuardrailStatus::NOT_SET)
{
}

GetGuardrailResult::GetGuardrailResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(GuardrailStatus::NOT_SET)
{
  *this = result;
}

GetGuardrailResult& GetGuardrailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("guardrailId"))
  {
    m_guardrailId = jsonValue.GetString("guardrailId");

  }

  if(jsonValue.ValueExists("guardrailArn"))
  {
    m_guardrailArn = jsonValue.GetString("guardrailArn");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = GuardrailStatusMapper::GetGuardrailStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("topicPolicy"))
  {
    m_topicPolicy = jsonValue.GetObject("topicPolicy");

  }

  if(jsonValue.ValueExists("contentPolicy"))
  {
    m_contentPolicy = jsonValue.GetObject("contentPolicy");

  }

  if(jsonValue.ValueExists("wordPolicy"))
  {
    m_wordPolicy = jsonValue.GetObject("wordPolicy");

  }

  if(jsonValue.ValueExists("sensitiveInformationPolicy"))
  {
    m_sensitiveInformationPolicy = jsonValue.GetObject("sensitiveInformationPolicy");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("statusReasons"))
  {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
    {
      m_statusReasons.push_back(statusReasonsJsonList[statusReasonsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("failureRecommendations"))
  {
    Aws::Utils::Array<JsonView> failureRecommendationsJsonList = jsonValue.GetArray("failureRecommendations");
    for(unsigned failureRecommendationsIndex = 0; failureRecommendationsIndex < failureRecommendationsJsonList.GetLength(); ++failureRecommendationsIndex)
    {
      m_failureRecommendations.push_back(failureRecommendationsJsonList[failureRecommendationsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("blockedInputMessaging"))
  {
    m_blockedInputMessaging = jsonValue.GetString("blockedInputMessaging");

  }

  if(jsonValue.ValueExists("blockedOutputsMessaging"))
  {
    m_blockedOutputsMessaging = jsonValue.GetString("blockedOutputsMessaging");

  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
