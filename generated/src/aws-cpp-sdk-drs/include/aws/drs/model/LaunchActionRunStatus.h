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
  enum class LaunchActionRunStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace LaunchActionRunStatusMapper
{
AWS_DRS_API LaunchActionRunStatus GetLaunchActionRunStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForLaunchActionRunStatus(LaunchActionRunStatus value);
} // namespace LaunchActionRunStatusMapper
} // namespace Model
} // namespace drs
} // namespace Aws
