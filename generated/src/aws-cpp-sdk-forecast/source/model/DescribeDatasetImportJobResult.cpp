/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeDatasetImportJobResult.h>
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

DescribeDatasetImportJobResult::DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDatasetImportJobResult& DescribeDatasetImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasetImportJobName"))
  {
    m_datasetImportJobName = jsonValue.GetString("DatasetImportJobName");
    m_datasetImportJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetImportJobArn"))
  {
    m_datasetImportJobArn = jsonValue.GetString("DatasetImportJobArn");
    m_datasetImportJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");
    m_datasetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimestampFormat"))
  {
    m_timestampFormat = jsonValue.GetString("TimestampFormat");
    m_timestampFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetString("TimeZone");
    m_timeZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseGeolocationForTimeZone"))
  {
    m_useGeolocationForTimeZone = jsonValue.GetBool("UseGeolocationForTimeZone");
    m_useGeolocationForTimeZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeolocationFormat"))
  {
    m_geolocationFormat = jsonValue.GetString("GeolocationFormat");
    m_geolocationFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EstimatedTimeRemainingInMinutes"))
  {
    m_estimatedTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedTimeRemainingInMinutes");
    m_estimatedTimeRemainingInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FieldStatistics"))
  {
    Aws::Map<Aws::String, JsonView> fieldStatisticsJsonMap = jsonValue.GetObject("FieldStatistics").GetAllObjects();
    for(auto& fieldStatisticsItem : fieldStatisticsJsonMap)
    {
      m_fieldStatistics[fieldStatisticsItem.first] = fieldStatisticsItem.second.AsObject();
    }
    m_fieldStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSize"))
  {
    m_dataSize = jsonValue.GetDouble("DataSize");
    m_dataSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
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
  if(jsonValue.ValueExists("ImportMode"))
  {
    m_importMode = ImportModeMapper::GetImportModeForName(jsonValue.GetString("ImportMode"));
    m_importModeHasBeenSet = true;
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
