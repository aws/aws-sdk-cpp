/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class ScopeType
  {
    NOT_SET,
    INSTANCE_ID,
    RULES_PACKAGE_ARN
  };

namespace ScopeTypeMapper
{
AWS_INSPECTOR_API ScopeType GetScopeTypeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForScopeType(ScopeType value);
} // namespace ScopeTypeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
