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
enum class FilterStatus { NOT_SET, VALID, INVALID };

namespace FilterStatusMapper {
AWS_DATAZONE_API FilterStatus GetFilterStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForFilterStatus(FilterStatus value);
}  // namespace FilterStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
