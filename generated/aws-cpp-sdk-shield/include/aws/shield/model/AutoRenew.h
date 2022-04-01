/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class AutoRenew
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AutoRenewMapper
{
AWS_SHIELD_API AutoRenew GetAutoRenewForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForAutoRenew(AutoRenew value);
} // namespace AutoRenewMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
