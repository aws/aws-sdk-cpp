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
enum class Status { NOT_SET, AVAILABLE, IN_PROGRESS, FAILED };

namespace StatusMapper {
AWS_APIPORTAL_API Status GetStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
