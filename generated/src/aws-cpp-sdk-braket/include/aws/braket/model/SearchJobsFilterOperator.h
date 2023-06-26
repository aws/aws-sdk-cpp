/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class SearchJobsFilterOperator
  {
    NOT_SET,
    LT,
    LTE,
    EQUAL,
    GT,
    GTE,
    BETWEEN,
    CONTAINS
  };

namespace SearchJobsFilterOperatorMapper
{
AWS_BRAKET_API SearchJobsFilterOperator GetSearchJobsFilterOperatorForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForSearchJobsFilterOperator(SearchJobsFilterOperator value);
} // namespace SearchJobsFilterOperatorMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
