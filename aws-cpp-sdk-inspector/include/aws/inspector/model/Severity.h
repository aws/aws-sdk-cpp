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
  enum class Severity
  {
    NOT_SET,
    Low,
    Medium,
    High,
    Informational,
    Undefined
  };

namespace SeverityMapper
{
AWS_INSPECTOR_API Severity GetSeverityForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForSeverity(Severity value);
} // namespace SeverityMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
