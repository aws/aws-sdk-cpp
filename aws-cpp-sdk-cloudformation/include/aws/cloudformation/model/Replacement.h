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
  enum class Replacement
  {
    NOT_SET,
    True,
    False,
    Conditional
  };

namespace ReplacementMapper
{
AWS_CLOUDFORMATION_API Replacement GetReplacementForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForReplacement(Replacement value);
} // namespace ReplacementMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
