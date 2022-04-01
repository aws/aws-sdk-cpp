/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DLM
{
namespace Model
{
  enum class RetentionIntervalUnitValues
  {
    NOT_SET,
    DAYS,
    WEEKS,
    MONTHS,
    YEARS
  };

namespace RetentionIntervalUnitValuesMapper
{
AWS_DLM_API RetentionIntervalUnitValues GetRetentionIntervalUnitValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForRetentionIntervalUnitValues(RetentionIntervalUnitValues value);
} // namespace RetentionIntervalUnitValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
