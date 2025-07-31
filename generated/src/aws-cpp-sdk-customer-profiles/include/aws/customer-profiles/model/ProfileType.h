/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class ProfileType
  {
    NOT_SET,
    ACCOUNT_PROFILE,
    PROFILE
  };

namespace ProfileTypeMapper
{
AWS_CUSTOMERPROFILES_API ProfileType GetProfileTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForProfileType(ProfileType value);
} // namespace ProfileTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
