/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeWhatIfForecastExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWhatIfForecastExportResult::DescribeWhatIfForecastExportResult() : 
    m_estimatedTimeRemainingInMinutes(0)
{
}

DescribeWhatIfForecastExportResult::DescribeWhatIfForecastExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_estimatedTimeRemainingInMinutes(0)
{
  *this = result;
}

DescribeWhatIfForecastExportResult& DescribeWhatIfForecastExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WhatIfForecastExportArn"))
  {
    m_whatIfForecastExportArn = jsonValue.GetString("WhatIfForecastExportArn");

  }

  if(jsonValue.ValueExists("WhatIfForecastExportName"))
  {
    m_whatIfForecastExportName = jsonValue.GetString("WhatIfForecastExportName");

  }

  if(jsonValue.ValueExists("WhatIfForecastArns"))
  {
    Aws::Utils::Array<JsonView> whatIfForecastArnsJsonList = jsonValue.GetArray("WhatIfForecastArns");
    for(unsigned whatIfForecastArnsIndex = 0; whatIfForecastArnsIndex < whatIfForecastArnsJsonList.GetLength(); ++whatIfForecastArnsIndex)
    {
      m_whatIfForecastArns.push_back(whatIfForecastArnsJsonList[whatIfForecastArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("EstimatedTimeRemainingInMinutes"))
  {
    m_estimatedTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedTimeRemainingInMinutes");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

  }



  return *this;
}
