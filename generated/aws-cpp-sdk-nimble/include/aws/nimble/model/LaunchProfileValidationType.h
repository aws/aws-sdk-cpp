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
  enum class LaunchProfileValidationType
  {
    NOT_SET,
    VALIDATE_ACTIVE_DIRECTORY_STUDIO_COMPONENT,
    VALIDATE_SUBNET_ASSOCIATION,
    VALIDATE_NETWORK_ACL_ASSOCIATION,
    VALIDATE_SECURITY_GROUP_ASSOCIATION
  };

namespace LaunchProfileValidationTypeMapper
{
AWS_NIMBLESTUDIO_API LaunchProfileValidationType GetLaunchProfileValidationTypeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForLaunchProfileValidationType(LaunchProfileValidationType value);
} // namespace LaunchProfileValidationTypeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
