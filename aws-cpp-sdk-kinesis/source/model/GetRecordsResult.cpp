﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/GetRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecordsResult::GetRecordsResult() : 
    m_millisBehindLatest(0)
{
}

GetRecordsResult::GetRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_millisBehindLatest(0)
{
  *this = result;
}

GetRecordsResult& GetRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Records"))
  {
    Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextShardIterator"))
  {
    m_nextShardIterator = jsonValue.GetString("NextShardIterator");

  }

  if(jsonValue.ValueExists("MillisBehindLatest"))
  {
    m_millisBehindLatest = jsonValue.GetInt64("MillisBehindLatest");

  }

  if(jsonValue.ValueExists("ChildShards"))
  {
    Array<JsonView> childShardsJsonList = jsonValue.GetArray("ChildShards");
    for(unsigned childShardsIndex = 0; childShardsIndex < childShardsJsonList.GetLength(); ++childShardsIndex)
    {
      m_childShards.push_back(childShardsJsonList[childShardsIndex].AsObject());
    }
  }



  return *this;
}
