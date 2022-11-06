/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AddInstanceGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddInstanceGroupsResult::AddInstanceGroupsResult()
{
}

AddInstanceGroupsResult::AddInstanceGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddInstanceGroupsResult& AddInstanceGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobFlowId"))
  {
    m_jobFlowId = jsonValue.GetString("JobFlowId");

  }

  if(jsonValue.ValueExists("InstanceGroupIds"))
  {
    Aws::Utils::Array<JsonView> instanceGroupIdsJsonList = jsonValue.GetArray("InstanceGroupIds");
    for(unsigned instanceGroupIdsIndex = 0; instanceGroupIdsIndex < instanceGroupIdsJsonList.GetLength(); ++instanceGroupIdsIndex)
    {
      m_instanceGroupIds.push_back(instanceGroupIdsJsonList[instanceGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

  }



  return *this;
}
