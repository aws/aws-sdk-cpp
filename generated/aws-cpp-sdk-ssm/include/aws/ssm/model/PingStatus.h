/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class PingStatus
  {
    NOT_SET,
    Online,
    ConnectionLost,
    Inactive
  };

namespace PingStatusMapper
{
AWS_SSM_API PingStatus GetPingStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPingStatus(PingStatus value);
} // namespace PingStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
