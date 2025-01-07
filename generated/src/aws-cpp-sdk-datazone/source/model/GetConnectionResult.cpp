/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectionResult::GetConnectionResult() : 
    m_type(ConnectionType::NOT_SET)
{
}

GetConnectionResult::GetConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetConnectionResult()
{
  *this = result;
}

GetConnectionResult& GetConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectionCredentials"))
  {
    m_connectionCredentials = jsonValue.GetObject("connectionCredentials");

  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("domainUnitId"))
  {
    m_domainUnitId = jsonValue.GetString("domainUnitId");

  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("environmentUserRole"))
  {
    m_environmentUserRole = jsonValue.GetString("environmentUserRole");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("physicalEndpoints"))
  {
    Aws::Utils::Array<JsonView> physicalEndpointsJsonList = jsonValue.GetArray("physicalEndpoints");
    for(unsigned physicalEndpointsIndex = 0; physicalEndpointsIndex < physicalEndpointsJsonList.GetLength(); ++physicalEndpointsIndex)
    {
      m_physicalEndpoints.push_back(physicalEndpointsJsonList[physicalEndpointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

  }

  if(jsonValue.ValueExists("props"))
  {
    m_props = jsonValue.GetObject("props");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("type"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
