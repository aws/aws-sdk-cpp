/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class Category
  {
    NOT_SET,
    UPGRADE_READINESS
  };

namespace CategoryMapper
{
AWS_EKS_API Category GetCategoryForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCategory(Category value);
} // namespace CategoryMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
