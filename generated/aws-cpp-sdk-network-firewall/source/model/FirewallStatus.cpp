/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FirewallStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

FirewallStatus::FirewallStatus() : 
    m_status(FirewallStatusValue::NOT_SET),
    m_statusHasBeenSet(false),
    m_configurationSyncStateSummary(ConfigurationSyncState::NOT_SET),
    m_configurationSyncStateSummaryHasBeenSet(false),
    m_syncStatesHasBeenSet(false)
{
}

FirewallStatus::FirewallStatus(JsonView jsonValue) : 
    m_status(FirewallStatusValue::NOT_SET),
    m_statusHasBeenSet(false),
    m_configurationSyncStateSummary(ConfigurationSyncState::NOT_SET),
    m_configurationSyncStateSummaryHasBeenSet(false),
    m_syncStatesHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallStatus& FirewallStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FirewallStatusValueMapper::GetFirewallStatusValueForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationSyncStateSummary"))
  {
    m_configurationSyncStateSummary = ConfigurationSyncStateMapper::GetConfigurationSyncStateForName(jsonValue.GetString("ConfigurationSyncStateSummary"));

    m_configurationSyncStateSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncStates"))
  {
    Aws::Map<Aws::String, JsonView> syncStatesJsonMap = jsonValue.GetObject("SyncStates").GetAllObjects();
    for(auto& syncStatesItem : syncStatesJsonMap)
    {
      m_syncStates[syncStatesItem.first] = syncStatesItem.second.AsObject();
    }
    m_syncStatesHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FirewallStatusValueMapper::GetNameForFirewallStatusValue(m_status));
  }

  if(m_configurationSyncStateSummaryHasBeenSet)
  {
   payload.WithString("ConfigurationSyncStateSummary", ConfigurationSyncStateMapper::GetNameForConfigurationSyncState(m_configurationSyncStateSummary));
  }

  if(m_syncStatesHasBeenSet)
  {
   JsonValue syncStatesJsonMap;
   for(auto& syncStatesItem : m_syncStates)
   {
     syncStatesJsonMap.WithObject(syncStatesItem.first, syncStatesItem.second.Jsonize());
   }
   payload.WithObject("SyncStates", std::move(syncStatesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
