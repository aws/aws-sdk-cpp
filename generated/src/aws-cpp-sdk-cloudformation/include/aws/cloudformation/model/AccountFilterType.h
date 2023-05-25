/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class AccountFilterType
  {
    NOT_SET,
    NONE,
    INTERSECTION,
    DIFFERENCE,
    UNION
  };

namespace AccountFilterTypeMapper
{
AWS_CLOUDFORMATION_API AccountFilterType GetAccountFilterTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForAccountFilterType(AccountFilterType value);
} // namespace AccountFilterTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
