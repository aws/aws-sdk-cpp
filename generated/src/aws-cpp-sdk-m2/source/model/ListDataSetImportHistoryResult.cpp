/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListDataSetImportHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataSetImportHistoryResult::ListDataSetImportHistoryResult()
{
}

ListDataSetImportHistoryResult::ListDataSetImportHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataSetImportHistoryResult& ListDataSetImportHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataSetImportTasks"))
  {
    Aws::Utils::Array<JsonView> dataSetImportTasksJsonList = jsonValue.GetArray("dataSetImportTasks");
    for(unsigned dataSetImportTasksIndex = 0; dataSetImportTasksIndex < dataSetImportTasksJsonList.GetLength(); ++dataSetImportTasksIndex)
    {
      m_dataSetImportTasks.push_back(dataSetImportTasksJsonList[dataSetImportTasksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
