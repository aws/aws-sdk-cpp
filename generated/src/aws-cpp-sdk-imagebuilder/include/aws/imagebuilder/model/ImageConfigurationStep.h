/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

namespace Aws {
namespace imagebuilder {
namespace Model {
enum class ImageConfigurationStep {
  NOT_SET,
  ASSOCIATE_LICENSES,
  UPDATE_LAUNCH_TEMPLATES,
  PUT_SSM_PARAMETERS,
  UPDATE_FAST_LAUNCH_CONFIGURATIONS,
  EXPORT_AMI
};

namespace ImageConfigurationStepMapper {
AWS_IMAGEBUILDER_API ImageConfigurationStep GetImageConfigurationStepForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForImageConfigurationStep(ImageConfigurationStep value);
}  // namespace ImageConfigurationStepMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
