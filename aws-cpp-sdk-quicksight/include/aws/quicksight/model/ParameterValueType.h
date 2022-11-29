/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ParameterValueType
  {
    NOT_SET,
    MULTI_VALUED,
    SINGLE_VALUED
  };

namespace ParameterValueTypeMapper
{
AWS_QUICKSIGHT_API ParameterValueType GetParameterValueTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForParameterValueType(ParameterValueType value);
} // namespace ParameterValueTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
