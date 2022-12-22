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
  enum class StudioStatusCode
  {
    NOT_SET,
    STUDIO_CREATED,
    STUDIO_DELETED,
    STUDIO_UPDATED,
    STUDIO_CREATE_IN_PROGRESS,
    STUDIO_UPDATE_IN_PROGRESS,
    STUDIO_DELETE_IN_PROGRESS,
    STUDIO_WITH_LAUNCH_PROFILES_NOT_DELETED,
    STUDIO_WITH_STUDIO_COMPONENTS_NOT_DELETED,
    STUDIO_WITH_STREAMING_IMAGES_NOT_DELETED,
    AWS_SSO_NOT_ENABLED,
    AWS_SSO_ACCESS_DENIED,
    ROLE_NOT_OWNED_BY_STUDIO_OWNER,
    ROLE_COULD_NOT_BE_ASSUMED,
    INTERNAL_ERROR,
    ENCRYPTION_KEY_NOT_FOUND,
    ENCRYPTION_KEY_ACCESS_DENIED,
    AWS_SSO_CONFIGURATION_REPAIRED,
    AWS_SSO_CONFIGURATION_REPAIR_IN_PROGRESS,
    AWS_STS_REGION_DISABLED
  };

namespace StudioStatusCodeMapper
{
AWS_NIMBLESTUDIO_API StudioStatusCode GetStudioStatusCodeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStudioStatusCode(StudioStatusCode value);
} // namespace StudioStatusCodeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
