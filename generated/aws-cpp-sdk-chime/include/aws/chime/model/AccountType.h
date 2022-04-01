/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class AccountType
  {
    NOT_SET,
    Team,
    EnterpriseDirectory,
    EnterpriseLWA,
    EnterpriseOIDC
  };

namespace AccountTypeMapper
{
AWS_CHIME_API AccountType GetAccountTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForAccountType(AccountType value);
} // namespace AccountTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
