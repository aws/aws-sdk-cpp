/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class UserIdentityType
  {
    NOT_SET,
    AssumedRole,
    IAMUser,
    FederatedUser,
    Root,
    AWSAccount,
    AWSService
  };

namespace UserIdentityTypeMapper
{
AWS_MACIE2_API UserIdentityType GetUserIdentityTypeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForUserIdentityType(UserIdentityType value);
} // namespace UserIdentityTypeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
