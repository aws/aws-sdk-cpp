/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ComplianceType
  {
    NOT_SET,
    COMPLIANT,
    NON_COMPLIANT,
    NOT_APPLICABLE,
    INSUFFICIENT_DATA
  };

namespace ComplianceTypeMapper
{
AWS_CONFIGSERVICE_API ComplianceType GetComplianceTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForComplianceType(ComplianceType value);
} // namespace ComplianceTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
