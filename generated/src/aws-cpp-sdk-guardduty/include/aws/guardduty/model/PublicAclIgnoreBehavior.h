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
  enum class PublicAclIgnoreBehavior
  {
    NOT_SET,
    IGNORED,
    NOT_IGNORED
  };

namespace PublicAclIgnoreBehaviorMapper
{
AWS_GUARDDUTY_API PublicAclIgnoreBehavior GetPublicAclIgnoreBehaviorForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForPublicAclIgnoreBehavior(PublicAclIgnoreBehavior value);
} // namespace PublicAclIgnoreBehaviorMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
