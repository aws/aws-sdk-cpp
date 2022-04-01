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
  enum class Severity
  {
    NOT_SET,
    INFORMATIONAL,
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL,
    UNTRIAGED
  };

namespace SeverityMapper
{
AWS_INSPECTOR2_API Severity GetSeverityForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForSeverity(Severity value);
} // namespace SeverityMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
