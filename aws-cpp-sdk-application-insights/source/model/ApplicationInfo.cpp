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

ApplicationInfo::ApplicationInfo() : 
    m_resourceGroupNameHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_opsItemSNSTopicArnHasBeenSet(false),
    m_opsCenterEnabled(false),
    m_opsCenterEnabledHasBeenSet(false),
    m_cWEMonitorEnabled(false),
    m_cWEMonitorEnabledHasBeenSet(false),
    m_remarksHasBeenSet(false)
{
}

ApplicationInfo::ApplicationInfo(JsonView jsonValue) : 
    m_resourceGroupNameHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_opsItemSNSTopicArnHasBeenSet(false),
    m_opsCenterEnabled(false),
    m_opsCenterEnabledHasBeenSet(false),
    m_cWEMonitorEnabled(false),
    m_cWEMonitorEnabledHasBeenSet(false),
    m_remarksHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationInfo& ApplicationInfo::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue ApplicationInfo::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
