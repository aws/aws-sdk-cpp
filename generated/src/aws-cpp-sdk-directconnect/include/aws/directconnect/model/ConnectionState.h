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
  enum class ConnectionState
  {
    NOT_SET,
    ordering,
    requested,
    pending,
    available,
    down,
    deleting,
    deleted,
    rejected,
    unknown
  };

namespace ConnectionStateMapper
{
AWS_DIRECTCONNECT_API ConnectionState GetConnectionStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForConnectionState(ConnectionState value);
} // namespace ConnectionStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
