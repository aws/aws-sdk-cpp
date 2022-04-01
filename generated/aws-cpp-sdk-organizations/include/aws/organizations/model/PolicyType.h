/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class PolicyType
  {
    NOT_SET,
    SERVICE_CONTROL_POLICY,
    TAG_POLICY,
    BACKUP_POLICY,
    AISERVICES_OPT_OUT_POLICY
  };

namespace PolicyTypeMapper
{
AWS_ORGANIZATIONS_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForPolicyType(PolicyType value);
} // namespace PolicyTypeMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
