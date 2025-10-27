/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class Status { NOT_SET, ENABLED, DISABLED };

namespace StatusMapper {
AWS_DATAZONE_API Status GetStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
