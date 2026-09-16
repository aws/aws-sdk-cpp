/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticbeanstalk/model/ImageBuildType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {
namespace ImageBuildTypeMapper {

static const int docker_HASH = HashingUtils::HashString("docker");
static const int buildpack_HASH = HashingUtils::HashString("buildpack");

ImageBuildType GetImageBuildTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == docker_HASH) {
    return ImageBuildType::docker;
  } else if (hashCode == buildpack_HASH) {
    return ImageBuildType::buildpack;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageBuildType>(hashCode);
  }

  return ImageBuildType::NOT_SET;
}

Aws::String GetNameForImageBuildType(ImageBuildType enumValue) {
  switch (enumValue) {
    case ImageBuildType::NOT_SET:
      return {};
    case ImageBuildType::docker:
      return "docker";
    case ImageBuildType::buildpack:
      return "buildpack";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageBuildTypeMapper
}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
