/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListDatasetExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetExportJobsResult::ListDatasetExportJobsResult()
{
}

ListDatasetExportJobsResult::ListDatasetExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatasetExportJobsResult& ListDatasetExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datasetExportJobs"))
  {
    Aws::Utils::Array<JsonView> datasetExportJobsJsonList = jsonValue.GetArray("datasetExportJobs");
    for(unsigned datasetExportJobsIndex = 0; datasetExportJobsIndex < datasetExportJobsJsonList.GetLength(); ++datasetExportJobsIndex)
    {
      m_datasetExportJobs.push_back(datasetExportJobsJsonList[datasetExportJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
