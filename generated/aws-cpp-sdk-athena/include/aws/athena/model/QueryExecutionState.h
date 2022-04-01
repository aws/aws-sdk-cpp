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
  enum class QueryExecutionState
  {
    NOT_SET,
    QUEUED,
    RUNNING,
    SUCCEEDED,
    FAILED,
    CANCELLED
  };

namespace QueryExecutionStateMapper
{
AWS_ATHENA_API QueryExecutionState GetQueryExecutionStateForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForQueryExecutionState(QueryExecutionState value);
} // namespace QueryExecutionStateMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
