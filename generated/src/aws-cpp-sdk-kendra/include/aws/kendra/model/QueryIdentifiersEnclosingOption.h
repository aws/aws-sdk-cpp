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
  enum class QueryIdentifiersEnclosingOption
  {
    NOT_SET,
    DOUBLE_QUOTES,
    NONE
  };

namespace QueryIdentifiersEnclosingOptionMapper
{
AWS_KENDRA_API QueryIdentifiersEnclosingOption GetQueryIdentifiersEnclosingOptionForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForQueryIdentifiersEnclosingOption(QueryIdentifiersEnclosingOption value);
} // namespace QueryIdentifiersEnclosingOptionMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
