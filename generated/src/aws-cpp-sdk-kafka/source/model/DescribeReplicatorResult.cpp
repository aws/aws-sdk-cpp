/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DescribeReplicatorResult.h>
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

DescribeReplicatorResult::DescribeReplicatorResult() : 
    m_isReplicatorReference(false),
    m_replicatorState(ReplicatorState::NOT_SET)
{
}

DescribeReplicatorResult::DescribeReplicatorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isReplicatorReference(false),
    m_replicatorState(ReplicatorState::NOT_SET)
{
  *this = result;
}

DescribeReplicatorResult& DescribeReplicatorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("currentVersion"))
  {
    m_currentVersion = jsonValue.GetString("currentVersion");

  }

  if(jsonValue.ValueExists("isReplicatorReference"))
  {
    m_isReplicatorReference = jsonValue.GetBool("isReplicatorReference");

  }

  if(jsonValue.ValueExists("kafkaClusters"))
  {
    Aws::Utils::Array<JsonView> kafkaClustersJsonList = jsonValue.GetArray("kafkaClusters");
    for(unsigned kafkaClustersIndex = 0; kafkaClustersIndex < kafkaClustersJsonList.GetLength(); ++kafkaClustersIndex)
    {
      m_kafkaClusters.push_back(kafkaClustersJsonList[kafkaClustersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("replicationInfoList"))
  {
    Aws::Utils::Array<JsonView> replicationInfoListJsonList = jsonValue.GetArray("replicationInfoList");
    for(unsigned replicationInfoListIndex = 0; replicationInfoListIndex < replicationInfoListJsonList.GetLength(); ++replicationInfoListIndex)
    {
      m_replicationInfoList.push_back(replicationInfoListJsonList[replicationInfoListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("replicatorArn"))
  {
    m_replicatorArn = jsonValue.GetString("replicatorArn");

  }

  if(jsonValue.ValueExists("replicatorDescription"))
  {
    m_replicatorDescription = jsonValue.GetString("replicatorDescription");

  }

  if(jsonValue.ValueExists("replicatorName"))
  {
    m_replicatorName = jsonValue.GetString("replicatorName");

  }

  if(jsonValue.ValueExists("replicatorResourceArn"))
  {
    m_replicatorResourceArn = jsonValue.GetString("replicatorResourceArn");

  }

  if(jsonValue.ValueExists("replicatorState"))
  {
    m_replicatorState = ReplicatorStateMapper::GetReplicatorStateForName(jsonValue.GetString("replicatorState"));

  }

  if(jsonValue.ValueExists("serviceExecutionRoleArn"))
  {
    m_serviceExecutionRoleArn = jsonValue.GetString("serviceExecutionRoleArn");

  }

  if(jsonValue.ValueExists("stateInfo"))
  {
    m_stateInfo = jsonValue.GetObject("stateInfo");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
