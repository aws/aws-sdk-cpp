/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Model {
enum class VersionStatus { NOT_SET, UPDATING, ACTIVE, SUPERSEDED, FAILED_TO_UPDATE };

namespace VersionStatusMapper {
AWS_GROUNDSTATION_API VersionStatus GetVersionStatusForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForVersionStatus(VersionStatus value);
}  // namespace VersionStatusMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
