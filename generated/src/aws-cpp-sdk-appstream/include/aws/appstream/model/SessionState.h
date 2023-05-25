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
  enum class SessionState
  {
    NOT_SET,
    ACTIVE,
    PENDING,
    EXPIRED
  };

namespace SessionStateMapper
{
AWS_APPSTREAM_API SessionState GetSessionStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForSessionState(SessionState value);
} // namespace SessionStateMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
