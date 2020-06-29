/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  JsonView jsonValue = result.GetPayload().View();
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
