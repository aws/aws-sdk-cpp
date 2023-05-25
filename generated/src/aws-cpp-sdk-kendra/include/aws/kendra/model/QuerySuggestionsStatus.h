/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class QuerySuggestionsStatus
  {
    NOT_SET,
    ACTIVE,
    UPDATING
  };

namespace QuerySuggestionsStatusMapper
{
AWS_KENDRA_API QuerySuggestionsStatus GetQuerySuggestionsStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForQuerySuggestionsStatus(QuerySuggestionsStatus value);
} // namespace QuerySuggestionsStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
