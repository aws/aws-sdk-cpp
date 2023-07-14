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
  enum class Direction
  {
    NOT_SET,
    Both,
    Ascendants,
    Descendants
  };

namespace DirectionMapper
{
AWS_SAGEMAKER_API Direction GetDirectionForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDirection(Direction value);
} // namespace DirectionMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
