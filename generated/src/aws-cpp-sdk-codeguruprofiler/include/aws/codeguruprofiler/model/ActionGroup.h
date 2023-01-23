/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class ActionGroup
  {
    NOT_SET,
    agentPermissions
  };

namespace ActionGroupMapper
{
AWS_CODEGURUPROFILER_API ActionGroup GetActionGroupForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForActionGroup(ActionGroup value);
} // namespace ActionGroupMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
