/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class FreeTrialInfoErrorCode
  {
    NOT_SET,
    ACCESS_DENIED,
    INTERNAL_ERROR
  };

namespace FreeTrialInfoErrorCodeMapper
{
AWS_INSPECTOR2_API FreeTrialInfoErrorCode GetFreeTrialInfoErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForFreeTrialInfoErrorCode(FreeTrialInfoErrorCode value);
} // namespace FreeTrialInfoErrorCodeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
