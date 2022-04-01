/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class RenewalStatus
  {
    NOT_SET,
    PendingAutoRenewal,
    PendingValidation,
    Success,
    Failed
  };

namespace RenewalStatusMapper
{
AWS_LIGHTSAIL_API RenewalStatus GetRenewalStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForRenewalStatus(RenewalStatus value);
} // namespace RenewalStatusMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
