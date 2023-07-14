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
  enum class UserType
  {
    NOT_SET,
    PrivateUser,
    SharedDevice
  };

namespace UserTypeMapper
{
AWS_CHIME_API UserType GetUserTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForUserType(UserType value);
} // namespace UserTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
