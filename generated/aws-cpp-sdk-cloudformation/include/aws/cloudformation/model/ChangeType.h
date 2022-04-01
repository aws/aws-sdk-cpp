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
  enum class ChangeType
  {
    NOT_SET,
    Resource
  };

namespace ChangeTypeMapper
{
AWS_CLOUDFORMATION_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForChangeType(ChangeType value);
} // namespace ChangeTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
