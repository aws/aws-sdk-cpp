/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

Image::Image() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_baseImageArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_state(ImageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_visibility(VisibilityType::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_imageBuilderSupported(false),
    m_imageBuilderSupportedHasBeenSet(false),
    m_imageBuilderNameHasBeenSet(false),
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_applicationsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_publicBaseImageReleasedDateHasBeenSet(false),
    m_appstreamAgentVersionHasBeenSet(false),
    m_imagePermissionsHasBeenSet(false)
{
}

Image::Image(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_baseImageArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_state(ImageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_visibility(VisibilityType::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_imageBuilderSupported(false),
    m_imageBuilderSupportedHasBeenSet(false),
    m_imageBuilderNameHasBeenSet(false),
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_applicationsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_publicBaseImageReleasedDateHasBeenSet(false),
    m_appstreamAgentVersionHasBeenSet(false),
    m_imagePermissionsHasBeenSet(false)
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
    Array<JsonView> applicationsJsonList = jsonValue.GetArray("Applications");
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
   Array<JsonValue> applicationsJsonList(m_applications.size());
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

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
