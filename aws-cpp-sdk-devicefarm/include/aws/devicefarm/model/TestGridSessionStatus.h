/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class TestGridSessionStatus
  {
    NOT_SET,
    ACTIVE,
    CLOSED,
    ERRORED
  };

namespace TestGridSessionStatusMapper
{
AWS_DEVICEFARM_API TestGridSessionStatus GetTestGridSessionStatusForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForTestGridSessionStatus(TestGridSessionStatus value);
} // namespace TestGridSessionStatusMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
