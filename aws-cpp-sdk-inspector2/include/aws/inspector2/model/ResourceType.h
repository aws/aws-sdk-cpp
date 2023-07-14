﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    AWS_EC2_INSTANCE,
    AWS_ECR_CONTAINER_IMAGE,
    AWS_ECR_REPOSITORY
  };

namespace ResourceTypeMapper
{
AWS_INSPECTOR2_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
