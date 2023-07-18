/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class StatementState
  {
    NOT_SET,
    WAITING,
    RUNNING,
    AVAILABLE,
    CANCELLING,
    CANCELLED,
    ERROR_
  };

namespace StatementStateMapper
{
AWS_GLUE_API StatementState GetStatementStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForStatementState(StatementState value);
} // namespace StatementStateMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
