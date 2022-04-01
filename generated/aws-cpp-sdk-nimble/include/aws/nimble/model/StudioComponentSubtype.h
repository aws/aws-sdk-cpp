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
  enum class StudioComponentSubtype
  {
    NOT_SET,
    AWS_MANAGED_MICROSOFT_AD,
    AMAZON_FSX_FOR_WINDOWS,
    AMAZON_FSX_FOR_LUSTRE,
    CUSTOM
  };

namespace StudioComponentSubtypeMapper
{
AWS_NIMBLESTUDIO_API StudioComponentSubtype GetStudioComponentSubtypeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStudioComponentSubtype(StudioComponentSubtype value);
} // namespace StudioComponentSubtypeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
