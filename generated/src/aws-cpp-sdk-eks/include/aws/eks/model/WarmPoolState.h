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
enum class WarmPoolState { NOT_SET, STOPPED, RUNNING, HIBERNATED };

namespace WarmPoolStateMapper {
AWS_EKS_API WarmPoolState GetWarmPoolStateForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForWarmPoolState(WarmPoolState value);
}  // namespace WarmPoolStateMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
