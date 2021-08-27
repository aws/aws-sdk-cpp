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
  enum class InterconnectState
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

namespace InterconnectStateMapper
{
AWS_DIRECTCONNECT_API InterconnectState GetInterconnectStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForInterconnectState(InterconnectState value);
} // namespace InterconnectStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
