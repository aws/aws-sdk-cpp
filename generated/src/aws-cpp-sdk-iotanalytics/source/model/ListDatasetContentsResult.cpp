/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ListDatasetContentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetContentsResult::ListDatasetContentsResult()
{
}

ListDatasetContentsResult::ListDatasetContentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatasetContentsResult& ListDatasetContentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datasetContentSummaries"))
  {
    Aws::Utils::Array<JsonView> datasetContentSummariesJsonList = jsonValue.GetArray("datasetContentSummaries");
    for(unsigned datasetContentSummariesIndex = 0; datasetContentSummariesIndex < datasetContentSummariesJsonList.GetLength(); ++datasetContentSummariesIndex)
    {
      m_datasetContentSummaries.push_back(datasetContentSummariesJsonList[datasetContentSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
