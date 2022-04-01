/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class LaunchProfileValidationState
  {
    NOT_SET,
    VALIDATION_NOT_STARTED,
    VALIDATION_IN_PROGRESS,
    VALIDATION_SUCCESS,
    VALIDATION_FAILED,
    VALIDATION_FAILED_INTERNAL_SERVER_ERROR
  };

namespace LaunchProfileValidationStateMapper
{
AWS_NIMBLESTUDIO_API LaunchProfileValidationState GetLaunchProfileValidationStateForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForLaunchProfileValidationState(LaunchProfileValidationState value);
} // namespace LaunchProfileValidationStateMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
