/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class DimensionValueOperator
  {
    NOT_SET,
    IN,
    NOT_IN
  };

namespace DimensionValueOperatorMapper
{
AWS_IOT_API DimensionValueOperator GetDimensionValueOperatorForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForDimensionValueOperator(DimensionValueOperator value);
} // namespace DimensionValueOperatorMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
