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
enum class JobOutputFormat { NOT_SET, Parquet };

namespace JobOutputFormatMapper {
AWS_LOCATIONSERVICE_API JobOutputFormat GetJobOutputFormatForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForJobOutputFormat(JobOutputFormat value);
}  // namespace JobOutputFormatMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
