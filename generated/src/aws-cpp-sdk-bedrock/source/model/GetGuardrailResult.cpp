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

GetGuardrailResult::GetGuardrailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetGuardrailResult& GetGuardrailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailId"))
  {
    m_guardrailId = jsonValue.GetString("guardrailId");
    m_guardrailIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailArn"))
  {
    m_guardrailArn = jsonValue.GetString("guardrailArn");
    m_guardrailArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = GuardrailStatusMapper::GetGuardrailStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("topicPolicy"))
  {
    m_topicPolicy = jsonValue.GetObject("topicPolicy");
    m_topicPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentPolicy"))
  {
    m_contentPolicy = jsonValue.GetObject("contentPolicy");
    m_contentPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wordPolicy"))
  {
    m_wordPolicy = jsonValue.GetObject("wordPolicy");
    m_wordPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitiveInformationPolicy"))
  {
    m_sensitiveInformationPolicy = jsonValue.GetObject("sensitiveInformationPolicy");
    m_sensitiveInformationPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contextualGroundingPolicy"))
  {
    m_contextualGroundingPolicy = jsonValue.GetObject("contextualGroundingPolicy");
    m_contextualGroundingPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("automatedReasoningPolicy"))
  {
    m_automatedReasoningPolicy = jsonValue.GetObject("automatedReasoningPolicy");
    m_automatedReasoningPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("crossRegionDetails"))
  {
    m_crossRegionDetails = jsonValue.GetObject("crossRegionDetails");
    m_crossRegionDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReasons"))
  {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
    {
      m_statusReasons.push_back(statusReasonsJsonList[statusReasonsIndex].AsString());
    }
    m_statusReasonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureRecommendations"))
  {
    Aws::Utils::Array<JsonView> failureRecommendationsJsonList = jsonValue.GetArray("failureRecommendations");
    for(unsigned failureRecommendationsIndex = 0; failureRecommendationsIndex < failureRecommendationsJsonList.GetLength(); ++failureRecommendationsIndex)
    {
      m_failureRecommendations.push_back(failureRecommendationsJsonList[failureRecommendationsIndex].AsString());
    }
    m_failureRecommendationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blockedInputMessaging"))
  {
    m_blockedInputMessaging = jsonValue.GetString("blockedInputMessaging");
    m_blockedInputMessagingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blockedOutputsMessaging"))
  {
    m_blockedOutputsMessaging = jsonValue.GetString("blockedOutputsMessaging");
    m_blockedOutputsMessagingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
