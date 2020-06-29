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
  enum class Action
  {
    NOT_SET,
    CLIPBOARD_COPY_FROM_LOCAL_DEVICE,
    CLIPBOARD_COPY_TO_LOCAL_DEVICE,
    FILE_UPLOAD,
    FILE_DOWNLOAD,
    PRINTING_TO_LOCAL_DEVICE
  };

namespace ActionMapper
{
AWS_APPSTREAM_API Action GetActionForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAction(Action value);
} // namespace ActionMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
