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
  enum class JobType
  {
    NOT_SET,
    OTA,
    REBOOT
  };

namespace JobTypeMapper
{
AWS_PANORAMA_API JobType GetJobTypeForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
