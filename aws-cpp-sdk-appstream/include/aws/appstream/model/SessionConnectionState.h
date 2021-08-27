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
  enum class SessionConnectionState
  {
    NOT_SET,
    CONNECTED,
    NOT_CONNECTED
  };

namespace SessionConnectionStateMapper
{
AWS_APPSTREAM_API SessionConnectionState GetSessionConnectionStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForSessionConnectionState(SessionConnectionState value);
} // namespace SessionConnectionStateMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
