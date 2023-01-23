/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class EffectivePermission
  {
    NOT_SET,
    PUBLIC_,
    NOT_PUBLIC,
    UNKNOWN
  };

namespace EffectivePermissionMapper
{
AWS_MACIE2_API EffectivePermission GetEffectivePermissionForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForEffectivePermission(EffectivePermission value);
} // namespace EffectivePermissionMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
