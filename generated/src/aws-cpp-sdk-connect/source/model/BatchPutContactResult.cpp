/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BatchPutContactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchPutContactResult::BatchPutContactResult()
{
}

BatchPutContactResult::BatchPutContactResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchPutContactResult& BatchPutContactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SuccessfulRequestList"))
  {
    Aws::Utils::Array<JsonView> successfulRequestListJsonList = jsonValue.GetArray("SuccessfulRequestList");
    for(unsigned successfulRequestListIndex = 0; successfulRequestListIndex < successfulRequestListJsonList.GetLength(); ++successfulRequestListIndex)
    {
      m_successfulRequestList.push_back(successfulRequestListJsonList[successfulRequestListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FailedRequestList"))
  {
    Aws::Utils::Array<JsonView> failedRequestListJsonList = jsonValue.GetArray("FailedRequestList");
    for(unsigned failedRequestListIndex = 0; failedRequestListIndex < failedRequestListJsonList.GetLength(); ++failedRequestListIndex)
    {
      m_failedRequestList.push_back(failedRequestListJsonList[failedRequestListIndex].AsObject());
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
