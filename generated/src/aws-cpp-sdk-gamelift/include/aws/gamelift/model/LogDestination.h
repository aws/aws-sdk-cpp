/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class LogDestination
  {
    NOT_SET,
    NONE,
    CLOUDWATCH,
    S3
  };

namespace LogDestinationMapper
{
AWS_GAMELIFT_API LogDestination GetLogDestinationForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForLogDestination(LogDestination value);
} // namespace LogDestinationMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
