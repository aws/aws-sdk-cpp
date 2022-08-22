/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeWhatIfAnalysisResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWhatIfAnalysisResult::DescribeWhatIfAnalysisResult() : 
    m_estimatedTimeRemainingInMinutes(0)
{
}

DescribeWhatIfAnalysisResult::DescribeWhatIfAnalysisResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_estimatedTimeRemainingInMinutes(0)
{
  *this = result;
}

DescribeWhatIfAnalysisResult& DescribeWhatIfAnalysisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WhatIfAnalysisName"))
  {
    m_whatIfAnalysisName = jsonValue.GetString("WhatIfAnalysisName");

  }

  if(jsonValue.ValueExists("WhatIfAnalysisArn"))
  {
    m_whatIfAnalysisArn = jsonValue.GetString("WhatIfAnalysisArn");

  }

  if(jsonValue.ValueExists("ForecastArn"))
  {
    m_forecastArn = jsonValue.GetString("ForecastArn");

  }

  if(jsonValue.ValueExists("EstimatedTimeRemainingInMinutes"))
  {
    m_estimatedTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedTimeRemainingInMinutes");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }

  if(jsonValue.ValueExists("TimeSeriesSelector"))
  {
    m_timeSeriesSelector = jsonValue.GetObject("TimeSeriesSelector");

  }



  return *this;
}
