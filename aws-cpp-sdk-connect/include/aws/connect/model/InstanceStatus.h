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
  enum class InstanceStatus
  {
    NOT_SET,
    CREATION_IN_PROGRESS,
    ACTIVE,
    CREATION_FAILED
  };

namespace InstanceStatusMapper
{
AWS_CONNECT_API InstanceStatus GetInstanceStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForInstanceStatus(InstanceStatus value);
} // namespace InstanceStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
