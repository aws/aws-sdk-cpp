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
enum class CancellationStatus { NOT_SET, InProgress, Failed, Successful };

namespace CancellationStatusMapper {
AWS_EKS_API CancellationStatus GetCancellationStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCancellationStatus(CancellationStatus value);
}  // namespace CancellationStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
