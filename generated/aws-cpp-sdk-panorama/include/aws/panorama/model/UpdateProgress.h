/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class UpdateProgress
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    VERIFYING,
    REBOOTING,
    DOWNLOADING,
    COMPLETED,
    FAILED
  };

namespace UpdateProgressMapper
{
AWS_PANORAMA_API UpdateProgress GetUpdateProgressForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForUpdateProgress(UpdateProgress value);
} // namespace UpdateProgressMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
