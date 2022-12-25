/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class ApplicationHealthStatus
  {
    NOT_SET,
    HEALTHY,
    LAGGING,
    ERROR_
  };

namespace ApplicationHealthStatusMapper
{
AWS_MGN_API ApplicationHealthStatus GetApplicationHealthStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForApplicationHealthStatus(ApplicationHealthStatus value);
} // namespace ApplicationHealthStatusMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
