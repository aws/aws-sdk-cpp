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
  enum class Gender
  {
    NOT_SET,
    MALE,
    FEMALE,
    UNSPECIFIED
  };

namespace GenderMapper
{
AWS_CUSTOMERPROFILES_API Gender GetGenderForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForGender(Gender value);
} // namespace GenderMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
