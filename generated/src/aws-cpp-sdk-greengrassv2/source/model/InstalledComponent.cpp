/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/InstalledComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

InstalledComponent::InstalledComponent() : 
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_lifecycleState(InstalledComponentLifecycleState::NOT_SET),
    m_lifecycleStateHasBeenSet(false),
    m_lifecycleStateDetailsHasBeenSet(false),
    m_isRoot(false),
    m_isRootHasBeenSet(false),
    m_lastStatusChangeTimestampHasBeenSet(false),
    m_lastReportedTimestampHasBeenSet(false),
    m_lastInstallationSourceHasBeenSet(false),
    m_lifecycleStatusCodesHasBeenSet(false)
{
}

InstalledComponent::InstalledComponent(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_lifecycleState(InstalledComponentLifecycleState::NOT_SET),
    m_lifecycleStateHasBeenSet(false),
    m_lifecycleStateDetailsHasBeenSet(false),
    m_isRoot(false),
    m_isRootHasBeenSet(false),
    m_lastStatusChangeTimestampHasBeenSet(false),
    m_lastReportedTimestampHasBeenSet(false),
    m_lastInstallationSourceHasBeenSet(false),
    m_lifecycleStatusCodesHasBeenSet(false)
{
  *this = jsonValue;
}

InstalledComponent& InstalledComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentVersion"))
  {
    m_componentVersion = jsonValue.GetString("componentVersion");

    m_componentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleState"))
  {
    m_lifecycleState = InstalledComponentLifecycleStateMapper::GetInstalledComponentLifecycleStateForName(jsonValue.GetString("lifecycleState"));

    m_lifecycleStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleStateDetails"))
  {
    m_lifecycleStateDetails = jsonValue.GetString("lifecycleStateDetails");

    m_lifecycleStateDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isRoot"))
  {
    m_isRoot = jsonValue.GetBool("isRoot");

    m_isRootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatusChangeTimestamp"))
  {
    m_lastStatusChangeTimestamp = jsonValue.GetDouble("lastStatusChangeTimestamp");

    m_lastStatusChangeTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastReportedTimestamp"))
  {
    m_lastReportedTimestamp = jsonValue.GetDouble("lastReportedTimestamp");

    m_lastReportedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastInstallationSource"))
  {
    m_lastInstallationSource = jsonValue.GetString("lastInstallationSource");

    m_lastInstallationSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleStatusCodes"))
  {
    Aws::Utils::Array<JsonView> lifecycleStatusCodesJsonList = jsonValue.GetArray("lifecycleStatusCodes");
    for(unsigned lifecycleStatusCodesIndex = 0; lifecycleStatusCodesIndex < lifecycleStatusCodesJsonList.GetLength(); ++lifecycleStatusCodesIndex)
    {
      m_lifecycleStatusCodes.push_back(lifecycleStatusCodesJsonList[lifecycleStatusCodesIndex].AsString());
    }
    m_lifecycleStatusCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue InstalledComponent::Jsonize() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_componentVersionHasBeenSet)
  {
   payload.WithString("componentVersion", m_componentVersion);

  }

  if(m_lifecycleStateHasBeenSet)
  {
   payload.WithString("lifecycleState", InstalledComponentLifecycleStateMapper::GetNameForInstalledComponentLifecycleState(m_lifecycleState));
  }

  if(m_lifecycleStateDetailsHasBeenSet)
  {
   payload.WithString("lifecycleStateDetails", m_lifecycleStateDetails);

  }

  if(m_isRootHasBeenSet)
  {
   payload.WithBool("isRoot", m_isRoot);

  }

  if(m_lastStatusChangeTimestampHasBeenSet)
  {
   payload.WithDouble("lastStatusChangeTimestamp", m_lastStatusChangeTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastReportedTimestampHasBeenSet)
  {
   payload.WithDouble("lastReportedTimestamp", m_lastReportedTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastInstallationSourceHasBeenSet)
  {
   payload.WithString("lastInstallationSource", m_lastInstallationSource);

  }

  if(m_lifecycleStatusCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lifecycleStatusCodesJsonList(m_lifecycleStatusCodes.size());
   for(unsigned lifecycleStatusCodesIndex = 0; lifecycleStatusCodesIndex < lifecycleStatusCodesJsonList.GetLength(); ++lifecycleStatusCodesIndex)
   {
     lifecycleStatusCodesJsonList[lifecycleStatusCodesIndex].AsString(m_lifecycleStatusCodes[lifecycleStatusCodesIndex]);
   }
   payload.WithArray("lifecycleStatusCodes", std::move(lifecycleStatusCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
