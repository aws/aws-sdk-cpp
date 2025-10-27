/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/Detective_EXPORTS.h>

namespace Aws {
namespace Detective {
namespace Model {
enum class Status { NOT_SET, RUNNING, FAILED, SUCCESSFUL };

namespace StatusMapper {
AWS_DETECTIVE_API Status GetStatusForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace Detective
}  // namespace Aws
