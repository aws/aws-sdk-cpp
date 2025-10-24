﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class UsageType {
  NOT_SET,
  EC2_INSTANCE_HOURS,
  ECR_INITIAL_SCAN,
  ECR_RESCAN,
  LAMBDA_FUNCTION_HOURS,
  LAMBDA_FUNCTION_CODE_HOURS,
  CODE_REPOSITORY_SAST,
  CODE_REPOSITORY_IAC,
  CODE_REPOSITORY_SCA,
  EC2_AGENTLESS_INSTANCE_HOURS
};

namespace UsageTypeMapper {
AWS_INSPECTOR2_API UsageType GetUsageTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForUsageType(UsageType value);
}  // namespace UsageTypeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
