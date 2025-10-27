/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class ActiveDirectoryErrorType {
  NOT_SET,
  DOMAIN_NOT_FOUND,
  INCOMPATIBLE_DOMAIN_MODE,
  WRONG_VPC,
  INVALID_NETWORK_TYPE,
  INVALID_DOMAIN_STAGE
};

namespace ActiveDirectoryErrorTypeMapper {
AWS_FSX_API ActiveDirectoryErrorType GetActiveDirectoryErrorTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForActiveDirectoryErrorType(ActiveDirectoryErrorType value);
}  // namespace ActiveDirectoryErrorTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
