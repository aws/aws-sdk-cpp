/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class SbomValidationStatus { NOT_SET, IN_PROGRESS, FAILED, SUCCEEDED };

namespace SbomValidationStatusMapper {
AWS_IOT_API SbomValidationStatus GetSbomValidationStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForSbomValidationStatus(SbomValidationStatus value);
}  // namespace SbomValidationStatusMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
