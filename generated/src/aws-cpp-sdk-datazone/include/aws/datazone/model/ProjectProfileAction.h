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
enum class ProjectProfileAction { NOT_SET, DISASSOCIATE };

namespace ProjectProfileActionMapper {
AWS_DATAZONE_API ProjectProfileAction GetProjectProfileActionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForProjectProfileAction(ProjectProfileAction value);
}  // namespace ProjectProfileActionMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
