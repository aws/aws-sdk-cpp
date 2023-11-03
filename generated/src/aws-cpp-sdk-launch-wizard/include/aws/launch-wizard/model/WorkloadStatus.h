/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{
  enum class WorkloadStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    DISABLED,
    DELETED
  };

namespace WorkloadStatusMapper
{
AWS_LAUNCHWIZARD_API WorkloadStatus GetWorkloadStatusForName(const Aws::String& name);

AWS_LAUNCHWIZARD_API Aws::String GetNameForWorkloadStatus(WorkloadStatus value);
} // namespace WorkloadStatusMapper
} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
