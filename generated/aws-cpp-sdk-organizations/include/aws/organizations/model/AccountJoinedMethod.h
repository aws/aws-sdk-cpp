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
  enum class AccountJoinedMethod
  {
    NOT_SET,
    INVITED,
    CREATED
  };

namespace AccountJoinedMethodMapper
{
AWS_ORGANIZATIONS_API AccountJoinedMethod GetAccountJoinedMethodForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForAccountJoinedMethod(AccountJoinedMethod value);
} // namespace AccountJoinedMethodMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
