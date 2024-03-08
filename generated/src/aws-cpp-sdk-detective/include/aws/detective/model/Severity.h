/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
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
    CRITICAL
  };

namespace SeverityMapper
{
AWS_DETECTIVE_API Severity GetSeverityForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForSeverity(Severity value);
} // namespace SeverityMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
