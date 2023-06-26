/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Cloud9
{
namespace Model
{
  enum class EnvironmentStatus
  {
    NOT_SET,
    error,
    creating,
    connecting,
    ready,
    stopping,
    stopped,
    deleting
  };

namespace EnvironmentStatusMapper
{
AWS_CLOUD9_API EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name);

AWS_CLOUD9_API Aws::String GetNameForEnvironmentStatus(EnvironmentStatus value);
} // namespace EnvironmentStatusMapper
} // namespace Model
} // namespace Cloud9
} // namespace Aws
