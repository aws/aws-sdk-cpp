/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ConnectionStatus
  {
    NOT_SET,
    READY,
    IN_PROGRESS,
    FAILED
  };

namespace ConnectionStatusMapper
{
AWS_GLUE_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
