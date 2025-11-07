/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ControlTower {
namespace Model {
enum class RemediationType { NOT_SET, INHERITANCE_DRIFT };

namespace RemediationTypeMapper {
AWS_CONTROLTOWER_API RemediationType GetRemediationTypeForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForRemediationType(RemediationType value);
}  // namespace RemediationTypeMapper
}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
