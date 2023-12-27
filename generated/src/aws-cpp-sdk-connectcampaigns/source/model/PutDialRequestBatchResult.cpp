﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/PutDialRequestBatchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutDialRequestBatchResult::PutDialRequestBatchResult()
{
}

PutDialRequestBatchResult::PutDialRequestBatchResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutDialRequestBatchResult& PutDialRequestBatchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("successfulRequests"))
  {
    Aws::Utils::Array<JsonView> successfulRequestsJsonList = jsonValue.GetArray("successfulRequests");
    for(unsigned successfulRequestsIndex = 0; successfulRequestsIndex < successfulRequestsJsonList.GetLength(); ++successfulRequestsIndex)
    {
      m_successfulRequests.push_back(successfulRequestsJsonList[successfulRequestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failedRequests"))
  {
    Aws::Utils::Array<JsonView> failedRequestsJsonList = jsonValue.GetArray("failedRequests");
    for(unsigned failedRequestsIndex = 0; failedRequestsIndex < failedRequestsJsonList.GetLength(); ++failedRequestsIndex)
    {
      m_failedRequests.push_back(failedRequestsJsonList[failedRequestsIndex].AsObject());
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
