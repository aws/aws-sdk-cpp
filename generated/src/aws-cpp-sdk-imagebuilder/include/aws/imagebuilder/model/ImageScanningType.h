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
enum class ImageScanningType { NOT_SET, TEST_INSTANCE_CVE, ON_DEMAND_AMI_CVE };

namespace ImageScanningTypeMapper {
AWS_IMAGEBUILDER_API ImageScanningType GetImageScanningTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForImageScanningType(ImageScanningType value);
}  // namespace ImageScanningTypeMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
