/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class PolicyComplianceStatusType
  {
    NOT_SET,
    COMPLIANT,
    NON_COMPLIANT
  };

namespace PolicyComplianceStatusTypeMapper
{
AWS_FMS_API PolicyComplianceStatusType GetPolicyComplianceStatusTypeForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForPolicyComplianceStatusType(PolicyComplianceStatusType value);
} // namespace PolicyComplianceStatusTypeMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
