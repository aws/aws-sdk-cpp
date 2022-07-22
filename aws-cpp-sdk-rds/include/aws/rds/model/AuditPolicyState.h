/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class AuditPolicyState
  {
    NOT_SET,
    locked,
    unlocked
  };

namespace AuditPolicyStateMapper
{
AWS_RDS_API AuditPolicyState GetAuditPolicyStateForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForAuditPolicyState(AuditPolicyState value);
} // namespace AuditPolicyStateMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
