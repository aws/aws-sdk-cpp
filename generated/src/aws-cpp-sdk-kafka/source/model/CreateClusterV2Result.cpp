/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/CreateClusterV2Result.h>
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

CreateClusterV2Result::CreateClusterV2Result() : 
    m_state(ClusterState::NOT_SET),
    m_clusterType(ClusterType::NOT_SET)
{
}

CreateClusterV2Result::CreateClusterV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(ClusterState::NOT_SET),
    m_clusterType(ClusterType::NOT_SET)
{
  *this = result;
}

CreateClusterV2Result& CreateClusterV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ClusterStateMapper::GetClusterStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = ClusterTypeMapper::GetClusterTypeForName(jsonValue.GetString("clusterType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
