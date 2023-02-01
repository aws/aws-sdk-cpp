/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{
  enum class SortOrder
  {
    NOT_SET,
    asc,
    dsc
  };

namespace SortOrderMapper
{
AWS_MACHINELEARNING_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
