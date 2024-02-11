/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/EngineVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

EngineVersion::EngineVersion() : 
    m_versionHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_releaseStatus(ReleaseStatusValues::NOT_SET),
    m_releaseStatusHasBeenSet(false),
    m_launchDateHasBeenSet(false),
    m_autoUpgradeDateHasBeenSet(false),
    m_deprecationDateHasBeenSet(false),
    m_forceUpgradeDateHasBeenSet(false),
    m_availableUpgradesHasBeenSet(false)
{
}

EngineVersion::EngineVersion(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_releaseStatus(ReleaseStatusValues::NOT_SET),
    m_releaseStatusHasBeenSet(false),
    m_launchDateHasBeenSet(false),
    m_autoUpgradeDateHasBeenSet(false),
    m_deprecationDateHasBeenSet(false),
    m_forceUpgradeDateHasBeenSet(false),
    m_availableUpgradesHasBeenSet(false)
{
  *this = jsonValue;
}

EngineVersion& EngineVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetString("Lifecycle");

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseStatus"))
  {
    m_releaseStatus = ReleaseStatusValuesMapper::GetReleaseStatusValuesForName(jsonValue.GetString("ReleaseStatus"));

    m_releaseStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchDate"))
  {
    m_launchDate = jsonValue.GetDouble("LaunchDate");

    m_launchDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoUpgradeDate"))
  {
    m_autoUpgradeDate = jsonValue.GetDouble("AutoUpgradeDate");

    m_autoUpgradeDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeprecationDate"))
  {
    m_deprecationDate = jsonValue.GetDouble("DeprecationDate");

    m_deprecationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForceUpgradeDate"))
  {
    m_forceUpgradeDate = jsonValue.GetDouble("ForceUpgradeDate");

    m_forceUpgradeDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailableUpgrades"))
  {
    Aws::Utils::Array<JsonView> availableUpgradesJsonList = jsonValue.GetArray("AvailableUpgrades");
    for(unsigned availableUpgradesIndex = 0; availableUpgradesIndex < availableUpgradesJsonList.GetLength(); ++availableUpgradesIndex)
    {
      m_availableUpgrades.push_back(availableUpgradesJsonList[availableUpgradesIndex].AsString());
    }
    m_availableUpgradesHasBeenSet = true;
  }

  return *this;
}

JsonValue EngineVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", m_lifecycle);

  }

  if(m_releaseStatusHasBeenSet)
  {
   payload.WithString("ReleaseStatus", ReleaseStatusValuesMapper::GetNameForReleaseStatusValues(m_releaseStatus));
  }

  if(m_launchDateHasBeenSet)
  {
   payload.WithDouble("LaunchDate", m_launchDate.SecondsWithMSPrecision());
  }

  if(m_autoUpgradeDateHasBeenSet)
  {
   payload.WithDouble("AutoUpgradeDate", m_autoUpgradeDate.SecondsWithMSPrecision());
  }

  if(m_deprecationDateHasBeenSet)
  {
   payload.WithDouble("DeprecationDate", m_deprecationDate.SecondsWithMSPrecision());
  }

  if(m_forceUpgradeDateHasBeenSet)
  {
   payload.WithDouble("ForceUpgradeDate", m_forceUpgradeDate.SecondsWithMSPrecision());
  }

  if(m_availableUpgradesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availableUpgradesJsonList(m_availableUpgrades.size());
   for(unsigned availableUpgradesIndex = 0; availableUpgradesIndex < availableUpgradesJsonList.GetLength(); ++availableUpgradesIndex)
   {
     availableUpgradesJsonList[availableUpgradesIndex].AsString(m_availableUpgrades[availableUpgradesIndex]);
   }
   payload.WithArray("AvailableUpgrades", std::move(availableUpgradesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
