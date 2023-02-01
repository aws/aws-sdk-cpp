/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeUpdateDirectoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUpdateDirectoryResult::DescribeUpdateDirectoryResult()
{
}

DescribeUpdateDirectoryResult::DescribeUpdateDirectoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUpdateDirectoryResult& DescribeUpdateDirectoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpdateActivities"))
  {
    Aws::Utils::Array<JsonView> updateActivitiesJsonList = jsonValue.GetArray("UpdateActivities");
    for(unsigned updateActivitiesIndex = 0; updateActivitiesIndex < updateActivitiesJsonList.GetLength(); ++updateActivitiesIndex)
    {
      m_updateActivities.push_back(updateActivitiesJsonList[updateActivitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
