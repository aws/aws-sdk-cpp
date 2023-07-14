/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class Operation
  {
    NOT_SET,
    ENABLE_SCANNING,
    DISABLE_SCANNING,
    ENABLE_REPOSITORY,
    DISABLE_REPOSITORY
  };

namespace OperationMapper
{
AWS_INSPECTOR2_API Operation GetOperationForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForOperation(Operation value);
} // namespace OperationMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
