/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/GreengrassConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

GreengrassConfiguration::GreengrassConfiguration() : 
    m_compilerOptionsHasBeenSet(false),
    m_targetDevice(TargetDevice::NOT_SET),
    m_targetDeviceHasBeenSet(false),
    m_targetPlatformHasBeenSet(false),
    m_s3OutputLocationHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_componentDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

GreengrassConfiguration::GreengrassConfiguration(JsonView jsonValue) : 
    m_compilerOptionsHasBeenSet(false),
    m_targetDevice(TargetDevice::NOT_SET),
    m_targetDeviceHasBeenSet(false),
    m_targetPlatformHasBeenSet(false),
    m_s3OutputLocationHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_componentDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

GreengrassConfiguration& GreengrassConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompilerOptions"))
  {
    m_compilerOptions = jsonValue.GetString("CompilerOptions");

    m_compilerOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetDevice"))
  {
    m_targetDevice = TargetDeviceMapper::GetTargetDeviceForName(jsonValue.GetString("TargetDevice"));

    m_targetDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetPlatform"))
  {
    m_targetPlatform = jsonValue.GetObject("TargetPlatform");

    m_targetPlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputLocation"))
  {
    m_s3OutputLocation = jsonValue.GetObject("S3OutputLocation");

    m_s3OutputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentName"))
  {
    m_componentName = jsonValue.GetString("ComponentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentVersion"))
  {
    m_componentVersion = jsonValue.GetString("ComponentVersion");

    m_componentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentDescription"))
  {
    m_componentDescription = jsonValue.GetString("ComponentDescription");

    m_componentDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue GreengrassConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_compilerOptionsHasBeenSet)
  {
   payload.WithString("CompilerOptions", m_compilerOptions);

  }

  if(m_targetDeviceHasBeenSet)
  {
   payload.WithString("TargetDevice", TargetDeviceMapper::GetNameForTargetDevice(m_targetDevice));
  }

  if(m_targetPlatformHasBeenSet)
  {
   payload.WithObject("TargetPlatform", m_targetPlatform.Jsonize());

  }

  if(m_s3OutputLocationHasBeenSet)
  {
   payload.WithObject("S3OutputLocation", m_s3OutputLocation.Jsonize());

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("ComponentName", m_componentName);

  }

  if(m_componentVersionHasBeenSet)
  {
   payload.WithString("ComponentVersion", m_componentVersion);

  }

  if(m_componentDescriptionHasBeenSet)
  {
   payload.WithString("ComponentDescription", m_componentDescription);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
