/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/ListProfilingGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProfilingGroupsResult::ListProfilingGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProfilingGroupsResult& ListProfilingGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profilingGroupNames"))
  {
    Aws::Utils::Array<JsonView> profilingGroupNamesJsonList = jsonValue.GetArray("profilingGroupNames");
    for(unsigned profilingGroupNamesIndex = 0; profilingGroupNamesIndex < profilingGroupNamesJsonList.GetLength(); ++profilingGroupNamesIndex)
    {
      m_profilingGroupNames.push_back(profilingGroupNamesJsonList[profilingGroupNamesIndex].AsString());
    }
    m_profilingGroupNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profilingGroups"))
  {
    Aws::Utils::Array<JsonView> profilingGroupsJsonList = jsonValue.GetArray("profilingGroups");
    for(unsigned profilingGroupsIndex = 0; profilingGroupsIndex < profilingGroupsJsonList.GetLength(); ++profilingGroupsIndex)
    {
      m_profilingGroups.push_back(profilingGroupsJsonList[profilingGroupsIndex].AsObject());
    }
    m_profilingGroupsHasBeenSet = true;
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
