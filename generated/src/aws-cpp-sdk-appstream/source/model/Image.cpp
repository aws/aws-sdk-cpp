﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/Image.h>
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

Image::Image(JsonView jsonValue)
{
  *this = jsonValue;
}

Image& Image::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseImageArn"))
  {
    m_baseImageArn = jsonValue.GetString("BaseImageArn");
    m_baseImageArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ImageStateMapper::GetImageStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityTypeMapper::GetVisibilityTypeForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageBuilderSupported"))
  {
    m_imageBuilderSupported = jsonValue.GetBool("ImageBuilderSupported");
    m_imageBuilderSupportedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageBuilderName"))
  {
    m_imageBuilderName = jsonValue.GetString("ImageBuilderName");
    m_imageBuilderNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = PlatformTypeMapper::GetPlatformTypeForName(jsonValue.GetString("Platform"));
    m_platformHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetObject("StateChangeReason");
    m_stateChangeReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Applications"))
  {
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("Applications");
    for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
    {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsObject());
    }
    m_applicationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PublicBaseImageReleasedDate"))
  {
    m_publicBaseImageReleasedDate = jsonValue.GetDouble("PublicBaseImageReleasedDate");
    m_publicBaseImageReleasedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppstreamAgentVersion"))
  {
    m_appstreamAgentVersion = jsonValue.GetString("AppstreamAgentVersion");
    m_appstreamAgentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImagePermissions"))
  {
    m_imagePermissions = jsonValue.GetObject("ImagePermissions");
    m_imagePermissionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageErrors"))
  {
    Aws::Utils::Array<JsonView> imageErrorsJsonList = jsonValue.GetArray("ImageErrors");
    for(unsigned imageErrorsIndex = 0; imageErrorsIndex < imageErrorsJsonList.GetLength(); ++imageErrorsIndex)
    {
      m_imageErrors.push_back(imageErrorsJsonList[imageErrorsIndex].AsObject());
    }
    m_imageErrorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestAppstreamAgentVersion"))
  {
    m_latestAppstreamAgentVersion = LatestAppstreamAgentVersionMapper::GetLatestAppstreamAgentVersionForName(jsonValue.GetString("LatestAppstreamAgentVersion"));
    m_latestAppstreamAgentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedInstanceFamilies"))
  {
    Aws::Utils::Array<JsonView> supportedInstanceFamiliesJsonList = jsonValue.GetArray("SupportedInstanceFamilies");
    for(unsigned supportedInstanceFamiliesIndex = 0; supportedInstanceFamiliesIndex < supportedInstanceFamiliesJsonList.GetLength(); ++supportedInstanceFamiliesIndex)
    {
      m_supportedInstanceFamilies.push_back(supportedInstanceFamiliesJsonList[supportedInstanceFamiliesIndex].AsString());
    }
    m_supportedInstanceFamiliesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamicAppProvidersEnabled"))
  {
    m_dynamicAppProvidersEnabled = DynamicAppProvidersEnabledMapper::GetDynamicAppProvidersEnabledForName(jsonValue.GetString("DynamicAppProvidersEnabled"));
    m_dynamicAppProvidersEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageSharedWithOthers"))
  {
    m_imageSharedWithOthers = ImageSharedWithOthersMapper::GetImageSharedWithOthersForName(jsonValue.GetString("ImageSharedWithOthers"));
    m_imageSharedWithOthersHasBeenSet = true;
  }
  return *this;
}

JsonValue Image::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_baseImageArnHasBeenSet)
  {
   payload.WithString("BaseImageArn", m_baseImageArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ImageStateMapper::GetNameForImageState(m_state));
  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityTypeMapper::GetNameForVisibilityType(m_visibility));
  }

  if(m_imageBuilderSupportedHasBeenSet)
  {
   payload.WithBool("ImageBuilderSupported", m_imageBuilderSupported);

  }

  if(m_imageBuilderNameHasBeenSet)
  {
   payload.WithString("ImageBuilderName", m_imageBuilderName);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", PlatformTypeMapper::GetNameForPlatformType(m_platform));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stateChangeReasonHasBeenSet)
  {
   payload.WithObject("StateChangeReason", m_stateChangeReason.Jsonize());

  }

  if(m_applicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
   for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
   {
     applicationsJsonList[applicationsIndex].AsObject(m_applications[applicationsIndex].Jsonize());
   }
   payload.WithArray("Applications", std::move(applicationsJsonList));

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_publicBaseImageReleasedDateHasBeenSet)
  {
   payload.WithDouble("PublicBaseImageReleasedDate", m_publicBaseImageReleasedDate.SecondsWithMSPrecision());
  }

  if(m_appstreamAgentVersionHasBeenSet)
  {
   payload.WithString("AppstreamAgentVersion", m_appstreamAgentVersion);

  }

  if(m_imagePermissionsHasBeenSet)
  {
   payload.WithObject("ImagePermissions", m_imagePermissions.Jsonize());

  }

  if(m_imageErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageErrorsJsonList(m_imageErrors.size());
   for(unsigned imageErrorsIndex = 0; imageErrorsIndex < imageErrorsJsonList.GetLength(); ++imageErrorsIndex)
   {
     imageErrorsJsonList[imageErrorsIndex].AsObject(m_imageErrors[imageErrorsIndex].Jsonize());
   }
   payload.WithArray("ImageErrors", std::move(imageErrorsJsonList));

  }

  if(m_latestAppstreamAgentVersionHasBeenSet)
  {
   payload.WithString("LatestAppstreamAgentVersion", LatestAppstreamAgentVersionMapper::GetNameForLatestAppstreamAgentVersion(m_latestAppstreamAgentVersion));
  }

  if(m_supportedInstanceFamiliesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedInstanceFamiliesJsonList(m_supportedInstanceFamilies.size());
   for(unsigned supportedInstanceFamiliesIndex = 0; supportedInstanceFamiliesIndex < supportedInstanceFamiliesJsonList.GetLength(); ++supportedInstanceFamiliesIndex)
   {
     supportedInstanceFamiliesJsonList[supportedInstanceFamiliesIndex].AsString(m_supportedInstanceFamilies[supportedInstanceFamiliesIndex]);
   }
   payload.WithArray("SupportedInstanceFamilies", std::move(supportedInstanceFamiliesJsonList));

  }

  if(m_dynamicAppProvidersEnabledHasBeenSet)
  {
   payload.WithString("DynamicAppProvidersEnabled", DynamicAppProvidersEnabledMapper::GetNameForDynamicAppProvidersEnabled(m_dynamicAppProvidersEnabled));
  }

  if(m_imageSharedWithOthersHasBeenSet)
  {
   payload.WithString("ImageSharedWithOthers", ImageSharedWithOthersMapper::GetNameForImageSharedWithOthers(m_imageSharedWithOthers));
  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
