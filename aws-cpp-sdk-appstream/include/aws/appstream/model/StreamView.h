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
  enum class StreamView
  {
    NOT_SET,
    APP,
    DESKTOP
  };

namespace StreamViewMapper
{
AWS_APPSTREAM_API StreamView GetStreamViewForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForStreamView(StreamView value);
} // namespace StreamViewMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
