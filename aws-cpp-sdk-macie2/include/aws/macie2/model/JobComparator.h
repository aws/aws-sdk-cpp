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
  enum class JobComparator
  {
    NOT_SET,
    EQ,
    GT,
    GTE,
    LT,
    LTE,
    NE,
    CONTAINS
  };

namespace JobComparatorMapper
{
AWS_MACIE2_API JobComparator GetJobComparatorForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForJobComparator(JobComparator value);
} // namespace JobComparatorMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
