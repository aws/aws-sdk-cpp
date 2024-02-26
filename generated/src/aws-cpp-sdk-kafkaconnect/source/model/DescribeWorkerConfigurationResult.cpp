/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DescribeWorkerConfigurationResult.h>
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

DescribeWorkerConfigurationResult::DescribeWorkerConfigurationResult() : 
    m_workerConfigurationState(WorkerConfigurationState::NOT_SET)
{
}

DescribeWorkerConfigurationResult::DescribeWorkerConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workerConfigurationState(WorkerConfigurationState::NOT_SET)
{
  *this = result;
}

DescribeWorkerConfigurationResult& DescribeWorkerConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("latestRevision"))
  {
    m_latestRevision = jsonValue.GetObject("latestRevision");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

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
