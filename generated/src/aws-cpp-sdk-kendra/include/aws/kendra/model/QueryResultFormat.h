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
  enum class QueryResultFormat
  {
    NOT_SET,
    TABLE,
    TEXT
  };

namespace QueryResultFormatMapper
{
AWS_KENDRA_API QueryResultFormat GetQueryResultFormatForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForQueryResultFormat(QueryResultFormat value);
} // namespace QueryResultFormatMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
