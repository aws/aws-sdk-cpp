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
  enum class ListCompilationJobsSortBy
  {
    NOT_SET,
    Name,
    CreationTime,
    Status
  };

namespace ListCompilationJobsSortByMapper
{
AWS_SAGEMAKER_API ListCompilationJobsSortBy GetListCompilationJobsSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListCompilationJobsSortBy(ListCompilationJobsSortBy value);
} // namespace ListCompilationJobsSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
