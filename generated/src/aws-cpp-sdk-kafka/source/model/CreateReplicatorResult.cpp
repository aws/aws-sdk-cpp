/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/CreateReplicatorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateReplicatorResult::CreateReplicatorResult() : 
    m_replicatorState(ReplicatorState::NOT_SET)
{
}

CreateReplicatorResult::CreateReplicatorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_replicatorState(ReplicatorState::NOT_SET)
{
  *this = result;
}

CreateReplicatorResult& CreateReplicatorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("replicatorArn"))
  {
    m_replicatorArn = jsonValue.GetString("replicatorArn");

  }

  if(jsonValue.ValueExists("replicatorName"))
  {
    m_replicatorName = jsonValue.GetString("replicatorName");

  }

  if(jsonValue.ValueExists("replicatorState"))
  {
    m_replicatorState = ReplicatorStateMapper::GetReplicatorStateForName(jsonValue.GetString("replicatorState"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
