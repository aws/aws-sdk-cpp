﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class ServiceEnvironmentState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ServiceEnvironmentStateMapper
{
AWS_BATCH_API ServiceEnvironmentState GetServiceEnvironmentStateForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForServiceEnvironmentState(ServiceEnvironmentState value);
} // namespace ServiceEnvironmentStateMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
