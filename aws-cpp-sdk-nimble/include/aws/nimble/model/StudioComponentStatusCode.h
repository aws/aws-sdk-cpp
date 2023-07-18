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
  enum class StudioComponentStatusCode
  {
    NOT_SET,
    ACTIVE_DIRECTORY_ALREADY_EXISTS,
    STUDIO_COMPONENT_CREATED,
    STUDIO_COMPONENT_UPDATED,
    STUDIO_COMPONENT_DELETED,
    ENCRYPTION_KEY_ACCESS_DENIED,
    ENCRYPTION_KEY_NOT_FOUND,
    STUDIO_COMPONENT_CREATE_IN_PROGRESS,
    STUDIO_COMPONENT_UPDATE_IN_PROGRESS,
    STUDIO_COMPONENT_DELETE_IN_PROGRESS,
    INTERNAL_ERROR
  };

namespace StudioComponentStatusCodeMapper
{
AWS_NIMBLESTUDIO_API StudioComponentStatusCode GetStudioComponentStatusCodeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStudioComponentStatusCode(StudioComponentStatusCode value);
} // namespace StudioComponentStatusCodeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
