/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{
  enum class TriggerResourceUpdateOn
  {
    NOT_SET,
    ANY_CHANGE,
    FILE_CHANGE
  };

namespace TriggerResourceUpdateOnMapper
{
AWS_CODECONNECTIONS_API TriggerResourceUpdateOn GetTriggerResourceUpdateOnForName(const Aws::String& name);

AWS_CODECONNECTIONS_API Aws::String GetNameForTriggerResourceUpdateOn(TriggerResourceUpdateOn value);
} // namespace TriggerResourceUpdateOnMapper
} // namespace Model
} // namespace CodeConnections
} // namespace Aws
