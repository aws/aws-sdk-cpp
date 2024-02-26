/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DeleteWorkerConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteWorkerConfigurationResult::DeleteWorkerConfigurationResult() : 
    m_workerConfigurationState(WorkerConfigurationState::NOT_SET)
{
}

DeleteWorkerConfigurationResult::DeleteWorkerConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workerConfigurationState(WorkerConfigurationState::NOT_SET)
{
  *this = result;
}

DeleteWorkerConfigurationResult& DeleteWorkerConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workerConfigurationArn"))
  {
    m_workerConfigurationArn = jsonValue.GetString("workerConfigurationArn");

  }

  if(jsonValue.ValueExists("workerConfigurationState"))
  {
    m_workerConfigurationState = WorkerConfigurationStateMapper::GetWorkerConfigurationStateForName(jsonValue.GetString("workerConfigurationState"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
