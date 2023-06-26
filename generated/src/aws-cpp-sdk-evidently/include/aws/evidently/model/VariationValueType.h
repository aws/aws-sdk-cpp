/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{
  enum class VariationValueType
  {
    NOT_SET,
    STRING,
    LONG,
    DOUBLE,
    BOOLEAN
  };

namespace VariationValueTypeMapper
{
AWS_CLOUDWATCHEVIDENTLY_API VariationValueType GetVariationValueTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForVariationValueType(VariationValueType value);
} // namespace VariationValueTypeMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
