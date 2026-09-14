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
enum class RegionFailureStatus { NOT_SET, FAILED, CANCELLED, TIMED_OUT };

namespace RegionFailureStatusMapper {
AWS_IMAGEBUILDER_API RegionFailureStatus GetRegionFailureStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForRegionFailureStatus(RegionFailureStatus value);
}  // namespace RegionFailureStatusMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
