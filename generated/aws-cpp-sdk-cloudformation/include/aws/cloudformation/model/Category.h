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
  enum class Category
  {
    NOT_SET,
    REGISTERED,
    ACTIVATED,
    THIRD_PARTY,
    AWS_TYPES
  };

namespace CategoryMapper
{
AWS_CLOUDFORMATION_API Category GetCategoryForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForCategory(Category value);
} // namespace CategoryMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
