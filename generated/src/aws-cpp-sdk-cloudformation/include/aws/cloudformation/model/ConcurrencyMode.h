/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class ConcurrencyMode
  {
    NOT_SET,
    STRICT_FAILURE_TOLERANCE,
    SOFT_FAILURE_TOLERANCE
  };

namespace ConcurrencyModeMapper
{
AWS_CLOUDFORMATION_API ConcurrencyMode GetConcurrencyModeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForConcurrencyMode(ConcurrencyMode value);
} // namespace ConcurrencyModeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
