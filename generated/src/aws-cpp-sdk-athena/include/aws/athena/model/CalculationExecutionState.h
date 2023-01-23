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
  enum class CalculationExecutionState
  {
    NOT_SET,
    CREATING,
    CREATED,
    QUEUED,
    RUNNING,
    CANCELING,
    CANCELED,
    COMPLETED,
    FAILED
  };

namespace CalculationExecutionStateMapper
{
AWS_ATHENA_API CalculationExecutionState GetCalculationExecutionStateForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForCalculationExecutionState(CalculationExecutionState value);
} // namespace CalculationExecutionStateMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
