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
enum class JobErrorCode { NOT_SET, ValidationError, InternalServerError };

namespace JobErrorCodeMapper {
AWS_LOCATIONSERVICE_API JobErrorCode GetJobErrorCodeForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForJobErrorCode(JobErrorCode value);
}  // namespace JobErrorCodeMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
