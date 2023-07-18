/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{
  enum class SsmTargetAccount
  {
    NOT_SET,
    RESPONSE_PLAN_OWNER_ACCOUNT,
    IMPACTED_ACCOUNT
  };

namespace SsmTargetAccountMapper
{
AWS_SSMINCIDENTS_API SsmTargetAccount GetSsmTargetAccountForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForSsmTargetAccount(SsmTargetAccount value);
} // namespace SsmTargetAccountMapper
} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
