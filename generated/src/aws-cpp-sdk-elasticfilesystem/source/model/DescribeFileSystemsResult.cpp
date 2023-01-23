/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DescribeFileSystemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EFS::Model;
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
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("FileSystems"))
  {
    Aws::Utils::Array<JsonView> fileSystemsJsonList = jsonValue.GetArray("FileSystems");
    for(unsigned fileSystemsIndex = 0; fileSystemsIndex < fileSystemsJsonList.GetLength(); ++fileSystemsIndex)
    {
      m_fileSystems.push_back(fileSystemsJsonList[fileSystemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }



  return *this;
}
