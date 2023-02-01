/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeDirectoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDirectoriesResult::DescribeDirectoriesResult()
{
}

DescribeDirectoriesResult::DescribeDirectoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDirectoriesResult& DescribeDirectoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryDescriptions"))
  {
    Aws::Utils::Array<JsonView> directoryDescriptionsJsonList = jsonValue.GetArray("DirectoryDescriptions");
    for(unsigned directoryDescriptionsIndex = 0; directoryDescriptionsIndex < directoryDescriptionsJsonList.GetLength(); ++directoryDescriptionsIndex)
    {
      m_directoryDescriptions.push_back(directoryDescriptionsJsonList[directoryDescriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
