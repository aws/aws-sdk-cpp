/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListDatasetImportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetImportJobsResult::ListDatasetImportJobsResult()
{
}

ListDatasetImportJobsResult::ListDatasetImportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatasetImportJobsResult& ListDatasetImportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasetImportJobs"))
  {
    Aws::Utils::Array<JsonView> datasetImportJobsJsonList = jsonValue.GetArray("DatasetImportJobs");
    for(unsigned datasetImportJobsIndex = 0; datasetImportJobsIndex < datasetImportJobsJsonList.GetLength(); ++datasetImportJobsIndex)
    {
      m_datasetImportJobs.push_back(datasetImportJobsJsonList[datasetImportJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
