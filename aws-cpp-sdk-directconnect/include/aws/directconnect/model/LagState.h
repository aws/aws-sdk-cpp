/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class LagState
  {
    NOT_SET,
    requested,
    pending,
    available,
    down,
    deleting,
    deleted,
    unknown
  };

namespace LagStateMapper
{
AWS_DIRECTCONNECT_API LagState GetLagStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForLagState(LagState value);
} // namespace LagStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
