/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class SortJobsBy
  {
    NOT_SET,
    CreationTime
  };

namespace SortJobsByMapper
{
AWS_BEDROCK_API SortJobsBy GetSortJobsByForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForSortJobsBy(SortJobsBy value);
} // namespace SortJobsByMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
