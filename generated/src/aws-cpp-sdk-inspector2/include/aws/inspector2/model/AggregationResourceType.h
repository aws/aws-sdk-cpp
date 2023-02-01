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
  enum class AggregationResourceType
  {
    NOT_SET,
    AWS_EC2_INSTANCE,
    AWS_ECR_CONTAINER_IMAGE,
    AWS_LAMBDA_FUNCTION
  };

namespace AggregationResourceTypeMapper
{
AWS_INSPECTOR2_API AggregationResourceType GetAggregationResourceTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForAggregationResourceType(AggregationResourceType value);
} // namespace AggregationResourceTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
