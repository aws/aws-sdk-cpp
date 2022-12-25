/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class SessionBackupMode
  {
    NOT_SET,
    AUTOMATIC,
    DEACTIVATED
  };

namespace SessionBackupModeMapper
{
AWS_NIMBLESTUDIO_API SessionBackupMode GetSessionBackupModeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForSessionBackupMode(SessionBackupMode value);
} // namespace SessionBackupModeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
