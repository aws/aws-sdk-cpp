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
  enum class StreamProcessorStatus
  {
    NOT_SET,
    STOPPED,
    STARTING,
    RUNNING,
    FAILED,
    STOPPING
  };

namespace StreamProcessorStatusMapper
{
AWS_REKOGNITION_API StreamProcessorStatus GetStreamProcessorStatusForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForStreamProcessorStatus(StreamProcessorStatus value);
} // namespace StreamProcessorStatusMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
