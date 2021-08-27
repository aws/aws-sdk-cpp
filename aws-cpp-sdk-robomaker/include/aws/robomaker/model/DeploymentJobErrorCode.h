/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class DeploymentJobErrorCode
  {
    NOT_SET,
    ResourceNotFound,
    EnvironmentSetupError,
    EtagMismatch,
    FailureThresholdBreached,
    RobotDeploymentAborted,
    RobotDeploymentNoResponse,
    RobotAgentConnectionTimeout,
    GreengrassDeploymentFailed,
    InvalidGreengrassGroup,
    MissingRobotArchitecture,
    MissingRobotApplicationArchitecture,
    MissingRobotDeploymentResource,
    GreengrassGroupVersionDoesNotExist,
    LambdaDeleted,
    ExtractingBundleFailure,
    PreLaunchFileFailure,
    PostLaunchFileFailure,
    BadPermissionError,
    DownloadConditionFailed,
    InternalServerError
  };

namespace DeploymentJobErrorCodeMapper
{
AWS_ROBOMAKER_API DeploymentJobErrorCode GetDeploymentJobErrorCodeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForDeploymentJobErrorCode(DeploymentJobErrorCode value);
} // namespace DeploymentJobErrorCodeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
