/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/RegionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

RegionDescription::RegionDescription() : 
    m_directoryIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionType(RegionType::NOT_SET),
    m_regionTypeHasBeenSet(false),
    m_status(DirectoryStage::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcSettingsHasBeenSet(false),
    m_desiredNumberOfDomainControllers(0),
    m_desiredNumberOfDomainControllersHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_statusLastUpdatedDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

RegionDescription::RegionDescription(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionType(RegionType::NOT_SET),
    m_regionTypeHasBeenSet(false),
    m_status(DirectoryStage::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcSettingsHasBeenSet(false),
    m_desiredNumberOfDomainControllers(0),
    m_desiredNumberOfDomainControllersHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_statusLastUpdatedDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RegionDescription& RegionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionType"))
  {
    m_regionType = RegionTypeMapper::GetRegionTypeForName(jsonValue.GetString("RegionType"));

    m_regionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DirectoryStageMapper::GetDirectoryStageForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSettings"))
  {
    m_vpcSettings = jsonValue.GetObject("VpcSettings");

    m_vpcSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredNumberOfDomainControllers"))
  {
    m_desiredNumberOfDomainControllers = jsonValue.GetInteger("DesiredNumberOfDomainControllers");

    m_desiredNumberOfDomainControllersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchTime"))
  {
    m_launchTime = jsonValue.GetDouble("LaunchTime");

    m_launchTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusLastUpdatedDateTime"))
  {
    m_statusLastUpdatedDateTime = jsonValue.GetDouble("StatusLastUpdatedDateTime");

    m_statusLastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("LastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RegionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_regionTypeHasBeenSet)
  {
   payload.WithString("RegionType", RegionTypeMapper::GetNameForRegionType(m_regionType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DirectoryStageMapper::GetNameForDirectoryStage(m_status));
  }

  if(m_vpcSettingsHasBeenSet)
  {
   payload.WithObject("VpcSettings", m_vpcSettings.Jsonize());

  }

  if(m_desiredNumberOfDomainControllersHasBeenSet)
  {
   payload.WithInteger("DesiredNumberOfDomainControllers", m_desiredNumberOfDomainControllers);

  }

  if(m_launchTimeHasBeenSet)
  {
   payload.WithDouble("LaunchTime", m_launchTime.SecondsWithMSPrecision());
  }

  if(m_statusLastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("StatusLastUpdatedDateTime", m_statusLastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
