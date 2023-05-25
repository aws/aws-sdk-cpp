/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class TriggerType
  {
    NOT_SET,
    Scheduled,
    Event,
    OnDemand
  };

namespace TriggerTypeMapper
{
AWS_CUSTOMERPROFILES_API TriggerType GetTriggerTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForTriggerType(TriggerType value);
} // namespace TriggerTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
