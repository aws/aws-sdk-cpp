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
  enum class QueryResultType
  {
    NOT_SET,
    DOCUMENT,
    QUESTION_ANSWER,
    ANSWER
  };

namespace QueryResultTypeMapper
{
AWS_KENDRA_API QueryResultType GetQueryResultTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForQueryResultType(QueryResultType value);
} // namespace QueryResultTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
