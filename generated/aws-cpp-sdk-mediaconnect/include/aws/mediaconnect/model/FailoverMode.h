/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class FailoverMode
  {
    NOT_SET,
    MERGE,
    FAILOVER
  };

namespace FailoverModeMapper
{
AWS_MEDIACONNECT_API FailoverMode GetFailoverModeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForFailoverMode(FailoverMode value);
} // namespace FailoverModeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
