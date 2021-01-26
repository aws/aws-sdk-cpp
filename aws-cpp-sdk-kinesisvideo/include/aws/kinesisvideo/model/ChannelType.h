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
  enum class ChannelType
  {
    NOT_SET,
    SINGLE_MASTER
  };

namespace ChannelTypeMapper
{
AWS_KINESISVIDEO_API ChannelType GetChannelTypeForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForChannelType(ChannelType value);
} // namespace ChannelTypeMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
