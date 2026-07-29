/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class JobType { NOT_SET, EVENT_DETECTION };

namespace JobTypeMapper {
AWS_IOTSITEWISE_API JobType GetJobTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForJobType(JobType value);
}  // namespace JobTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
