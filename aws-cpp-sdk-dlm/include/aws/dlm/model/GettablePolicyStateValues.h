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
  enum class GettablePolicyStateValues
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    ERROR_
  };

namespace GettablePolicyStateValuesMapper
{
AWS_DLM_API GettablePolicyStateValues GetGettablePolicyStateValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForGettablePolicyStateValues(GettablePolicyStateValues value);
} // namespace GettablePolicyStateValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
