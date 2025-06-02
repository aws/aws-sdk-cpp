/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/GenerateMatchIdResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GenerateMatchIdResult::GenerateMatchIdResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GenerateMatchIdResult& GenerateMatchIdResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("matchGroups"))
  {
    Aws::Utils::Array<JsonView> matchGroupsJsonList = jsonValue.GetArray("matchGroups");
    for(unsigned matchGroupsIndex = 0; matchGroupsIndex < matchGroupsJsonList.GetLength(); ++matchGroupsIndex)
    {
      m_matchGroups.push_back(matchGroupsJsonList[matchGroupsIndex].AsObject());
    }
    m_matchGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failedRecords"))
  {
    Aws::Utils::Array<JsonView> failedRecordsJsonList = jsonValue.GetArray("failedRecords");
    for(unsigned failedRecordsIndex = 0; failedRecordsIndex < failedRecordsJsonList.GetLength(); ++failedRecordsIndex)
    {
      m_failedRecords.push_back(failedRecordsJsonList[failedRecordsIndex].AsObject());
    }
    m_failedRecordsHasBeenSet = true;
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
