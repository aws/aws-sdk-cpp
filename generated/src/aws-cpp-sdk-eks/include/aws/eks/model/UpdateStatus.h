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
enum class UpdateStatus { NOT_SET, InProgress, Failed, Cancelled, Successful };

namespace UpdateStatusMapper {
AWS_EKS_API UpdateStatus GetUpdateStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForUpdateStatus(UpdateStatus value);
}  // namespace UpdateStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
