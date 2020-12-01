/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/profile/Profile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Profile
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
AWS_PROFILE_API Gender GetGenderForName(const Aws::String& name);

AWS_PROFILE_API Aws::String GetNameForGender(Gender value);
} // namespace GenderMapper
} // namespace Model
} // namespace Profile
} // namespace Aws
