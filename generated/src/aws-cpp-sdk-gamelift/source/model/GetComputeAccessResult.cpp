/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GetComputeAccessResult.h>
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

GetComputeAccessResult::GetComputeAccessResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetComputeAccessResult& GetComputeAccessResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");
    m_fleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");
    m_fleetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeName"))
  {
    m_computeName = jsonValue.GetString("ComputeName");
    m_computeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeArn"))
  {
    m_computeArn = jsonValue.GetString("ComputeArn");
    m_computeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetObject("Credentials");
    m_credentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContainerIdentifiers"))
  {
    Aws::Utils::Array<JsonView> containerIdentifiersJsonList = jsonValue.GetArray("ContainerIdentifiers");
    for(unsigned containerIdentifiersIndex = 0; containerIdentifiersIndex < containerIdentifiersJsonList.GetLength(); ++containerIdentifiersIndex)
    {
      m_containerIdentifiers.push_back(containerIdentifiersJsonList[containerIdentifiersIndex].AsObject());
    }
    m_containerIdentifiersHasBeenSet = true;
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
