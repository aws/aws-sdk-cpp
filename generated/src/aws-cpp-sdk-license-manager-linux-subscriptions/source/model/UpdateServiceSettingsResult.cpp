/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/UpdateServiceSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManagerLinuxSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateServiceSettingsResult::UpdateServiceSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateServiceSettingsResult& UpdateServiceSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HomeRegions"))
  {
    Aws::Utils::Array<JsonView> homeRegionsJsonList = jsonValue.GetArray("HomeRegions");
    for(unsigned homeRegionsIndex = 0; homeRegionsIndex < homeRegionsJsonList.GetLength(); ++homeRegionsIndex)
    {
      m_homeRegions.push_back(homeRegionsJsonList[homeRegionsIndex].AsString());
    }
    m_homeRegionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LinuxSubscriptionsDiscovery"))
  {
    m_linuxSubscriptionsDiscovery = LinuxSubscriptionsDiscoveryMapper::GetLinuxSubscriptionsDiscoveryForName(jsonValue.GetString("LinuxSubscriptionsDiscovery"));
    m_linuxSubscriptionsDiscoveryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LinuxSubscriptionsDiscoverySettings"))
  {
    m_linuxSubscriptionsDiscoverySettings = jsonValue.GetObject("LinuxSubscriptionsDiscoverySettings");
    m_linuxSubscriptionsDiscoverySettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    Aws::Map<Aws::String, JsonView> statusMessageJsonMap = jsonValue.GetObject("StatusMessage").GetAllObjects();
    for(auto& statusMessageItem : statusMessageJsonMap)
    {
      m_statusMessage[statusMessageItem.first] = statusMessageItem.second.AsString();
    }
    m_statusMessageHasBeenSet = true;
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
