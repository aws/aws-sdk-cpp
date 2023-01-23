/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/OTAUpdateInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

OTAUpdateInfo::OTAUpdateInfo() : 
    m_otaUpdateIdHasBeenSet(false),
    m_otaUpdateArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_awsJobExecutionsRolloutConfigHasBeenSet(false),
    m_awsJobPresignedUrlConfigHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_otaUpdateFilesHasBeenSet(false),
    m_otaUpdateStatus(OTAUpdateStatus::NOT_SET),
    m_otaUpdateStatusHasBeenSet(false),
    m_awsIotJobIdHasBeenSet(false),
    m_awsIotJobArnHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_additionalParametersHasBeenSet(false)
{
}

OTAUpdateInfo::OTAUpdateInfo(JsonView jsonValue) : 
    m_otaUpdateIdHasBeenSet(false),
    m_otaUpdateArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_awsJobExecutionsRolloutConfigHasBeenSet(false),
    m_awsJobPresignedUrlConfigHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_otaUpdateFilesHasBeenSet(false),
    m_otaUpdateStatus(OTAUpdateStatus::NOT_SET),
    m_otaUpdateStatusHasBeenSet(false),
    m_awsIotJobIdHasBeenSet(false),
    m_awsIotJobArnHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_additionalParametersHasBeenSet(false)
{
  *this = jsonValue;
}

OTAUpdateInfo& OTAUpdateInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("otaUpdateId"))
  {
    m_otaUpdateId = jsonValue.GetString("otaUpdateId");

    m_otaUpdateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("otaUpdateArn"))
  {
    m_otaUpdateArn = jsonValue.GetString("otaUpdateArn");

    m_otaUpdateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(ProtocolMapper::GetProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsJobExecutionsRolloutConfig"))
  {
    m_awsJobExecutionsRolloutConfig = jsonValue.GetObject("awsJobExecutionsRolloutConfig");

    m_awsJobExecutionsRolloutConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsJobPresignedUrlConfig"))
  {
    m_awsJobPresignedUrlConfig = jsonValue.GetObject("awsJobPresignedUrlConfig");

    m_awsJobPresignedUrlConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetSelection"))
  {
    m_targetSelection = TargetSelectionMapper::GetTargetSelectionForName(jsonValue.GetString("targetSelection"));

    m_targetSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("otaUpdateFiles"))
  {
    Aws::Utils::Array<JsonView> otaUpdateFilesJsonList = jsonValue.GetArray("otaUpdateFiles");
    for(unsigned otaUpdateFilesIndex = 0; otaUpdateFilesIndex < otaUpdateFilesJsonList.GetLength(); ++otaUpdateFilesIndex)
    {
      m_otaUpdateFiles.push_back(otaUpdateFilesJsonList[otaUpdateFilesIndex].AsObject());
    }
    m_otaUpdateFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("otaUpdateStatus"))
  {
    m_otaUpdateStatus = OTAUpdateStatusMapper::GetOTAUpdateStatusForName(jsonValue.GetString("otaUpdateStatus"));

    m_otaUpdateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsIotJobId"))
  {
    m_awsIotJobId = jsonValue.GetString("awsIotJobId");

    m_awsIotJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsIotJobArn"))
  {
    m_awsIotJobArn = jsonValue.GetString("awsIotJobArn");

    m_awsIotJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

    m_errorInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalParameters"))
  {
    Aws::Map<Aws::String, JsonView> additionalParametersJsonMap = jsonValue.GetObject("additionalParameters").GetAllObjects();
    for(auto& additionalParametersItem : additionalParametersJsonMap)
    {
      m_additionalParameters[additionalParametersItem.first] = additionalParametersItem.second.AsString();
    }
    m_additionalParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue OTAUpdateInfo::Jsonize() const
{
  JsonValue payload;

  if(m_otaUpdateIdHasBeenSet)
  {
   payload.WithString("otaUpdateId", m_otaUpdateId);

  }

  if(m_otaUpdateArnHasBeenSet)
  {
   payload.WithString("otaUpdateArn", m_otaUpdateArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("protocols", std::move(protocolsJsonList));

  }

  if(m_awsJobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("awsJobExecutionsRolloutConfig", m_awsJobExecutionsRolloutConfig.Jsonize());

  }

  if(m_awsJobPresignedUrlConfigHasBeenSet)
  {
   payload.WithObject("awsJobPresignedUrlConfig", m_awsJobPresignedUrlConfig.Jsonize());

  }

  if(m_targetSelectionHasBeenSet)
  {
   payload.WithString("targetSelection", TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection));
  }

  if(m_otaUpdateFilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> otaUpdateFilesJsonList(m_otaUpdateFiles.size());
   for(unsigned otaUpdateFilesIndex = 0; otaUpdateFilesIndex < otaUpdateFilesJsonList.GetLength(); ++otaUpdateFilesIndex)
   {
     otaUpdateFilesJsonList[otaUpdateFilesIndex].AsObject(m_otaUpdateFiles[otaUpdateFilesIndex].Jsonize());
   }
   payload.WithArray("otaUpdateFiles", std::move(otaUpdateFilesJsonList));

  }

  if(m_otaUpdateStatusHasBeenSet)
  {
   payload.WithString("otaUpdateStatus", OTAUpdateStatusMapper::GetNameForOTAUpdateStatus(m_otaUpdateStatus));
  }

  if(m_awsIotJobIdHasBeenSet)
  {
   payload.WithString("awsIotJobId", m_awsIotJobId);

  }

  if(m_awsIotJobArnHasBeenSet)
  {
   payload.WithString("awsIotJobArn", m_awsIotJobArn);

  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("errorInfo", m_errorInfo.Jsonize());

  }

  if(m_additionalParametersHasBeenSet)
  {
   JsonValue additionalParametersJsonMap;
   for(auto& additionalParametersItem : m_additionalParameters)
   {
     additionalParametersJsonMap.WithString(additionalParametersItem.first, additionalParametersItem.second);
   }
   payload.WithObject("additionalParameters", std::move(additionalParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
