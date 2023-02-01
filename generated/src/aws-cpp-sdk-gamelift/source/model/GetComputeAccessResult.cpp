/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GetComputeAccessResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComputeAccessResult::GetComputeAccessResult()
{
}

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

  }

  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");

  }

  if(jsonValue.ValueExists("ComputeName"))
  {
    m_computeName = jsonValue.GetString("ComputeName");

  }

  if(jsonValue.ValueExists("ComputeArn"))
  {
    m_computeArn = jsonValue.GetString("ComputeArn");

  }

  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetObject("Credentials");

  }



  return *this;
}
