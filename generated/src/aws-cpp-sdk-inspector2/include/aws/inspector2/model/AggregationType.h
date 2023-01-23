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
  enum class AggregationType
  {
    NOT_SET,
    FINDING_TYPE,
    PACKAGE,
    TITLE,
    REPOSITORY,
    AMI,
    AWS_EC2_INSTANCE,
    AWS_ECR_CONTAINER,
    IMAGE_LAYER,
    ACCOUNT,
    AWS_LAMBDA_FUNCTION,
    LAMBDA_LAYER
  };

namespace AggregationTypeMapper
{
AWS_INSPECTOR2_API AggregationType GetAggregationTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForAggregationType(AggregationType value);
} // namespace AggregationTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
