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
enum class VersionStatus { NOT_SET, UNSUPPORTED, STANDARD_SUPPORT, EXTENDED_SUPPORT };

namespace VersionStatusMapper {
AWS_EKS_API VersionStatus GetVersionStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForVersionStatus(VersionStatus value);
}  // namespace VersionStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
