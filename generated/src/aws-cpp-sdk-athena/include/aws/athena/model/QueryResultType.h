/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class QueryResultType
  {
    NOT_SET,
    DATA_MANIFEST,
    DATA_ROWS
  };

namespace QueryResultTypeMapper
{
AWS_ATHENA_API QueryResultType GetQueryResultTypeForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForQueryResultType(QueryResultType value);
} // namespace QueryResultTypeMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
