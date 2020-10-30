/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/GetQuantumTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQuantumTaskResult::GetQuantumTaskResult() : 
    m_shots(0),
    m_status(QuantumTaskStatus::NOT_SET)
{
}

GetQuantumTaskResult::GetQuantumTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_shots(0),
    m_status(QuantumTaskStatus::NOT_SET)
{
  *this = result;
}

GetQuantumTaskResult& GetQuantumTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("deviceArn"))
  {
    m_deviceArn = jsonValue.GetString("deviceArn");

  }

  if(jsonValue.ValueExists("deviceParameters"))
  {
    m_deviceParameters = jsonValue.GetString("deviceParameters");

  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("outputS3Bucket"))
  {
    m_outputS3Bucket = jsonValue.GetString("outputS3Bucket");

  }

  if(jsonValue.ValueExists("outputS3Directory"))
  {
    m_outputS3Directory = jsonValue.GetString("outputS3Directory");

  }

  if(jsonValue.ValueExists("quantumTaskArn"))
  {
    m_quantumTaskArn = jsonValue.GetString("quantumTaskArn");

  }

  if(jsonValue.ValueExists("shots"))
  {
    m_shots = jsonValue.GetInt64("shots");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = QuantumTaskStatusMapper::GetQuantumTaskStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
