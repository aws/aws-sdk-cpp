/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/GetServiceSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManagerLinuxSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServiceSettingsResult::GetServiceSettingsResult() : 
    m_linuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery::NOT_SET),
    m_status(Status::NOT_SET)
{
}

GetServiceSettingsResult::GetServiceSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_linuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery::NOT_SET),
    m_status(Status::NOT_SET)
{
  *this = result;
}

GetServiceSettingsResult& GetServiceSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HomeRegions"))
  {
    Aws::Utils::Array<JsonView> homeRegionsJsonList = jsonValue.GetArray("HomeRegions");
    for(unsigned homeRegionsIndex = 0; homeRegionsIndex < homeRegionsJsonList.GetLength(); ++homeRegionsIndex)
    {
      m_homeRegions.push_back(homeRegionsJsonList[homeRegionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("LinuxSubscriptionsDiscovery"))
  {
    m_linuxSubscriptionsDiscovery = LinuxSubscriptionsDiscoveryMapper::GetLinuxSubscriptionsDiscoveryForName(jsonValue.GetString("LinuxSubscriptionsDiscovery"));

  }

  if(jsonValue.ValueExists("LinuxSubscriptionsDiscoverySettings"))
  {
    m_linuxSubscriptionsDiscoverySettings = jsonValue.GetObject("LinuxSubscriptionsDiscoverySettings");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    Aws::Map<Aws::String, JsonView> statusMessageJsonMap = jsonValue.GetObject("StatusMessage").GetAllObjects();
    for(auto& statusMessageItem : statusMessageJsonMap)
    {
      m_statusMessage[statusMessageItem.first] = statusMessageItem.second.AsString();
    }
  }



  return *this;
}
