/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/model/GetDataSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataSourceResult::GetDataSourceResult() : 
    m_dataSizeInBytes(0),
    m_numberOfFiles(0),
    m_status(EntityStatus::NOT_SET),
    m_computeStatistics(false),
    m_computeTime(0)
{
}

GetDataSourceResult::GetDataSourceResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_dataSizeInBytes(0),
    m_numberOfFiles(0),
    m_status(EntityStatus::NOT_SET),
    m_computeStatistics(false),
    m_computeTime(0)
{
  *this = result;
}

GetDataSourceResult& GetDataSourceResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("DataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("DataSourceId");

  }

  if(jsonValue.ValueExists("DataLocationS3"))
  {
    m_dataLocationS3 = jsonValue.GetString("DataLocationS3");

  }

  if(jsonValue.ValueExists("DataRearrangement"))
  {
    m_dataRearrangement = jsonValue.GetString("DataRearrangement");

  }

  if(jsonValue.ValueExists("CreatedByIamUser"))
  {
    m_createdByIamUser = jsonValue.GetString("CreatedByIamUser");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("DataSizeInBytes"))
  {
    m_dataSizeInBytes = jsonValue.GetInt64("DataSizeInBytes");

  }

  if(jsonValue.ValueExists("NumberOfFiles"))
  {
    m_numberOfFiles = jsonValue.GetInt64("NumberOfFiles");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LogUri"))
  {
    m_logUri = jsonValue.GetString("LogUri");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("RedshiftMetadata"))
  {
    m_redshiftMetadata = jsonValue.GetObject("RedshiftMetadata");

  }

  if(jsonValue.ValueExists("RDSMetadata"))
  {
    m_rDSMetadata = jsonValue.GetObject("RDSMetadata");

  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

  }

  if(jsonValue.ValueExists("ComputeStatistics"))
  {
    m_computeStatistics = jsonValue.GetBool("ComputeStatistics");

  }

  if(jsonValue.ValueExists("ComputeTime"))
  {
    m_computeTime = jsonValue.GetInt64("ComputeTime");

  }

  if(jsonValue.ValueExists("FinishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("FinishedAt");

  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");

  }

  if(jsonValue.ValueExists("DataSourceSchema"))
  {
    m_dataSourceSchema = jsonValue.GetString("DataSourceSchema");

  }



  return *this;
}
