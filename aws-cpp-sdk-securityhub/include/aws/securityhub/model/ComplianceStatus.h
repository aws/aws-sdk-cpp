/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class ComplianceStatus
  {
    NOT_SET,
    PASSED,
    WARNING,
    FAILED,
    NOT_AVAILABLE
  };

namespace ComplianceStatusMapper
{
AWS_SECURITYHUB_API ComplianceStatus GetComplianceStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForComplianceStatus(ComplianceStatus value);
} // namespace ComplianceStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
