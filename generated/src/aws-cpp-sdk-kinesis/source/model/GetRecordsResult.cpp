﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/GetRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecordsResult::GetRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecordsResult& GetRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
    m_recordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextShardIterator"))
  {
    m_nextShardIterator = jsonValue.GetString("NextShardIterator");
    m_nextShardIteratorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MillisBehindLatest"))
  {
    m_millisBehindLatest = jsonValue.GetInt64("MillisBehindLatest");
    m_millisBehindLatestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChildShards"))
  {
    Aws::Utils::Array<JsonView> childShardsJsonList = jsonValue.GetArray("ChildShards");
    for(unsigned childShardsIndex = 0; childShardsIndex < childShardsJsonList.GetLength(); ++childShardsIndex)
    {
      m_childShards.push_back(childShardsJsonList[childShardsIndex].AsObject());
    }
    m_childShardsHasBeenSet = true;
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
