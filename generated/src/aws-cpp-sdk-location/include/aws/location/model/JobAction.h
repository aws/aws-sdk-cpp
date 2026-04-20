/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/LocationService_EXPORTS.h>

namespace Aws {
namespace LocationService {
namespace Model {
enum class JobAction { NOT_SET, ValidateAddress };

namespace JobActionMapper {
AWS_LOCATIONSERVICE_API JobAction GetJobActionForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForJobAction(JobAction value);
}  // namespace JobActionMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
