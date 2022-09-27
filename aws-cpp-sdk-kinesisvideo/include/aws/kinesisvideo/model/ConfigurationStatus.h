/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{
  enum class ConfigurationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ConfigurationStatusMapper
{
AWS_KINESISVIDEO_API ConfigurationStatus GetConfigurationStatusForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForConfigurationStatus(ConfigurationStatus value);
} // namespace ConfigurationStatusMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
