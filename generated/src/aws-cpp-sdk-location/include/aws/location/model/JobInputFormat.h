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
enum class JobInputFormat { NOT_SET, Parquet };

namespace JobInputFormatMapper {
AWS_LOCATIONSERVICE_API JobInputFormat GetJobInputFormatForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForJobInputFormat(JobInputFormat value);
}  // namespace JobInputFormatMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
