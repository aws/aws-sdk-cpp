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
  enum class ChannelRole
  {
    NOT_SET,
    MASTER,
    VIEWER
  };

namespace ChannelRoleMapper
{
AWS_KINESISVIDEO_API ChannelRole GetChannelRoleForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForChannelRole(ChannelRole value);
} // namespace ChannelRoleMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
