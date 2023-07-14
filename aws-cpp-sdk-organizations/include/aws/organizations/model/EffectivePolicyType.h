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
  enum class EffectivePolicyType
  {
    NOT_SET,
    TAG_POLICY,
    BACKUP_POLICY,
    AISERVICES_OPT_OUT_POLICY
  };

namespace EffectivePolicyTypeMapper
{
AWS_ORGANIZATIONS_API EffectivePolicyType GetEffectivePolicyTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForEffectivePolicyType(EffectivePolicyType value);
} // namespace EffectivePolicyTypeMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
