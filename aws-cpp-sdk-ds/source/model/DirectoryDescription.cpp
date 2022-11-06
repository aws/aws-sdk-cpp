/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DirectoryDescription.h>
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

DirectoryDescription::DirectoryDescription() : 
    m_directoryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shortNameHasBeenSet(false),
    m_size(DirectorySize::NOT_SET),
    m_sizeHasBeenSet(false),
    m_edition(DirectoryEdition::NOT_SET),
    m_editionHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_accessUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false),
    m_stage(DirectoryStage::NOT_SET),
    m_stageHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_shareMethod(ShareMethod::NOT_SET),
    m_shareMethodHasBeenSet(false),
    m_shareNotesHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_stageLastUpdatedDateTimeHasBeenSet(false),
    m_type(DirectoryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpcSettingsHasBeenSet(false),
    m_connectSettingsHasBeenSet(false),
    m_radiusSettingsHasBeenSet(false),
    m_radiusStatus(RadiusStatus::NOT_SET),
    m_radiusStatusHasBeenSet(false),
    m_stageReasonHasBeenSet(false),
    m_ssoEnabled(false),
    m_ssoEnabledHasBeenSet(false),
    m_desiredNumberOfDomainControllers(0),
    m_desiredNumberOfDomainControllersHasBeenSet(false),
    m_ownerDirectoryDescriptionHasBeenSet(false),
    m_regionsInfoHasBeenSet(false),
    m_osVersion(OSVersion::NOT_SET),
    m_osVersionHasBeenSet(false)
{
}

DirectoryDescription::DirectoryDescription(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shortNameHasBeenSet(false),
    m_size(DirectorySize::NOT_SET),
    m_sizeHasBeenSet(false),
    m_edition(DirectoryEdition::NOT_SET),
    m_editionHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_accessUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false),
    m_stage(DirectoryStage::NOT_SET),
    m_stageHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_shareMethod(ShareMethod::NOT_SET),
    m_shareMethodHasBeenSet(false),
    m_shareNotesHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_stageLastUpdatedDateTimeHasBeenSet(false),
    m_type(DirectoryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpcSettingsHasBeenSet(false),
    m_connectSettingsHasBeenSet(false),
    m_radiusSettingsHasBeenSet(false),
    m_radiusStatus(RadiusStatus::NOT_SET),
    m_radiusStatusHasBeenSet(false),
    m_stageReasonHasBeenSet(false),
    m_ssoEnabled(false),
    m_ssoEnabledHasBeenSet(false),
    m_desiredNumberOfDomainControllers(0),
    m_desiredNumberOfDomainControllersHasBeenSet(false),
    m_ownerDirectoryDescriptionHasBeenSet(false),
    m_regionsInfoHasBeenSet(false),
    m_osVersion(OSVersion::NOT_SET),
    m_osVersionHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryDescription& DirectoryDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShortName"))
  {
    m_shortName = jsonValue.GetString("ShortName");

    m_shortNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = DirectorySizeMapper::GetDirectorySizeForName(jsonValue.GetString("Size"));

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = DirectoryEditionMapper::GetDirectoryEditionForName(jsonValue.GetString("Edition"));

    m_editionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessUrl"))
  {
    m_accessUrl = jsonValue.GetString("AccessUrl");

    m_accessUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsIpAddrs"))
  {
    Aws::Utils::Array<JsonView> dnsIpAddrsJsonList = jsonValue.GetArray("DnsIpAddrs");
    for(unsigned dnsIpAddrsIndex = 0; dnsIpAddrsIndex < dnsIpAddrsJsonList.GetLength(); ++dnsIpAddrsIndex)
    {
      m_dnsIpAddrs.push_back(dnsIpAddrsJsonList[dnsIpAddrsIndex].AsString());
    }
    m_dnsIpAddrsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stage"))
  {
    m_stage = DirectoryStageMapper::GetDirectoryStageForName(jsonValue.GetString("Stage"));

    m_stageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareStatus"))
  {
    m_shareStatus = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("ShareStatus"));

    m_shareStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareMethod"))
  {
    m_shareMethod = ShareMethodMapper::GetShareMethodForName(jsonValue.GetString("ShareMethod"));

    m_shareMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareNotes"))
  {
    m_shareNotes = jsonValue.GetString("ShareNotes");

    m_shareNotesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchTime"))
  {
    m_launchTime = jsonValue.GetDouble("LaunchTime");

    m_launchTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageLastUpdatedDateTime"))
  {
    m_stageLastUpdatedDateTime = jsonValue.GetDouble("StageLastUpdatedDateTime");

    m_stageLastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DirectoryTypeMapper::GetDirectoryTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSettings"))
  {
    m_vpcSettings = jsonValue.GetObject("VpcSettings");

    m_vpcSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectSettings"))
  {
    m_connectSettings = jsonValue.GetObject("ConnectSettings");

    m_connectSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RadiusSettings"))
  {
    m_radiusSettings = jsonValue.GetObject("RadiusSettings");

    m_radiusSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RadiusStatus"))
  {
    m_radiusStatus = RadiusStatusMapper::GetRadiusStatusForName(jsonValue.GetString("RadiusStatus"));

    m_radiusStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageReason"))
  {
    m_stageReason = jsonValue.GetString("StageReason");

    m_stageReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SsoEnabled"))
  {
    m_ssoEnabled = jsonValue.GetBool("SsoEnabled");

    m_ssoEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredNumberOfDomainControllers"))
  {
    m_desiredNumberOfDomainControllers = jsonValue.GetInteger("DesiredNumberOfDomainControllers");

    m_desiredNumberOfDomainControllersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerDirectoryDescription"))
  {
    m_ownerDirectoryDescription = jsonValue.GetObject("OwnerDirectoryDescription");

    m_ownerDirectoryDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionsInfo"))
  {
    m_regionsInfo = jsonValue.GetObject("RegionsInfo");

    m_regionsInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OsVersion"))
  {
    m_osVersion = OSVersionMapper::GetOSVersionForName(jsonValue.GetString("OsVersion"));

    m_osVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectoryDescription::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_shortNameHasBeenSet)
  {
   payload.WithString("ShortName", m_shortName);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithString("Size", DirectorySizeMapper::GetNameForDirectorySize(m_size));
  }

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", DirectoryEditionMapper::GetNameForDirectoryEdition(m_edition));
  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_accessUrlHasBeenSet)
  {
   payload.WithString("AccessUrl", m_accessUrl);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dnsIpAddrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpAddrsJsonList(m_dnsIpAddrs.size());
   for(unsigned dnsIpAddrsIndex = 0; dnsIpAddrsIndex < dnsIpAddrsJsonList.GetLength(); ++dnsIpAddrsIndex)
   {
     dnsIpAddrsJsonList[dnsIpAddrsIndex].AsString(m_dnsIpAddrs[dnsIpAddrsIndex]);
   }
   payload.WithArray("DnsIpAddrs", std::move(dnsIpAddrsJsonList));

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("Stage", DirectoryStageMapper::GetNameForDirectoryStage(m_stage));
  }

  if(m_shareStatusHasBeenSet)
  {
   payload.WithString("ShareStatus", ShareStatusMapper::GetNameForShareStatus(m_shareStatus));
  }

  if(m_shareMethodHasBeenSet)
  {
   payload.WithString("ShareMethod", ShareMethodMapper::GetNameForShareMethod(m_shareMethod));
  }

  if(m_shareNotesHasBeenSet)
  {
   payload.WithString("ShareNotes", m_shareNotes);

  }

  if(m_launchTimeHasBeenSet)
  {
   payload.WithDouble("LaunchTime", m_launchTime.SecondsWithMSPrecision());
  }

  if(m_stageLastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("StageLastUpdatedDateTime", m_stageLastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DirectoryTypeMapper::GetNameForDirectoryType(m_type));
  }

  if(m_vpcSettingsHasBeenSet)
  {
   payload.WithObject("VpcSettings", m_vpcSettings.Jsonize());

  }

  if(m_connectSettingsHasBeenSet)
  {
   payload.WithObject("ConnectSettings", m_connectSettings.Jsonize());

  }

  if(m_radiusSettingsHasBeenSet)
  {
   payload.WithObject("RadiusSettings", m_radiusSettings.Jsonize());

  }

  if(m_radiusStatusHasBeenSet)
  {
   payload.WithString("RadiusStatus", RadiusStatusMapper::GetNameForRadiusStatus(m_radiusStatus));
  }

  if(m_stageReasonHasBeenSet)
  {
   payload.WithString("StageReason", m_stageReason);

  }

  if(m_ssoEnabledHasBeenSet)
  {
   payload.WithBool("SsoEnabled", m_ssoEnabled);

  }

  if(m_desiredNumberOfDomainControllersHasBeenSet)
  {
   payload.WithInteger("DesiredNumberOfDomainControllers", m_desiredNumberOfDomainControllers);

  }

  if(m_ownerDirectoryDescriptionHasBeenSet)
  {
   payload.WithObject("OwnerDirectoryDescription", m_ownerDirectoryDescription.Jsonize());

  }

  if(m_regionsInfoHasBeenSet)
  {
   payload.WithObject("RegionsInfo", m_regionsInfo.Jsonize());

  }

  if(m_osVersionHasBeenSet)
  {
   payload.WithString("OsVersion", OSVersionMapper::GetNameForOSVersion(m_osVersion));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
