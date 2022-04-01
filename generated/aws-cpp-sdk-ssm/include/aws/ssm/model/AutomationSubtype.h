/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AutomationSubtype
  {
    NOT_SET,
    ChangeRequest
  };

namespace AutomationSubtypeMapper
{
AWS_SSM_API AutomationSubtype GetAutomationSubtypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAutomationSubtype(AutomationSubtype value);
} // namespace AutomationSubtypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
