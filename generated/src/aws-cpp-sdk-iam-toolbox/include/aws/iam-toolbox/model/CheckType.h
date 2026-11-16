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
enum class CheckType {
  NOT_SET,
  SERVICE_CONTROL_POLICY,
  RESOURCE_CONTROL_POLICY,
  VPC_ENDPOINT,
  RESOURCE,
  PRINCIPAL,
  PERMISSIONS_BOUNDARY,
  SESSION
};

namespace CheckTypeMapper {
AWS_IAMTOOLBOX_API CheckType GetCheckTypeForName(const Aws::String& name);

AWS_IAMTOOLBOX_API Aws::String GetNameForCheckType(CheckType value);
}  // namespace CheckTypeMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
