/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ListDatasetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetsResult::ListDatasetsResult()
{
}

ListDatasetsResult::ListDatasetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatasetsResult& ListDatasetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datasetSummaries"))
  {
    Aws::Utils::Array<JsonView> datasetSummariesJsonList = jsonValue.GetArray("datasetSummaries");
    for(unsigned datasetSummariesIndex = 0; datasetSummariesIndex < datasetSummariesJsonList.GetLength(); ++datasetSummariesIndex)
    {
      m_datasetSummaries.push_back(datasetSummariesJsonList[datasetSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
