/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/MobileDeviceAccessRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

MobileDeviceAccessRule::MobileDeviceAccessRule() : 
    m_mobileDeviceAccessRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_deviceTypesHasBeenSet(false),
    m_notDeviceTypesHasBeenSet(false),
    m_deviceModelsHasBeenSet(false),
    m_notDeviceModelsHasBeenSet(false),
    m_deviceOperatingSystemsHasBeenSet(false),
    m_notDeviceOperatingSystemsHasBeenSet(false),
    m_deviceUserAgentsHasBeenSet(false),
    m_notDeviceUserAgentsHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
}

MobileDeviceAccessRule::MobileDeviceAccessRule(JsonView jsonValue) : 
    m_mobileDeviceAccessRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_deviceTypesHasBeenSet(false),
    m_notDeviceTypesHasBeenSet(false),
    m_deviceModelsHasBeenSet(false),
    m_notDeviceModelsHasBeenSet(false),
    m_deviceOperatingSystemsHasBeenSet(false),
    m_notDeviceOperatingSystemsHasBeenSet(false),
    m_deviceUserAgentsHasBeenSet(false),
    m_notDeviceUserAgentsHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
  *this = jsonValue;
}

MobileDeviceAccessRule& MobileDeviceAccessRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MobileDeviceAccessRuleId"))
  {
    m_mobileDeviceAccessRuleId = jsonValue.GetString("MobileDeviceAccessRuleId");

    m_mobileDeviceAccessRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Effect"))
  {
    m_effect = MobileDeviceAccessRuleEffectMapper::GetMobileDeviceAccessRuleEffectForName(jsonValue.GetString("Effect"));

    m_effectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceTypes"))
  {
    Aws::Utils::Array<JsonView> deviceTypesJsonList = jsonValue.GetArray("DeviceTypes");
    for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
    {
      m_deviceTypes.push_back(deviceTypesJsonList[deviceTypesIndex].AsString());
    }
    m_deviceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotDeviceTypes"))
  {
    Aws::Utils::Array<JsonView> notDeviceTypesJsonList = jsonValue.GetArray("NotDeviceTypes");
    for(unsigned notDeviceTypesIndex = 0; notDeviceTypesIndex < notDeviceTypesJsonList.GetLength(); ++notDeviceTypesIndex)
    {
      m_notDeviceTypes.push_back(notDeviceTypesJsonList[notDeviceTypesIndex].AsString());
    }
    m_notDeviceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceModels"))
  {
    Aws::Utils::Array<JsonView> deviceModelsJsonList = jsonValue.GetArray("DeviceModels");
    for(unsigned deviceModelsIndex = 0; deviceModelsIndex < deviceModelsJsonList.GetLength(); ++deviceModelsIndex)
    {
      m_deviceModels.push_back(deviceModelsJsonList[deviceModelsIndex].AsString());
    }
    m_deviceModelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotDeviceModels"))
  {
    Aws::Utils::Array<JsonView> notDeviceModelsJsonList = jsonValue.GetArray("NotDeviceModels");
    for(unsigned notDeviceModelsIndex = 0; notDeviceModelsIndex < notDeviceModelsJsonList.GetLength(); ++notDeviceModelsIndex)
    {
      m_notDeviceModels.push_back(notDeviceModelsJsonList[notDeviceModelsIndex].AsString());
    }
    m_notDeviceModelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceOperatingSystems"))
  {
    Aws::Utils::Array<JsonView> deviceOperatingSystemsJsonList = jsonValue.GetArray("DeviceOperatingSystems");
    for(unsigned deviceOperatingSystemsIndex = 0; deviceOperatingSystemsIndex < deviceOperatingSystemsJsonList.GetLength(); ++deviceOperatingSystemsIndex)
    {
      m_deviceOperatingSystems.push_back(deviceOperatingSystemsJsonList[deviceOperatingSystemsIndex].AsString());
    }
    m_deviceOperatingSystemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotDeviceOperatingSystems"))
  {
    Aws::Utils::Array<JsonView> notDeviceOperatingSystemsJsonList = jsonValue.GetArray("NotDeviceOperatingSystems");
    for(unsigned notDeviceOperatingSystemsIndex = 0; notDeviceOperatingSystemsIndex < notDeviceOperatingSystemsJsonList.GetLength(); ++notDeviceOperatingSystemsIndex)
    {
      m_notDeviceOperatingSystems.push_back(notDeviceOperatingSystemsJsonList[notDeviceOperatingSystemsIndex].AsString());
    }
    m_notDeviceOperatingSystemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceUserAgents"))
  {
    Aws::Utils::Array<JsonView> deviceUserAgentsJsonList = jsonValue.GetArray("DeviceUserAgents");
    for(unsigned deviceUserAgentsIndex = 0; deviceUserAgentsIndex < deviceUserAgentsJsonList.GetLength(); ++deviceUserAgentsIndex)
    {
      m_deviceUserAgents.push_back(deviceUserAgentsJsonList[deviceUserAgentsIndex].AsString());
    }
    m_deviceUserAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotDeviceUserAgents"))
  {
    Aws::Utils::Array<JsonView> notDeviceUserAgentsJsonList = jsonValue.GetArray("NotDeviceUserAgents");
    for(unsigned notDeviceUserAgentsIndex = 0; notDeviceUserAgentsIndex < notDeviceUserAgentsJsonList.GetLength(); ++notDeviceUserAgentsIndex)
    {
      m_notDeviceUserAgents.push_back(notDeviceUserAgentsJsonList[notDeviceUserAgentsIndex].AsString());
    }
    m_notDeviceUserAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateModified"))
  {
    m_dateModified = jsonValue.GetDouble("DateModified");

    m_dateModifiedHasBeenSet = true;
  }

  return *this;
}

JsonValue MobileDeviceAccessRule::Jsonize() const
{
  JsonValue payload;

  if(m_mobileDeviceAccessRuleIdHasBeenSet)
  {
   payload.WithString("MobileDeviceAccessRuleId", m_mobileDeviceAccessRuleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_effectHasBeenSet)
  {
   payload.WithString("Effect", MobileDeviceAccessRuleEffectMapper::GetNameForMobileDeviceAccessRuleEffect(m_effect));
  }

  if(m_deviceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceTypesJsonList(m_deviceTypes.size());
   for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
   {
     deviceTypesJsonList[deviceTypesIndex].AsString(m_deviceTypes[deviceTypesIndex]);
   }
   payload.WithArray("DeviceTypes", std::move(deviceTypesJsonList));

  }

  if(m_notDeviceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notDeviceTypesJsonList(m_notDeviceTypes.size());
   for(unsigned notDeviceTypesIndex = 0; notDeviceTypesIndex < notDeviceTypesJsonList.GetLength(); ++notDeviceTypesIndex)
   {
     notDeviceTypesJsonList[notDeviceTypesIndex].AsString(m_notDeviceTypes[notDeviceTypesIndex]);
   }
   payload.WithArray("NotDeviceTypes", std::move(notDeviceTypesJsonList));

  }

  if(m_deviceModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceModelsJsonList(m_deviceModels.size());
   for(unsigned deviceModelsIndex = 0; deviceModelsIndex < deviceModelsJsonList.GetLength(); ++deviceModelsIndex)
   {
     deviceModelsJsonList[deviceModelsIndex].AsString(m_deviceModels[deviceModelsIndex]);
   }
   payload.WithArray("DeviceModels", std::move(deviceModelsJsonList));

  }

  if(m_notDeviceModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notDeviceModelsJsonList(m_notDeviceModels.size());
   for(unsigned notDeviceModelsIndex = 0; notDeviceModelsIndex < notDeviceModelsJsonList.GetLength(); ++notDeviceModelsIndex)
   {
     notDeviceModelsJsonList[notDeviceModelsIndex].AsString(m_notDeviceModels[notDeviceModelsIndex]);
   }
   payload.WithArray("NotDeviceModels", std::move(notDeviceModelsJsonList));

  }

  if(m_deviceOperatingSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceOperatingSystemsJsonList(m_deviceOperatingSystems.size());
   for(unsigned deviceOperatingSystemsIndex = 0; deviceOperatingSystemsIndex < deviceOperatingSystemsJsonList.GetLength(); ++deviceOperatingSystemsIndex)
   {
     deviceOperatingSystemsJsonList[deviceOperatingSystemsIndex].AsString(m_deviceOperatingSystems[deviceOperatingSystemsIndex]);
   }
   payload.WithArray("DeviceOperatingSystems", std::move(deviceOperatingSystemsJsonList));

  }

  if(m_notDeviceOperatingSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notDeviceOperatingSystemsJsonList(m_notDeviceOperatingSystems.size());
   for(unsigned notDeviceOperatingSystemsIndex = 0; notDeviceOperatingSystemsIndex < notDeviceOperatingSystemsJsonList.GetLength(); ++notDeviceOperatingSystemsIndex)
   {
     notDeviceOperatingSystemsJsonList[notDeviceOperatingSystemsIndex].AsString(m_notDeviceOperatingSystems[notDeviceOperatingSystemsIndex]);
   }
   payload.WithArray("NotDeviceOperatingSystems", std::move(notDeviceOperatingSystemsJsonList));

  }

  if(m_deviceUserAgentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceUserAgentsJsonList(m_deviceUserAgents.size());
   for(unsigned deviceUserAgentsIndex = 0; deviceUserAgentsIndex < deviceUserAgentsJsonList.GetLength(); ++deviceUserAgentsIndex)
   {
     deviceUserAgentsJsonList[deviceUserAgentsIndex].AsString(m_deviceUserAgents[deviceUserAgentsIndex]);
   }
   payload.WithArray("DeviceUserAgents", std::move(deviceUserAgentsJsonList));

  }

  if(m_notDeviceUserAgentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notDeviceUserAgentsJsonList(m_notDeviceUserAgents.size());
   for(unsigned notDeviceUserAgentsIndex = 0; notDeviceUserAgentsIndex < notDeviceUserAgentsJsonList.GetLength(); ++notDeviceUserAgentsIndex)
   {
     notDeviceUserAgentsJsonList[notDeviceUserAgentsIndex].AsString(m_notDeviceUserAgents[notDeviceUserAgentsIndex]);
   }
   payload.WithArray("NotDeviceUserAgents", std::move(notDeviceUserAgentsJsonList));

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithDouble("DateCreated", m_dateCreated.SecondsWithMSPrecision());
  }

  if(m_dateModifiedHasBeenSet)
  {
   payload.WithDouble("DateModified", m_dateModified.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
