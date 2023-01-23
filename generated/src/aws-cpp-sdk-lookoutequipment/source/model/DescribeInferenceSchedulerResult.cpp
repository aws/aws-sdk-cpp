/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeInferenceSchedulerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInferenceSchedulerResult::DescribeInferenceSchedulerResult() : 
    m_status(InferenceSchedulerStatus::NOT_SET),
    m_dataDelayOffsetInMinutes(0),
    m_dataUploadFrequency(DataUploadFrequency::NOT_SET),
    m_latestInferenceResult(LatestInferenceResult::NOT_SET)
{
}

DescribeInferenceSchedulerResult::DescribeInferenceSchedulerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(InferenceSchedulerStatus::NOT_SET),
    m_dataDelayOffsetInMinutes(0),
    m_dataUploadFrequency(DataUploadFrequency::NOT_SET),
    m_latestInferenceResult(LatestInferenceResult::NOT_SET)
{
  *this = result;
}

DescribeInferenceSchedulerResult& DescribeInferenceSchedulerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("InferenceSchedulerName"))
  {
    m_inferenceSchedulerName = jsonValue.GetString("InferenceSchedulerName");

  }

  if(jsonValue.ValueExists("InferenceSchedulerArn"))
  {
    m_inferenceSchedulerArn = jsonValue.GetString("InferenceSchedulerArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InferenceSchedulerStatusMapper::GetInferenceSchedulerStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("DataDelayOffsetInMinutes"))
  {
    m_dataDelayOffsetInMinutes = jsonValue.GetInt64("DataDelayOffsetInMinutes");

  }

  if(jsonValue.ValueExists("DataUploadFrequency"))
  {
    m_dataUploadFrequency = DataUploadFrequencyMapper::GetDataUploadFrequencyForName(jsonValue.GetString("DataUploadFrequency"));

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }

  if(jsonValue.ValueExists("DataInputConfiguration"))
  {
    m_dataInputConfiguration = jsonValue.GetObject("DataInputConfiguration");

  }

  if(jsonValue.ValueExists("DataOutputConfiguration"))
  {
    m_dataOutputConfiguration = jsonValue.GetObject("DataOutputConfiguration");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("ServerSideKmsKeyId"))
  {
    m_serverSideKmsKeyId = jsonValue.GetString("ServerSideKmsKeyId");

  }

  if(jsonValue.ValueExists("LatestInferenceResult"))
  {
    m_latestInferenceResult = LatestInferenceResultMapper::GetLatestInferenceResultForName(jsonValue.GetString("LatestInferenceResult"));

  }



  return *this;
}
