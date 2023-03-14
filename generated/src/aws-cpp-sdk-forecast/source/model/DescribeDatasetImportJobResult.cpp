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

DescribeDatasetImportJobResult::DescribeDatasetImportJobResult() : 
    m_useGeolocationForTimeZone(false),
    m_estimatedTimeRemainingInMinutes(0),
    m_dataSize(0.0),
    m_importMode(ImportMode::NOT_SET)
{
}

DescribeDatasetImportJobResult::DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_useGeolocationForTimeZone(false),
    m_estimatedTimeRemainingInMinutes(0),
    m_dataSize(0.0),
    m_importMode(ImportMode::NOT_SET)
{
  *this = result;
}

DescribeDatasetImportJobResult& DescribeDatasetImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasetImportJobName"))
  {
    m_datasetImportJobName = jsonValue.GetString("DatasetImportJobName");

  }

  if(jsonValue.ValueExists("DatasetImportJobArn"))
  {
    m_datasetImportJobArn = jsonValue.GetString("DatasetImportJobArn");

  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

  }

  if(jsonValue.ValueExists("TimestampFormat"))
  {
    m_timestampFormat = jsonValue.GetString("TimestampFormat");

  }

  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetString("TimeZone");

  }

  if(jsonValue.ValueExists("UseGeolocationForTimeZone"))
  {
    m_useGeolocationForTimeZone = jsonValue.GetBool("UseGeolocationForTimeZone");

  }

  if(jsonValue.ValueExists("GeolocationFormat"))
  {
    m_geolocationFormat = jsonValue.GetString("GeolocationFormat");

  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

  }

  if(jsonValue.ValueExists("EstimatedTimeRemainingInMinutes"))
  {
    m_estimatedTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedTimeRemainingInMinutes");

  }

  if(jsonValue.ValueExists("FieldStatistics"))
  {
    Aws::Map<Aws::String, JsonView> fieldStatisticsJsonMap = jsonValue.GetObject("FieldStatistics").GetAllObjects();
    for(auto& fieldStatisticsItem : fieldStatisticsJsonMap)
    {
      m_fieldStatistics[fieldStatisticsItem.first] = fieldStatisticsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("DataSize"))
  {
    m_dataSize = jsonValue.GetDouble("DataSize");

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

  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

  }

  if(jsonValue.ValueExists("ImportMode"))
  {
    m_importMode = ImportModeMapper::GetImportModeForName(jsonValue.GetString("ImportMode"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
