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
  enum class StudioPersona
  {
    NOT_SET,
    ADMINISTRATOR
  };

namespace StudioPersonaMapper
{
AWS_NIMBLESTUDIO_API StudioPersona GetStudioPersonaForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStudioPersona(StudioPersona value);
} // namespace StudioPersonaMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
