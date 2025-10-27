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
enum class GroupProfileStatus { NOT_SET, ASSIGNED, NOT_ASSIGNED };

namespace GroupProfileStatusMapper {
AWS_DATAZONE_API GroupProfileStatus GetGroupProfileStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGroupProfileStatus(GroupProfileStatus value);
}  // namespace GroupProfileStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
