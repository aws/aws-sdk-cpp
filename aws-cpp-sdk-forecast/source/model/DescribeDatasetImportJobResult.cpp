/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeDatasetImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDatasetImportJobResult::DescribeDatasetImportJobResult() : 
    m_dataSize(0.0)
{
}

DescribeDatasetImportJobResult::DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dataSize(0.0)
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

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

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



  return *this;
}
