/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListDataSourceSyncJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataSourceSyncJobsResult::ListDataSourceSyncJobsResult()
{
}

ListDataSourceSyncJobsResult::ListDataSourceSyncJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataSourceSyncJobsResult& ListDataSourceSyncJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("History"))
  {
    Aws::Utils::Array<JsonView> historyJsonList = jsonValue.GetArray("History");
    for(unsigned historyIndex = 0; historyIndex < historyJsonList.GetLength(); ++historyIndex)
    {
      m_history.push_back(historyJsonList[historyIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
