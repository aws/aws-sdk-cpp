/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarconnections
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
AWS_CODESTARCONNECTIONS_API TriggerResourceUpdateOn GetTriggerResourceUpdateOnForName(const Aws::String& name);

AWS_CODESTARCONNECTIONS_API Aws::String GetNameForTriggerResourceUpdateOn(TriggerResourceUpdateOn value);
} // namespace TriggerResourceUpdateOnMapper
} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
