﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/GetExperimentResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExperimentResultsResult::GetExperimentResultsResult()
{
}

GetExperimentResultsResult::GetExperimentResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetExperimentResultsResult& GetExperimentResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("reports"))
  {
    Array<JsonView> reportsJsonList = jsonValue.GetArray("reports");
    for(unsigned reportsIndex = 0; reportsIndex < reportsJsonList.GetLength(); ++reportsIndex)
    {
      m_reports.push_back(reportsJsonList[reportsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("resultsData"))
  {
    Array<JsonView> resultsDataJsonList = jsonValue.GetArray("resultsData");
    for(unsigned resultsDataIndex = 0; resultsDataIndex < resultsDataJsonList.GetLength(); ++resultsDataIndex)
    {
      m_resultsData.push_back(resultsDataJsonList[resultsDataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("timestamps"))
  {
    Array<JsonView> timestampsJsonList = jsonValue.GetArray("timestamps");
    for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
    {
      m_timestamps.push_back(timestampsJsonList[timestampsIndex].AsDouble());
    }
  }



  return *this;
}
