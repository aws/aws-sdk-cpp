/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Account
{
namespace Model
{
  enum class AlternateContactType
  {
    NOT_SET,
    BILLING,
    OPERATIONS,
    SECURITY
  };

namespace AlternateContactTypeMapper
{
AWS_ACCOUNT_API AlternateContactType GetAlternateContactTypeForName(const Aws::String& name);

AWS_ACCOUNT_API Aws::String GetNameForAlternateContactType(AlternateContactType value);
} // namespace AlternateContactTypeMapper
} // namespace Model
} // namespace Account
} // namespace Aws
