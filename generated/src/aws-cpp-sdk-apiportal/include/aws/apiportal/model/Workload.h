/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class Workload { NOT_SET, MCP, LLM, A2A };

namespace WorkloadMapper {
AWS_APIPORTAL_API Workload GetWorkloadForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForWorkload(Workload value);
}  // namespace WorkloadMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
