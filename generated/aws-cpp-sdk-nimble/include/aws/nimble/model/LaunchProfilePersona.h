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
  enum class LaunchProfilePersona
  {
    NOT_SET,
    USER
  };

namespace LaunchProfilePersonaMapper
{
AWS_NIMBLESTUDIO_API LaunchProfilePersona GetLaunchProfilePersonaForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForLaunchProfilePersona(LaunchProfilePersona value);
} // namespace LaunchProfilePersonaMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
