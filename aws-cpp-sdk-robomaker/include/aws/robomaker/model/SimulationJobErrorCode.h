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
  enum class SimulationJobErrorCode
  {
    NOT_SET,
    InternalServiceError,
    RobotApplicationCrash,
    SimulationApplicationCrash,
    BadPermissionsRobotApplication,
    BadPermissionsSimulationApplication,
    BadPermissionsS3Object,
    BadPermissionsS3Output,
    BadPermissionsCloudwatchLogs,
    SubnetIpLimitExceeded,
    ENILimitExceeded,
    BadPermissionsUserCredentials,
    InvalidBundleRobotApplication,
    InvalidBundleSimulationApplication,
    InvalidS3Resource,
    LimitExceeded,
    MismatchedEtag,
    RobotApplicationVersionMismatchedEtag,
    SimulationApplicationVersionMismatchedEtag,
    ResourceNotFound,
    RequestThrottled,
    BatchTimedOut,
    BatchCanceled,
    InvalidInput,
    WrongRegionS3Bucket,
    WrongRegionS3Output,
    WrongRegionRobotApplication,
    WrongRegionSimulationApplication
  };

namespace SimulationJobErrorCodeMapper
{
AWS_ROBOMAKER_API SimulationJobErrorCode GetSimulationJobErrorCodeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForSimulationJobErrorCode(SimulationJobErrorCode value);
} // namespace SimulationJobErrorCodeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
