/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
