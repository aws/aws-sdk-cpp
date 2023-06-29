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
  enum class AppBlockBuilderState
  {
    NOT_SET,
    STARTING,
    RUNNING,
    STOPPING,
    STOPPED
  };

namespace AppBlockBuilderStateMapper
{
AWS_APPSTREAM_API AppBlockBuilderState GetAppBlockBuilderStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAppBlockBuilderState(AppBlockBuilderState value);
} // namespace AppBlockBuilderStateMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
