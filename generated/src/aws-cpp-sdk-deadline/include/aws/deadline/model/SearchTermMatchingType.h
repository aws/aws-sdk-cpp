/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class SearchTermMatchingType
  {
    NOT_SET,
    FUZZY_MATCH,
    CONTAINS
  };

namespace SearchTermMatchingTypeMapper
{
AWS_DEADLINE_API SearchTermMatchingType GetSearchTermMatchingTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForSearchTermMatchingType(SearchTermMatchingType value);
} // namespace SearchTermMatchingTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
