/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeSharedDirectoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSharedDirectoriesResult::DescribeSharedDirectoriesResult()
{
}

DescribeSharedDirectoriesResult::DescribeSharedDirectoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSharedDirectoriesResult& DescribeSharedDirectoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SharedDirectories"))
  {
    Aws::Utils::Array<JsonView> sharedDirectoriesJsonList = jsonValue.GetArray("SharedDirectories");
    for(unsigned sharedDirectoriesIndex = 0; sharedDirectoriesIndex < sharedDirectoriesJsonList.GetLength(); ++sharedDirectoriesIndex)
    {
      m_sharedDirectories.push_back(sharedDirectoriesJsonList[sharedDirectoriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
