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
  enum class AutoMLSortBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace AutoMLSortByMapper
{
AWS_SAGEMAKER_API AutoMLSortBy GetAutoMLSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLSortBy(AutoMLSortBy value);
} // namespace AutoMLSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
