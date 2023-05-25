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
  enum class StrategyOnFullSize
  {
    NOT_SET,
    DELETE_OLDEST_MEDIA,
    DENY_NEW_MEDIA
  };

namespace StrategyOnFullSizeMapper
{
AWS_KINESISVIDEO_API StrategyOnFullSize GetStrategyOnFullSizeForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForStrategyOnFullSize(StrategyOnFullSize value);
} // namespace StrategyOnFullSizeMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
