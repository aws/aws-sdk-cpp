/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_aliasHasBeenSet(false),
    m_accessUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false),
    m_stage(DirectoryStage::NOT_SET),
    m_stageHasBeenSet(false),
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
    m_ssoEnabledHasBeenSet(false)
{
}

DirectoryDescription::DirectoryDescription(const JsonValue& jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shortNameHasBeenSet(false),
    m_size(DirectorySize::NOT_SET),
    m_sizeHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_accessUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false),
    m_stage(DirectoryStage::NOT_SET),
    m_stageHasBeenSet(false),
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
    m_ssoEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryDescription& DirectoryDescription::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> dnsIpAddrsJsonList = jsonValue.GetArray("DnsIpAddrs");
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
   Array<JsonValue> dnsIpAddrsJsonList(m_dnsIpAddrs.size());
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

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws