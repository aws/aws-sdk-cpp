/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
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
AWS_APPFLOW_API TriggerType GetTriggerTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForTriggerType(TriggerType value);
} // namespace TriggerTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
