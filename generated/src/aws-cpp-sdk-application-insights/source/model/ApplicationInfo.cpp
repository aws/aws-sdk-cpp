/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ApplicationInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

ApplicationInfo::ApplicationInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationInfo& ApplicationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("ResourceGroupName");
    m_resourceGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LifeCycle"))
  {
    m_lifeCycle = jsonValue.GetString("LifeCycle");
    m_lifeCycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpsItemSNSTopicArn"))
  {
    m_opsItemSNSTopicArn = jsonValue.GetString("OpsItemSNSTopicArn");
    m_opsItemSNSTopicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SNSNotificationArn"))
  {
    m_sNSNotificationArn = jsonValue.GetString("SNSNotificationArn");
    m_sNSNotificationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpsCenterEnabled"))
  {
    m_opsCenterEnabled = jsonValue.GetBool("OpsCenterEnabled");
    m_opsCenterEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CWEMonitorEnabled"))
  {
    m_cWEMonitorEnabled = jsonValue.GetBool("CWEMonitorEnabled");
    m_cWEMonitorEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Remarks"))
  {
    m_remarks = jsonValue.GetString("Remarks");
    m_remarksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoConfigEnabled"))
  {
    m_autoConfigEnabled = jsonValue.GetBool("AutoConfigEnabled");
    m_autoConfigEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiscoveryType"))
  {
    m_discoveryType = DiscoveryTypeMapper::GetDiscoveryTypeForName(jsonValue.GetString("DiscoveryType"));
    m_discoveryTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttachMissingPermission"))
  {
    m_attachMissingPermission = jsonValue.GetBool("AttachMissingPermission");
    m_attachMissingPermissionHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("ResourceGroupName", m_resourceGroupName);

  }

  if(m_lifeCycleHasBeenSet)
  {
   payload.WithString("LifeCycle", m_lifeCycle);

  }

  if(m_opsItemSNSTopicArnHasBeenSet)
  {
   payload.WithString("OpsItemSNSTopicArn", m_opsItemSNSTopicArn);

  }

  if(m_sNSNotificationArnHasBeenSet)
  {
   payload.WithString("SNSNotificationArn", m_sNSNotificationArn);

  }

  if(m_opsCenterEnabledHasBeenSet)
  {
   payload.WithBool("OpsCenterEnabled", m_opsCenterEnabled);

  }

  if(m_cWEMonitorEnabledHasBeenSet)
  {
   payload.WithBool("CWEMonitorEnabled", m_cWEMonitorEnabled);

  }

  if(m_remarksHasBeenSet)
  {
   payload.WithString("Remarks", m_remarks);

  }

  if(m_autoConfigEnabledHasBeenSet)
  {
   payload.WithBool("AutoConfigEnabled", m_autoConfigEnabled);

  }

  if(m_discoveryTypeHasBeenSet)
  {
   payload.WithString("DiscoveryType", DiscoveryTypeMapper::GetNameForDiscoveryType(m_discoveryType));
  }

  if(m_attachMissingPermissionHasBeenSet)
  {
   payload.WithBool("AttachMissingPermission", m_attachMissingPermission);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
