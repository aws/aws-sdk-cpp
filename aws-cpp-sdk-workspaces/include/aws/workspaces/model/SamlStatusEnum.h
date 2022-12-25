/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class SamlStatusEnum
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    ENABLED_WITH_DIRECTORY_LOGIN_FALLBACK
  };

namespace SamlStatusEnumMapper
{
AWS_WORKSPACES_API SamlStatusEnum GetSamlStatusEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForSamlStatusEnum(SamlStatusEnum value);
} // namespace SamlStatusEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
