/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>

namespace Aws {
namespace IAMToolbox {
namespace Model {
enum class PolicyType {
  NOT_SET,
  IDENTITY_BASED_POLICY,
  RESOURCE_BASED_POLICY,
  PERMISSIONS_BOUNDARY,
  SESSION_POLICY,
  SERVICE_CONTROL_POLICY,
  RESOURCE_CONTROL_POLICY,
  VPC_ENDPOINT_POLICY
};

namespace PolicyTypeMapper {
AWS_IAMTOOLBOX_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_IAMTOOLBOX_API Aws::String GetNameForPolicyType(PolicyType value);
}  // namespace PolicyTypeMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
