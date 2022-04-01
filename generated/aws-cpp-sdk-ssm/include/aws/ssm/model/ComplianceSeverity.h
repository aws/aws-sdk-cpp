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
  enum class ComplianceSeverity
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    MEDIUM,
    LOW,
    INFORMATIONAL,
    UNSPECIFIED
  };

namespace ComplianceSeverityMapper
{
AWS_SSM_API ComplianceSeverity GetComplianceSeverityForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForComplianceSeverity(ComplianceSeverity value);
} // namespace ComplianceSeverityMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
