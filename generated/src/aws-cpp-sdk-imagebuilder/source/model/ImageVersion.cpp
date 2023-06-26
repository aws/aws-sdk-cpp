﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ImageVersion::ImageVersion() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ImageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_buildType(BuildType::NOT_SET),
    m_buildTypeHasBeenSet(false),
    m_imageSource(ImageSource::NOT_SET),
    m_imageSourceHasBeenSet(false)
{
}

ImageVersion::ImageVersion(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ImageType::NOT_SET),
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_buildType(BuildType::NOT_SET),
    m_buildTypeHasBeenSet(false),
    m_imageSource(ImageSource::NOT_SET),
    m_imageSourceHasBeenSet(false)
{
  *this = jsonValue;
}

ImageVersion& ImageVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ImageTypeMapper::GetImageTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = PlatformMapper::GetPlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("osVersion"))
  {
    m_osVersion = jsonValue.GetString("osVersion");

    m_osVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetString("dateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildType"))
  {
    m_buildType = BuildTypeMapper::GetBuildTypeForName(jsonValue.GetString("buildType"));

    m_buildTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageSource"))
  {
    m_imageSource = ImageSourceMapper::GetImageSourceForName(jsonValue.GetString("imageSource"));

    m_imageSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageVersion::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ImageTypeMapper::GetNameForImageType(m_type));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_osVersionHasBeenSet)
  {
   payload.WithString("osVersion", m_osVersion);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("dateCreated", m_dateCreated);

  }

  if(m_buildTypeHasBeenSet)
  {
   payload.WithString("buildType", BuildTypeMapper::GetNameForBuildType(m_buildType));
  }

  if(m_imageSourceHasBeenSet)
  {
   payload.WithString("imageSource", ImageSourceMapper::GetNameForImageSource(m_imageSource));
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
