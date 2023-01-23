/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DescribeExportTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeExportTasksResult::DescribeExportTasksResult()
{
}

DescribeExportTasksResult::DescribeExportTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeExportTasksResult& DescribeExportTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exportsInfo"))
  {
    Aws::Utils::Array<JsonView> exportsInfoJsonList = jsonValue.GetArray("exportsInfo");
    for(unsigned exportsInfoIndex = 0; exportsInfoIndex < exportsInfoJsonList.GetLength(); ++exportsInfoIndex)
    {
      m_exportsInfo.push_back(exportsInfoJsonList[exportsInfoIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
