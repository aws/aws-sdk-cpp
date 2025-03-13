/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeFleetDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetDeploymentResult::DescribeFleetDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetDeploymentResult& DescribeFleetDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetDeployment"))
  {
    m_fleetDeployment = jsonValue.GetObject("FleetDeployment");
    m_fleetDeploymentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocationalDeployments"))
  {
    Aws::Map<Aws::String, JsonView> locationalDeploymentsJsonMap = jsonValue.GetObject("LocationalDeployments").GetAllObjects();
    for(auto& locationalDeploymentsItem : locationalDeploymentsJsonMap)
    {
      m_locationalDeployments[locationalDeploymentsItem.first] = locationalDeploymentsItem.second.AsObject();
    }
    m_locationalDeploymentsHasBeenSet = true;
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
