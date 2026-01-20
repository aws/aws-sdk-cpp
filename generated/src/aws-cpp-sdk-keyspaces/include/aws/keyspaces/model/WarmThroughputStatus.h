/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/Keyspaces_EXPORTS.h>

namespace Aws {
namespace Keyspaces {
namespace Model {
enum class WarmThroughputStatus { NOT_SET, AVAILABLE, UPDATING };

namespace WarmThroughputStatusMapper {
AWS_KEYSPACES_API WarmThroughputStatus GetWarmThroughputStatusForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForWarmThroughputStatus(WarmThroughputStatus value);
}  // namespace WarmThroughputStatusMapper
}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws
