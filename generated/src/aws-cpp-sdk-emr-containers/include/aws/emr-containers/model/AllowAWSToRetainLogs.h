/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>

namespace Aws {
namespace EMRContainers {
namespace Model {
enum class AllowAWSToRetainLogs { NOT_SET, ENABLED, DISABLED };

namespace AllowAWSToRetainLogsMapper {
AWS_EMRCONTAINERS_API AllowAWSToRetainLogs GetAllowAWSToRetainLogsForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForAllowAWSToRetainLogs(AllowAWSToRetainLogs value);
}  // namespace AllowAWSToRetainLogsMapper
}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
