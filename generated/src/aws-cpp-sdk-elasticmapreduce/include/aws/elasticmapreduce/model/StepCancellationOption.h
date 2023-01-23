/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class StepCancellationOption
  {
    NOT_SET,
    SEND_INTERRUPT,
    TERMINATE_PROCESS
  };

namespace StepCancellationOptionMapper
{
AWS_EMR_API StepCancellationOption GetStepCancellationOptionForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForStepCancellationOption(StepCancellationOption value);
} // namespace StepCancellationOptionMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
