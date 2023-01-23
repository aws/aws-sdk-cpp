/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeFileSystemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFileSystemsResult::DescribeFileSystemsResult()
{
}

DescribeFileSystemsResult::DescribeFileSystemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFileSystemsResult& DescribeFileSystemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileSystems"))
  {
    Aws::Utils::Array<JsonView> fileSystemsJsonList = jsonValue.GetArray("FileSystems");
    for(unsigned fileSystemsIndex = 0; fileSystemsIndex < fileSystemsJsonList.GetLength(); ++fileSystemsIndex)
    {
      m_fileSystems.push_back(fileSystemsJsonList[fileSystemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
