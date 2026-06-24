/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace EKS {
namespace Model {
enum class SpreadLevel { NOT_SET, host, rack };

namespace SpreadLevelMapper {
AWS_EKS_API SpreadLevel GetSpreadLevelForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForSpreadLevel(SpreadLevel value);
}  // namespace SpreadLevelMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
