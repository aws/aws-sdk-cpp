/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/PutFeedbackResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutFeedbackResult::PutFeedbackResult() : 
    m_targetType(TargetType::NOT_SET)
{
}

PutFeedbackResult::PutFeedbackResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_targetType(TargetType::NOT_SET)
{
  *this = result;
}

PutFeedbackResult& PutFeedbackResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assistantArn"))
  {
    m_assistantArn = jsonValue.GetString("assistantArn");

  }

  if(jsonValue.ValueExists("assistantId"))
  {
    m_assistantId = jsonValue.GetString("assistantId");

  }

  if(jsonValue.ValueExists("feedback"))
  {
    m_feedback = jsonValue.GetObject("feedback");

  }

  if(jsonValue.ValueExists("targetId"))
  {
    m_targetId = jsonValue.GetString("targetId");

  }

  if(jsonValue.ValueExists("targetType"))
  {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("targetType"));

  }



  return *this;
}
