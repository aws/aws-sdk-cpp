/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetGeofenceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGeofenceResult::GetGeofenceResult()
{
}

GetGeofenceResult::GetGeofenceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetGeofenceResult& GetGeofenceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

  }

  if(jsonValue.ValueExists("GeofenceId"))
  {
    m_geofenceId = jsonValue.GetString("GeofenceId");

  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

  }



  return *this;
}
