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
  enum class ProfileTypeDimensionType
  {
    NOT_SET,
    INCLUSIVE,
    EXCLUSIVE
  };

namespace ProfileTypeDimensionTypeMapper
{
AWS_CUSTOMERPROFILES_API ProfileTypeDimensionType GetProfileTypeDimensionTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForProfileTypeDimensionType(ProfileTypeDimensionType value);
} // namespace ProfileTypeDimensionTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
