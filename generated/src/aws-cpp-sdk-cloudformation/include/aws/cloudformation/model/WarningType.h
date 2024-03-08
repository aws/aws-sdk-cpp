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
  enum class WarningType
  {
    NOT_SET,
    MUTUALLY_EXCLUSIVE_PROPERTIES,
    UNSUPPORTED_PROPERTIES,
    MUTUALLY_EXCLUSIVE_TYPES
  };

namespace WarningTypeMapper
{
AWS_CLOUDFORMATION_API WarningType GetWarningTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForWarningType(WarningType value);
} // namespace WarningTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
