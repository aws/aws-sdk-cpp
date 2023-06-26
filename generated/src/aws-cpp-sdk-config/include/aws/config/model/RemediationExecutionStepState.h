﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class RemediationExecutionStepState
  {
    NOT_SET,
    SUCCEEDED,
    PENDING,
    FAILED
  };

namespace RemediationExecutionStepStateMapper
{
AWS_CONFIGSERVICE_API RemediationExecutionStepState GetRemediationExecutionStepStateForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForRemediationExecutionStepState(RemediationExecutionStepState value);
} // namespace RemediationExecutionStepStateMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
