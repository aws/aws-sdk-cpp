/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeFileCachesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFileCachesResult::DescribeFileCachesResult()
{
}

DescribeFileCachesResult::DescribeFileCachesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFileCachesResult& DescribeFileCachesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileCaches"))
  {
    Aws::Utils::Array<JsonView> fileCachesJsonList = jsonValue.GetArray("FileCaches");
    for(unsigned fileCachesIndex = 0; fileCachesIndex < fileCachesJsonList.GetLength(); ++fileCachesIndex)
    {
      m_fileCaches.push_back(fileCachesJsonList[fileCachesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
