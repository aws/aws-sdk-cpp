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
  enum class SettablePolicyStateValues
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace SettablePolicyStateValuesMapper
{
AWS_DLM_API SettablePolicyStateValues GetSettablePolicyStateValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForSettablePolicyStateValues(SettablePolicyStateValues value);
} // namespace SettablePolicyStateValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
