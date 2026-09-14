/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/imagebuilder/model/ImageConfigurationStep.h>

using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {
namespace ImageConfigurationStepMapper {

static const int ASSOCIATE_LICENSES_HASH = HashingUtils::HashString("ASSOCIATE_LICENSES");
static const int UPDATE_LAUNCH_TEMPLATES_HASH = HashingUtils::HashString("UPDATE_LAUNCH_TEMPLATES");
static const int PUT_SSM_PARAMETERS_HASH = HashingUtils::HashString("PUT_SSM_PARAMETERS");
static const int UPDATE_FAST_LAUNCH_CONFIGURATIONS_HASH = HashingUtils::HashString("UPDATE_FAST_LAUNCH_CONFIGURATIONS");
static const int EXPORT_AMI_HASH = HashingUtils::HashString("EXPORT_AMI");

ImageConfigurationStep GetImageConfigurationStepForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSOCIATE_LICENSES_HASH) {
    return ImageConfigurationStep::ASSOCIATE_LICENSES;
  } else if (hashCode == UPDATE_LAUNCH_TEMPLATES_HASH) {
    return ImageConfigurationStep::UPDATE_LAUNCH_TEMPLATES;
  } else if (hashCode == PUT_SSM_PARAMETERS_HASH) {
    return ImageConfigurationStep::PUT_SSM_PARAMETERS;
  } else if (hashCode == UPDATE_FAST_LAUNCH_CONFIGURATIONS_HASH) {
    return ImageConfigurationStep::UPDATE_FAST_LAUNCH_CONFIGURATIONS;
  } else if (hashCode == EXPORT_AMI_HASH) {
    return ImageConfigurationStep::EXPORT_AMI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageConfigurationStep>(hashCode);
  }

  return ImageConfigurationStep::NOT_SET;
}

Aws::String GetNameForImageConfigurationStep(ImageConfigurationStep enumValue) {
  switch (enumValue) {
    case ImageConfigurationStep::NOT_SET:
      return {};
    case ImageConfigurationStep::ASSOCIATE_LICENSES:
      return "ASSOCIATE_LICENSES";
    case ImageConfigurationStep::UPDATE_LAUNCH_TEMPLATES:
      return "UPDATE_LAUNCH_TEMPLATES";
    case ImageConfigurationStep::PUT_SSM_PARAMETERS:
      return "PUT_SSM_PARAMETERS";
    case ImageConfigurationStep::UPDATE_FAST_LAUNCH_CONFIGURATIONS:
      return "UPDATE_FAST_LAUNCH_CONFIGURATIONS";
    case ImageConfigurationStep::EXPORT_AMI:
      return "EXPORT_AMI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageConfigurationStepMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
