/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class AutoUpgradeStatus { NOT_SET, OBSERVING, UPGRADING, UPGRADE_SUCCEEDED, UPGRADE_FAILED, STOPPED, WAITING_FOR_CONSENT };

namespace AutoUpgradeStatusMapper {
AWS_GLUE_API AutoUpgradeStatus GetAutoUpgradeStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForAutoUpgradeStatus(AutoUpgradeStatus value);
}  // namespace AutoUpgradeStatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
