/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeDataIngestionJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDataIngestionJobResult::DescribeDataIngestionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDataIngestionJobResult& DescribeDataIngestionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");
    m_datasetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngestionInputConfiguration"))
  {
    m_ingestionInputConfiguration = jsonValue.GetObject("IngestionInputConfiguration");
    m_ingestionInputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = IngestionJobStatusMapper::GetIngestionJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedReason"))
  {
    m_failedReason = jsonValue.GetString("FailedReason");
    m_failedReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataQualitySummary"))
  {
    m_dataQualitySummary = jsonValue.GetObject("DataQualitySummary");
    m_dataQualitySummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngestedFilesSummary"))
  {
    m_ingestedFilesSummary = jsonValue.GetObject("IngestedFilesSummary");
    m_ingestedFilesSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusDetail"))
  {
    m_statusDetail = jsonValue.GetString("StatusDetail");
    m_statusDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngestedDataSize"))
  {
    m_ingestedDataSize = jsonValue.GetInt64("IngestedDataSize");
    m_ingestedDataSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataStartTime"))
  {
    m_dataStartTime = jsonValue.GetDouble("DataStartTime");
    m_dataStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataEndTime"))
  {
    m_dataEndTime = jsonValue.GetDouble("DataEndTime");
    m_dataEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceDatasetArn"))
  {
    m_sourceDatasetArn = jsonValue.GetString("SourceDatasetArn");
    m_sourceDatasetArnHasBeenSet = true;
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
