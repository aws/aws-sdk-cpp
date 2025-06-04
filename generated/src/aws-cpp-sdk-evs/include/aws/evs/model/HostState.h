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
  enum class HostState
  {
    NOT_SET,
    CREATING,
    CREATED,
    UPDATING,
    DELETING,
    DELETED,
    CREATE_FAILED,
    UPDATE_FAILED
  };

namespace HostStateMapper
{
AWS_EVS_API HostState GetHostStateForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForHostState(HostState value);
} // namespace HostStateMapper
} // namespace Model
} // namespace EVS
} // namespace Aws
