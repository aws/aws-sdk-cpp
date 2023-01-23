/**
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
  enum class CoverageResourceType
  {
    NOT_SET,
    AWS_EC2_INSTANCE,
    AWS_ECR_CONTAINER_IMAGE,
    AWS_ECR_REPOSITORY,
    AWS_LAMBDA_FUNCTION
  };

namespace CoverageResourceTypeMapper
{
AWS_INSPECTOR2_API CoverageResourceType GetCoverageResourceTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCoverageResourceType(CoverageResourceType value);
} // namespace CoverageResourceTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
