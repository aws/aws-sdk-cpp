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
  enum class ConnectionStatus
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    ERROR_
  };

namespace ConnectionStatusMapper
{
AWS_CODESTARCONNECTIONS_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_CODESTARCONNECTIONS_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
