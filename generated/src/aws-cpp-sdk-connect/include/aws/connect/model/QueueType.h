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
  enum class QueueType
  {
    NOT_SET,
    STANDARD,
    AGENT
  };

namespace QueueTypeMapper
{
AWS_CONNECT_API QueueType GetQueueTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForQueueType(QueueType value);
} // namespace QueueTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
