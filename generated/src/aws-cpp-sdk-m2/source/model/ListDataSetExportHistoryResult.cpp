/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListDataSetExportHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataSetExportHistoryResult::ListDataSetExportHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataSetExportHistoryResult& ListDataSetExportHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataSetExportTasks"))
  {
    Aws::Utils::Array<JsonView> dataSetExportTasksJsonList = jsonValue.GetArray("dataSetExportTasks");
    for(unsigned dataSetExportTasksIndex = 0; dataSetExportTasksIndex < dataSetExportTasksJsonList.GetLength(); ++dataSetExportTasksIndex)
    {
      m_dataSetExportTasks.push_back(dataSetExportTasksJsonList[dataSetExportTasksIndex].AsObject());
    }
    m_dataSetExportTasksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
