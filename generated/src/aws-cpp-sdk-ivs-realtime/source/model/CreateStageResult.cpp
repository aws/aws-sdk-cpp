/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/CreateStageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateStageResult::CreateStageResult()
{
}

CreateStageResult::CreateStageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateStageResult& CreateStageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("participantTokens"))
  {
    Aws::Utils::Array<JsonView> participantTokensJsonList = jsonValue.GetArray("participantTokens");
    for(unsigned participantTokensIndex = 0; participantTokensIndex < participantTokensJsonList.GetLength(); ++participantTokensIndex)
    {
      m_participantTokens.push_back(participantTokensJsonList[participantTokensIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetObject("stage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
