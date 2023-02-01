/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeDirectoryConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDirectoryConfigsResult::DescribeDirectoryConfigsResult()
{
}

DescribeDirectoryConfigsResult::DescribeDirectoryConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDirectoryConfigsResult& DescribeDirectoryConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryConfigs"))
  {
    Aws::Utils::Array<JsonView> directoryConfigsJsonList = jsonValue.GetArray("DirectoryConfigs");
    for(unsigned directoryConfigsIndex = 0; directoryConfigsIndex < directoryConfigsJsonList.GetLength(); ++directoryConfigsIndex)
    {
      m_directoryConfigs.push_back(directoryConfigsJsonList[directoryConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
