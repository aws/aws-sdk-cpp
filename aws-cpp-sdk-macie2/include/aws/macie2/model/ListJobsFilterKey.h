/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class ListJobsFilterKey
  {
    NOT_SET,
    jobType,
    jobStatus,
    createdAt,
    name
  };

namespace ListJobsFilterKeyMapper
{
AWS_MACIE2_API ListJobsFilterKey GetListJobsFilterKeyForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForListJobsFilterKey(ListJobsFilterKey value);
} // namespace ListJobsFilterKeyMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
