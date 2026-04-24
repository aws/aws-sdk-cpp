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
enum class CapabilityIssueCode { NOT_SET, AccessDenied, ClusterUnreachable };

namespace CapabilityIssueCodeMapper {
AWS_EKS_API CapabilityIssueCode GetCapabilityIssueCodeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCapabilityIssueCode(CapabilityIssueCode value);
}  // namespace CapabilityIssueCodeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
