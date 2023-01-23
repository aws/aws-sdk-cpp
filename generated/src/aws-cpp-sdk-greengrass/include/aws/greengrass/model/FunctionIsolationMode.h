/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Greengrass
{
namespace Model
{
  enum class FunctionIsolationMode
  {
    NOT_SET,
    GreengrassContainer,
    NoContainer
  };

namespace FunctionIsolationModeMapper
{
AWS_GREENGRASS_API FunctionIsolationMode GetFunctionIsolationModeForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForFunctionIsolationMode(FunctionIsolationMode value);
} // namespace FunctionIsolationModeMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
