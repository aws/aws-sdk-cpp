/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EVS
{
namespace Model
{
  enum class EnvironmentState
  {
    NOT_SET,
    CREATING,
    CREATED,
    DELETING,
    DELETED,
    CREATE_FAILED
  };

namespace EnvironmentStateMapper
{
AWS_EVS_API EnvironmentState GetEnvironmentStateForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForEnvironmentState(EnvironmentState value);
} // namespace EnvironmentStateMapper
} // namespace Model
} // namespace EVS
} // namespace Aws
