/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class WorkGroupState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace WorkGroupStateMapper
{
AWS_ATHENA_API WorkGroupState GetWorkGroupStateForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForWorkGroupState(WorkGroupState value);
} // namespace WorkGroupStateMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
