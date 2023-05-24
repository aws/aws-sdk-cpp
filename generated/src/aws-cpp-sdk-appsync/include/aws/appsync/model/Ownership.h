/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class Ownership
  {
    NOT_SET,
    CURRENT_ACCOUNT,
    OTHER_ACCOUNTS
  };

namespace OwnershipMapper
{
AWS_APPSYNC_API Ownership GetOwnershipForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForOwnership(Ownership value);
} // namespace OwnershipMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
