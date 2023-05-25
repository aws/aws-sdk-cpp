/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class LaunchStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    LAUNCHED,
    FAILED,
    TERMINATED
  };

namespace LaunchStatusMapper
{
AWS_DRS_API LaunchStatus GetLaunchStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForLaunchStatus(LaunchStatus value);
} // namespace LaunchStatusMapper
} // namespace Model
} // namespace drs
} // namespace Aws
