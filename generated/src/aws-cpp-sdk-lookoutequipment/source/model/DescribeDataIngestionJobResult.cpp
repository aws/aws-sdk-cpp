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

DescribeDataIngestionJobResult::DescribeDataIngestionJobResult() : 
    m_status(IngestionJobStatus::NOT_SET),
    m_ingestedDataSize(0)
{
}

DescribeDataIngestionJobResult::DescribeDataIngestionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(IngestionJobStatus::NOT_SET),
    m_ingestedDataSize(0)
{
  *this = result;
}

DescribeDataIngestionJobResult& DescribeDataIngestionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

  }

  if(jsonValue.ValueExists("IngestionInputConfiguration"))
  {
    m_ingestionInputConfiguration = jsonValue.GetObject("IngestionInputConfiguration");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IngestionJobStatusMapper::GetIngestionJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("FailedReason"))
  {
    m_failedReason = jsonValue.GetString("FailedReason");

  }

  if(jsonValue.ValueExists("DataQualitySummary"))
  {
    m_dataQualitySummary = jsonValue.GetObject("DataQualitySummary");

  }

  if(jsonValue.ValueExists("IngestedFilesSummary"))
  {
    m_ingestedFilesSummary = jsonValue.GetObject("IngestedFilesSummary");

  }

  if(jsonValue.ValueExists("StatusDetail"))
  {
    m_statusDetail = jsonValue.GetString("StatusDetail");

  }

  if(jsonValue.ValueExists("IngestedDataSize"))
  {
    m_ingestedDataSize = jsonValue.GetInt64("IngestedDataSize");

  }

  if(jsonValue.ValueExists("DataStartTime"))
  {
    m_dataStartTime = jsonValue.GetDouble("DataStartTime");

  }

  if(jsonValue.ValueExists("DataEndTime"))
  {
    m_dataEndTime = jsonValue.GetDouble("DataEndTime");

  }

  if(jsonValue.ValueExists("SourceDatasetArn"))
  {
    m_sourceDatasetArn = jsonValue.GetString("SourceDatasetArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
