﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/BatchUpdateDetectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUpdateDetectorResult::BatchUpdateDetectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchUpdateDetectorResult& BatchUpdateDetectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchUpdateDetectorErrorEntries"))
  {
    Aws::Utils::Array<JsonView> batchUpdateDetectorErrorEntriesJsonList = jsonValue.GetArray("batchUpdateDetectorErrorEntries");
    for(unsigned batchUpdateDetectorErrorEntriesIndex = 0; batchUpdateDetectorErrorEntriesIndex < batchUpdateDetectorErrorEntriesJsonList.GetLength(); ++batchUpdateDetectorErrorEntriesIndex)
    {
      m_batchUpdateDetectorErrorEntries.push_back(batchUpdateDetectorErrorEntriesJsonList[batchUpdateDetectorErrorEntriesIndex].AsObject());
    }
    m_batchUpdateDetectorErrorEntriesHasBeenSet = true;
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
