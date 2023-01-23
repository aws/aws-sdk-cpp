/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class ScalarFunctions
  {
    NOT_SET,
    TRUNC,
    ABS,
    CEILING,
    FLOOR,
    LN,
    LOG,
    ROUND,
    SQRT,
    CAST,
    LOWER,
    RTRIM,
    UPPER,
    COALESCE
  };

namespace ScalarFunctionsMapper
{
AWS_CLEANROOMS_API ScalarFunctions GetScalarFunctionsForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForScalarFunctions(ScalarFunctions value);
} // namespace ScalarFunctionsMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
