/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class ProjectVersionStatus
  {
    NOT_SET,
    TRAINING_IN_PROGRESS,
    TRAINING_COMPLETED,
    TRAINING_FAILED,
    STARTING,
    RUNNING,
    FAILED,
    STOPPING,
    STOPPED,
    DELETING
  };

namespace ProjectVersionStatusMapper
{
AWS_REKOGNITION_API ProjectVersionStatus GetProjectVersionStatusForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForProjectVersionStatus(ProjectVersionStatus value);
} // namespace ProjectVersionStatusMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
