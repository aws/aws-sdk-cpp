/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeInferenceSchedulerResult.h>
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

DescribeInferenceSchedulerResult::DescribeInferenceSchedulerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInferenceSchedulerResult& DescribeInferenceSchedulerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InferenceSchedulerName"))
  {
    m_inferenceSchedulerName = jsonValue.GetString("InferenceSchedulerName");
    m_inferenceSchedulerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InferenceSchedulerArn"))
  {
    m_inferenceSchedulerArn = jsonValue.GetString("InferenceSchedulerArn");
    m_inferenceSchedulerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = InferenceSchedulerStatusMapper::GetInferenceSchedulerStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataDelayOffsetInMinutes"))
  {
    m_dataDelayOffsetInMinutes = jsonValue.GetInt64("DataDelayOffsetInMinutes");
    m_dataDelayOffsetInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataUploadFrequency"))
  {
    m_dataUploadFrequency = DataUploadFrequencyMapper::GetDataUploadFrequencyForName(jsonValue.GetString("DataUploadFrequency"));
    m_dataUploadFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataInputConfiguration"))
  {
    m_dataInputConfiguration = jsonValue.GetObject("DataInputConfiguration");
    m_dataInputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataOutputConfiguration"))
  {
    m_dataOutputConfiguration = jsonValue.GetObject("DataOutputConfiguration");
    m_dataOutputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerSideKmsKeyId"))
  {
    m_serverSideKmsKeyId = jsonValue.GetString("ServerSideKmsKeyId");
    m_serverSideKmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestInferenceResult"))
  {
    m_latestInferenceResult = LatestInferenceResultMapper::GetLatestInferenceResultForName(jsonValue.GetString("LatestInferenceResult"));
    m_latestInferenceResultHasBeenSet = true;
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
