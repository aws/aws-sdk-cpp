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
  enum class Visibility
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_
  };

namespace VisibilityMapper
{
AWS_CLOUDFORMATION_API Visibility GetVisibilityForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForVisibility(Visibility value);
} // namespace VisibilityMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
