﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/PutRecordBatchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutRecordBatchResult::PutRecordBatchResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutRecordBatchResult& PutRecordBatchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedPutCount"))
  {
    m_failedPutCount = jsonValue.GetInteger("FailedPutCount");
    m_failedPutCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");
    m_encryptedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestResponses"))
  {
    Aws::Utils::Array<JsonView> requestResponsesJsonList = jsonValue.GetArray("RequestResponses");
    for(unsigned requestResponsesIndex = 0; requestResponsesIndex < requestResponsesJsonList.GetLength(); ++requestResponsesIndex)
    {
      m_requestResponses.push_back(requestResponsesJsonList[requestResponsesIndex].AsObject());
    }
    m_requestResponsesHasBeenSet = true;
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
