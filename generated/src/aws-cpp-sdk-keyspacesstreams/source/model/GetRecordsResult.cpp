/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/GetRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KeyspacesStreams::Model;
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
  if(jsonValue.ValueExists("changeRecords"))
  {
    Aws::Utils::Array<JsonView> changeRecordsJsonList = jsonValue.GetArray("changeRecords");
    for(unsigned changeRecordsIndex = 0; changeRecordsIndex < changeRecordsJsonList.GetLength(); ++changeRecordsIndex)
    {
      m_changeRecords.push_back(changeRecordsJsonList[changeRecordsIndex].AsObject());
    }
    m_changeRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextShardIterator"))
  {
    m_nextShardIterator = jsonValue.GetString("nextShardIterator");
    m_nextShardIteratorHasBeenSet = true;
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
