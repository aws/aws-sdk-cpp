﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/PreviewAgentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PreviewAgentsResult::PreviewAgentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PreviewAgentsResult& PreviewAgentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentPreviews"))
  {
    Aws::Utils::Array<JsonView> agentPreviewsJsonList = jsonValue.GetArray("agentPreviews");
    for(unsigned agentPreviewsIndex = 0; agentPreviewsIndex < agentPreviewsJsonList.GetLength(); ++agentPreviewsIndex)
    {
      m_agentPreviews.push_back(agentPreviewsJsonList[agentPreviewsIndex].AsObject());
    }
    m_agentPreviewsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
