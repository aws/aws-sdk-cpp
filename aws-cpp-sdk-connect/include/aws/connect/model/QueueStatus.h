/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class QueueStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace QueueStatusMapper
{
AWS_CONNECT_API QueueStatus GetQueueStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForQueueStatus(QueueStatus value);
} // namespace QueueStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
