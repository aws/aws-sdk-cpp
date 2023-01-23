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
  enum class StepStateChangeReasonCode
  {
    NOT_SET,
    NONE
  };

namespace StepStateChangeReasonCodeMapper
{
AWS_EMR_API StepStateChangeReasonCode GetStepStateChangeReasonCodeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForStepStateChangeReasonCode(StepStateChangeReasonCode value);
} // namespace StepStateChangeReasonCodeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
