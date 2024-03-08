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
  enum class DefaultPolicyTypeValues
  {
    NOT_SET,
    VOLUME,
    INSTANCE
  };

namespace DefaultPolicyTypeValuesMapper
{
AWS_DLM_API DefaultPolicyTypeValues GetDefaultPolicyTypeValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForDefaultPolicyTypeValues(DefaultPolicyTypeValues value);
} // namespace DefaultPolicyTypeValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
