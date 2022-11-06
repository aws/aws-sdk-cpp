/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ListImportFileTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImportFileTaskResult::ListImportFileTaskResult()
{
}

ListImportFileTaskResult::ListImportFileTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImportFileTaskResult& ListImportFileTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("taskInfos"))
  {
    Aws::Utils::Array<JsonView> taskInfosJsonList = jsonValue.GetArray("taskInfos");
    for(unsigned taskInfosIndex = 0; taskInfosIndex < taskInfosJsonList.GetLength(); ++taskInfosIndex)
    {
      m_taskInfos.push_back(taskInfosJsonList[taskInfosIndex].AsObject());
    }
  }



  return *this;
}
