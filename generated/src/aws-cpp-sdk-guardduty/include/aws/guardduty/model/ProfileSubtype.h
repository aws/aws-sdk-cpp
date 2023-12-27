/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class ProfileSubtype
  {
    NOT_SET,
    FREQUENT,
    INFREQUENT,
    UNSEEN,
    RARE
  };

namespace ProfileSubtypeMapper
{
AWS_GUARDDUTY_API ProfileSubtype GetProfileSubtypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForProfileSubtype(ProfileSubtype value);
} // namespace ProfileSubtypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
