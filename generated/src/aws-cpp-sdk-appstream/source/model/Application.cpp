/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/Application.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

Application::Application() : 
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_iconURLHasBeenSet(false),
    m_launchPathHasBeenSet(false),
    m_launchParametersHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_appBlockArnHasBeenSet(false),
    m_iconS3LocationHasBeenSet(false),
    m_platformsHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

Application::Application(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_iconURLHasBeenSet(false),
    m_launchPathHasBeenSet(false),
    m_launchParametersHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_appBlockArnHasBeenSet(false),
    m_iconS3LocationHasBeenSet(false),
    m_platformsHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Application& Application::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IconURL"))
  {
    m_iconURL = jsonValue.GetString("IconURL");

    m_iconURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchPath"))
  {
    m_launchPath = jsonValue.GetString("LaunchPath");

    m_launchPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchParameters"))
  {
    m_launchParameters = jsonValue.GetString("LaunchParameters");

    m_launchParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("Metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkingDirectory"))
  {
    m_workingDirectory = jsonValue.GetString("WorkingDirectory");

    m_workingDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppBlockArn"))
  {
    m_appBlockArn = jsonValue.GetString("AppBlockArn");

    m_appBlockArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IconS3Location"))
  {
    m_iconS3Location = jsonValue.GetObject("IconS3Location");

    m_iconS3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platforms"))
  {
    Aws::Utils::Array<JsonView> platformsJsonList = jsonValue.GetArray("Platforms");
    for(unsigned platformsIndex = 0; platformsIndex < platformsJsonList.GetLength(); ++platformsIndex)
    {
      m_platforms.push_back(PlatformTypeMapper::GetPlatformTypeForName(platformsJsonList[platformsIndex].AsString()));
    }
    m_platformsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceFamilies"))
  {
    Aws::Utils::Array<JsonView> instanceFamiliesJsonList = jsonValue.GetArray("InstanceFamilies");
    for(unsigned instanceFamiliesIndex = 0; instanceFamiliesIndex < instanceFamiliesJsonList.GetLength(); ++instanceFamiliesIndex)
    {
      m_instanceFamilies.push_back(instanceFamiliesJsonList[instanceFamiliesIndex].AsString());
    }
    m_instanceFamiliesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Application::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_iconURLHasBeenSet)
  {
   payload.WithString("IconURL", m_iconURL);

  }

  if(m_launchPathHasBeenSet)
  {
   payload.WithString("LaunchPath", m_launchPath);

  }

  if(m_launchParametersHasBeenSet)
  {
   payload.WithString("LaunchParameters", m_launchParameters);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("Metadata", std::move(metadataJsonMap));

  }

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("WorkingDirectory", m_workingDirectory);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_appBlockArnHasBeenSet)
  {
   payload.WithString("AppBlockArn", m_appBlockArn);

  }

  if(m_iconS3LocationHasBeenSet)
  {
   payload.WithObject("IconS3Location", m_iconS3Location.Jsonize());

  }

  if(m_platformsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformsJsonList(m_platforms.size());
   for(unsigned platformsIndex = 0; platformsIndex < platformsJsonList.GetLength(); ++platformsIndex)
   {
     platformsJsonList[platformsIndex].AsString(PlatformTypeMapper::GetNameForPlatformType(m_platforms[platformsIndex]));
   }
   payload.WithArray("Platforms", std::move(platformsJsonList));

  }

  if(m_instanceFamiliesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceFamiliesJsonList(m_instanceFamilies.size());
   for(unsigned instanceFamiliesIndex = 0; instanceFamiliesIndex < instanceFamiliesJsonList.GetLength(); ++instanceFamiliesIndex)
   {
     instanceFamiliesJsonList[instanceFamiliesIndex].AsString(m_instanceFamilies[instanceFamiliesIndex]);
   }
   payload.WithArray("InstanceFamilies", std::move(instanceFamiliesJsonList));

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
