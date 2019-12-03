/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codeguruprofiler/model/ListProfilingGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProfilingGroupsResult::ListProfilingGroupsResult()
{
}

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

  }

  if(jsonValue.ValueExists("profilingGroupNames"))
  {
    Array<JsonView> profilingGroupNamesJsonList = jsonValue.GetArray("profilingGroupNames");
    for(unsigned profilingGroupNamesIndex = 0; profilingGroupNamesIndex < profilingGroupNamesJsonList.GetLength(); ++profilingGroupNamesIndex)
    {
      m_profilingGroupNames.push_back(profilingGroupNamesJsonList[profilingGroupNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("profilingGroups"))
  {
    Array<JsonView> profilingGroupsJsonList = jsonValue.GetArray("profilingGroups");
    for(unsigned profilingGroupsIndex = 0; profilingGroupsIndex < profilingGroupsJsonList.GetLength(); ++profilingGroupsIndex)
    {
      m_profilingGroups.push_back(profilingGroupsJsonList[profilingGroupsIndex].AsObject());
    }
  }



  return *this;
}
