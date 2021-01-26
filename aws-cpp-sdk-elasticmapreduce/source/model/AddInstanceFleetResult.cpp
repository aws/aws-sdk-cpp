/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AddInstanceFleetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddInstanceFleetResult::AddInstanceFleetResult()
{
}

AddInstanceFleetResult::AddInstanceFleetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddInstanceFleetResult& AddInstanceFleetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

  }

  if(jsonValue.ValueExists("InstanceFleetId"))
  {
    m_instanceFleetId = jsonValue.GetString("InstanceFleetId");

  }

  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

  }



  return *this;
}
