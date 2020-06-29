/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class ImageBuilderState
  {
    NOT_SET,
    PENDING,
    UPDATING_AGENT,
    RUNNING,
    STOPPING,
    STOPPED,
    REBOOTING,
    SNAPSHOTTING,
    DELETING,
    FAILED
  };

namespace ImageBuilderStateMapper
{
AWS_APPSTREAM_API ImageBuilderState GetImageBuilderStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForImageBuilderState(ImageBuilderState value);
} // namespace ImageBuilderStateMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
