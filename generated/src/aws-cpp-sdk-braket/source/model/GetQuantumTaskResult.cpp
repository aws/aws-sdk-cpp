/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/GetQuantumTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQuantumTaskResult::GetQuantumTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQuantumTaskResult& GetQuantumTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("quantumTaskArn"))
  {
    m_quantumTaskArn = jsonValue.GetString("quantumTaskArn");
    m_quantumTaskArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = QuantumTaskStatusMapper::GetQuantumTaskStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceArn"))
  {
    m_deviceArn = jsonValue.GetString("deviceArn");
    m_deviceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceParameters"))
  {
    m_deviceParameters = jsonValue.GetString("deviceParameters");
    m_deviceParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shots"))
  {
    m_shots = jsonValue.GetInt64("shots");
    m_shotsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputS3Bucket"))
  {
    m_outputS3Bucket = jsonValue.GetString("outputS3Bucket");
    m_outputS3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputS3Directory"))
  {
    m_outputS3Directory = jsonValue.GetString("outputS3Directory");
    m_outputS3DirectoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queueInfo"))
  {
    m_queueInfo = jsonValue.GetObject("queueInfo");
    m_queueInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associations"))
  {
    Aws::Utils::Array<JsonView> associationsJsonList = jsonValue.GetArray("associations");
    for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
    {
      m_associations.push_back(associationsJsonList[associationsIndex].AsObject());
    }
    m_associationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numSuccessfulShots"))
  {
    m_numSuccessfulShots = jsonValue.GetInt64("numSuccessfulShots");
    m_numSuccessfulShotsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionMetadata"))
  {
    m_actionMetadata = jsonValue.GetObject("actionMetadata");
    m_actionMetadataHasBeenSet = true;
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
