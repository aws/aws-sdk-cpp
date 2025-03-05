/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{
  enum class ApplicationStatus
  {
    NOT_SET,
    INITIALIZED,
    PROCESSING,
    READY,
    DELETING,
    ERROR_
  };

namespace ApplicationStatusMapper
{
AWS_GAMELIFTSTREAMS_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
} // namespace ApplicationStatusMapper
} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
