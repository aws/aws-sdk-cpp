/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class ExpressionType
  {
    NOT_SET,
    SQL
  };

namespace ExpressionTypeMapper
{
AWS_GLACIER_API ExpressionType GetExpressionTypeForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForExpressionType(ExpressionType value);
} // namespace ExpressionTypeMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
