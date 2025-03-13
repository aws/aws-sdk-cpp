/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeWhatIfForecastExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWhatIfForecastExportResult::DescribeWhatIfForecastExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeWhatIfForecastExportResult& DescribeWhatIfForecastExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WhatIfForecastExportArn"))
  {
    m_whatIfForecastExportArn = jsonValue.GetString("WhatIfForecastExportArn");
    m_whatIfForecastExportArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WhatIfForecastExportName"))
  {
    m_whatIfForecastExportName = jsonValue.GetString("WhatIfForecastExportName");
    m_whatIfForecastExportNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WhatIfForecastArns"))
  {
    Aws::Utils::Array<JsonView> whatIfForecastArnsJsonList = jsonValue.GetArray("WhatIfForecastArns");
    for(unsigned whatIfForecastArnsIndex = 0; whatIfForecastArnsIndex < whatIfForecastArnsJsonList.GetLength(); ++whatIfForecastArnsIndex)
    {
      m_whatIfForecastArns.push_back(whatIfForecastArnsJsonList[whatIfForecastArnsIndex].AsString());
    }
    m_whatIfForecastArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EstimatedTimeRemainingInMinutes"))
  {
    m_estimatedTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedTimeRemainingInMinutes");
    m_estimatedTimeRemainingInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");
    m_lastModificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");
    m_formatHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
