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

#include <aws/ce/model/GetCostAndUsageWithResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCostAndUsageWithResourcesResult::GetCostAndUsageWithResourcesResult()
{
}

GetCostAndUsageWithResourcesResult::GetCostAndUsageWithResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCostAndUsageWithResourcesResult& GetCostAndUsageWithResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }

  if(jsonValue.ValueExists("GroupDefinitions"))
  {
    Array<JsonView> groupDefinitionsJsonList = jsonValue.GetArray("GroupDefinitions");
    for(unsigned groupDefinitionsIndex = 0; groupDefinitionsIndex < groupDefinitionsJsonList.GetLength(); ++groupDefinitionsIndex)
    {
      m_groupDefinitions.push_back(groupDefinitionsJsonList[groupDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ResultsByTime"))
  {
    Array<JsonView> resultsByTimeJsonList = jsonValue.GetArray("ResultsByTime");
    for(unsigned resultsByTimeIndex = 0; resultsByTimeIndex < resultsByTimeJsonList.GetLength(); ++resultsByTimeIndex)
    {
      m_resultsByTime.push_back(resultsByTimeJsonList[resultsByTimeIndex].AsObject());
    }
  }



  return *this;
}
