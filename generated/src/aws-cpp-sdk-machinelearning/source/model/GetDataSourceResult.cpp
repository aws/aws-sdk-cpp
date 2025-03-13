/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/GetDataSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataSourceResult::GetDataSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataSourceResult& GetDataSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("DataSourceId");
    m_dataSourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataLocationS3"))
  {
    m_dataLocationS3 = jsonValue.GetString("DataLocationS3");
    m_dataLocationS3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataRearrangement"))
  {
    m_dataRearrangement = jsonValue.GetString("DataRearrangement");
    m_dataRearrangementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedByIamUser"))
  {
    m_createdByIamUser = jsonValue.GetString("CreatedByIamUser");
    m_createdByIamUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSizeInBytes"))
  {
    m_dataSizeInBytes = jsonValue.GetInt64("DataSizeInBytes");
    m_dataSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfFiles"))
  {
    m_numberOfFiles = jsonValue.GetInt64("NumberOfFiles");
    m_numberOfFilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogUri"))
  {
    m_logUri = jsonValue.GetString("LogUri");
    m_logUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedshiftMetadata"))
  {
    m_redshiftMetadata = jsonValue.GetObject("RedshiftMetadata");
    m_redshiftMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RDSMetadata"))
  {
    m_rDSMetadata = jsonValue.GetObject("RDSMetadata");
    m_rDSMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeStatistics"))
  {
    m_computeStatistics = jsonValue.GetBool("ComputeStatistics");
    m_computeStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeTime"))
  {
    m_computeTime = jsonValue.GetInt64("ComputeTime");
    m_computeTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FinishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("FinishedAt");
    m_finishedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSourceSchema"))
  {
    m_dataSourceSchema = jsonValue.GetString("DataSourceSchema");
    m_dataSourceSchemaHasBeenSet = true;
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
