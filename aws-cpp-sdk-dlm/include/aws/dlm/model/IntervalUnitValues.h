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
  enum class IntervalUnitValues
  {
    NOT_SET,
    HOURS
  };

namespace IntervalUnitValuesMapper
{
AWS_DLM_API IntervalUnitValues GetIntervalUnitValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForIntervalUnitValues(IntervalUnitValues value);
} // namespace IntervalUnitValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
