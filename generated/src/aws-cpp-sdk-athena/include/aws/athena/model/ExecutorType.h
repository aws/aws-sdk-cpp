/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class ExecutorType
  {
    NOT_SET,
    COORDINATOR,
    GATEWAY,
    WORKER
  };

namespace ExecutorTypeMapper
{
AWS_ATHENA_API ExecutorType GetExecutorTypeForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForExecutorType(ExecutorType value);
} // namespace ExecutorTypeMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
