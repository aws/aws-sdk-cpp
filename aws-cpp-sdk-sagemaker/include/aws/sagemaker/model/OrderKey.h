/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class OrderKey
  {
    NOT_SET,
    Ascending,
    Descending
  };

namespace OrderKeyMapper
{
AWS_SAGEMAKER_API OrderKey GetOrderKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForOrderKey(OrderKey value);
} // namespace OrderKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
