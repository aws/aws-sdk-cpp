/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListSyncJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSyncJobsResult::ListSyncJobsResult()
{
}

ListSyncJobsResult::ListSyncJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSyncJobsResult& ListSyncJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("syncJobSummaries"))
  {
    Aws::Utils::Array<JsonView> syncJobSummariesJsonList = jsonValue.GetArray("syncJobSummaries");
    for(unsigned syncJobSummariesIndex = 0; syncJobSummariesIndex < syncJobSummariesJsonList.GetLength(); ++syncJobSummariesIndex)
    {
      m_syncJobSummaries.push_back(syncJobSummariesJsonList[syncJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
