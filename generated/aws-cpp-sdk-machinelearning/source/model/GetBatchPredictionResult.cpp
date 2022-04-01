/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/GetBatchPredictionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBatchPredictionResult::GetBatchPredictionResult() : 
    m_status(EntityStatus::NOT_SET),
    m_computeTime(0),
    m_totalRecordCount(0),
    m_invalidRecordCount(0)
{
}

GetBatchPredictionResult::GetBatchPredictionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(EntityStatus::NOT_SET),
    m_computeTime(0),
    m_totalRecordCount(0),
    m_invalidRecordCount(0)
{
  *this = result;
}

GetBatchPredictionResult& GetBatchPredictionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BatchPredictionId"))
  {
    m_batchPredictionId = jsonValue.GetString("BatchPredictionId");

  }

  if(jsonValue.ValueExists("MLModelId"))
  {
    m_mLModelId = jsonValue.GetString("MLModelId");

  }

  if(jsonValue.ValueExists("BatchPredictionDataSourceId"))
  {
    m_batchPredictionDataSourceId = jsonValue.GetString("BatchPredictionDataSourceId");

  }

  if(jsonValue.ValueExists("InputDataLocationS3"))
  {
    m_inputDataLocationS3 = jsonValue.GetString("InputDataLocationS3");

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

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("OutputUri"))
  {
    m_outputUri = jsonValue.GetString("OutputUri");

  }

  if(jsonValue.ValueExists("LogUri"))
  {
    m_logUri = jsonValue.GetString("LogUri");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

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

  if(jsonValue.ValueExists("TotalRecordCount"))
  {
    m_totalRecordCount = jsonValue.GetInt64("TotalRecordCount");

  }

  if(jsonValue.ValueExists("InvalidRecordCount"))
  {
    m_invalidRecordCount = jsonValue.GetInt64("InvalidRecordCount");

  }



  return *this;
}
