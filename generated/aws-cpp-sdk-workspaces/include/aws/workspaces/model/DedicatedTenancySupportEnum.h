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
  enum class DedicatedTenancySupportEnum
  {
    NOT_SET,
    ENABLED
  };

namespace DedicatedTenancySupportEnumMapper
{
AWS_WORKSPACES_API DedicatedTenancySupportEnum GetDedicatedTenancySupportEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDedicatedTenancySupportEnum(DedicatedTenancySupportEnum value);
} // namespace DedicatedTenancySupportEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
