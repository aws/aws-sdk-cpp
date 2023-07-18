/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class ThresholdType
  {
    NOT_SET,
    GREATER_THAN_OR_EQUAL,
    LESS_THAN_OR_EQUAL,
    GREATER_THAN,
    LESS_THAN
  };

namespace ThresholdTypeMapper
{
AWS_GLUEDATABREW_API ThresholdType GetThresholdTypeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForThresholdType(ThresholdType value);
} // namespace ThresholdTypeMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
