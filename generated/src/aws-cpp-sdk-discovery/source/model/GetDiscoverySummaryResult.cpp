/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/GetDiscoverySummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDiscoverySummaryResult::GetDiscoverySummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDiscoverySummaryResult& GetDiscoverySummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("servers"))
  {
    m_servers = jsonValue.GetInt64("servers");
    m_serversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applications"))
  {
    m_applications = jsonValue.GetInt64("applications");
    m_applicationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serversMappedToApplications"))
  {
    m_serversMappedToApplications = jsonValue.GetInt64("serversMappedToApplications");
    m_serversMappedToApplicationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serversMappedtoTags"))
  {
    m_serversMappedtoTags = jsonValue.GetInt64("serversMappedtoTags");
    m_serversMappedtoTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentSummary"))
  {
    m_agentSummary = jsonValue.GetObject("agentSummary");
    m_agentSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorSummary"))
  {
    m_connectorSummary = jsonValue.GetObject("connectorSummary");
    m_connectorSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("meCollectorSummary"))
  {
    m_meCollectorSummary = jsonValue.GetObject("meCollectorSummary");
    m_meCollectorSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentlessCollectorSummary"))
  {
    m_agentlessCollectorSummary = jsonValue.GetObject("agentlessCollectorSummary");
    m_agentlessCollectorSummaryHasBeenSet = true;
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
