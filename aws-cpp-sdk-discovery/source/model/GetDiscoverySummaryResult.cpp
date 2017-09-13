/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/discovery/model/GetDiscoverySummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDiscoverySummaryResult::GetDiscoverySummaryResult() : 
    m_servers(0),
    m_applications(0),
    m_serversMappedToApplications(0),
    m_serversMappedtoTags(0)
{
}

GetDiscoverySummaryResult::GetDiscoverySummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_servers(0),
    m_applications(0),
    m_serversMappedToApplications(0),
    m_serversMappedtoTags(0)
{
  *this = result;
}

GetDiscoverySummaryResult& GetDiscoverySummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("servers"))
  {
    m_servers = jsonValue.GetInt64("servers");

  }

  if(jsonValue.ValueExists("applications"))
  {
    m_applications = jsonValue.GetInt64("applications");

  }

  if(jsonValue.ValueExists("serversMappedToApplications"))
  {
    m_serversMappedToApplications = jsonValue.GetInt64("serversMappedToApplications");

  }

  if(jsonValue.ValueExists("serversMappedtoTags"))
  {
    m_serversMappedtoTags = jsonValue.GetInt64("serversMappedtoTags");

  }

  if(jsonValue.ValueExists("agentSummary"))
  {
    m_agentSummary = jsonValue.GetObject("agentSummary");

  }

  if(jsonValue.ValueExists("connectorSummary"))
  {
    m_connectorSummary = jsonValue.GetObject("connectorSummary");

  }



  return *this;
}
