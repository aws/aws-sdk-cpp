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
  enum class PublicBucketRestrictBehavior
  {
    NOT_SET,
    RESTRICTED,
    NOT_RESTRICTED
  };

namespace PublicBucketRestrictBehaviorMapper
{
AWS_GUARDDUTY_API PublicBucketRestrictBehavior GetPublicBucketRestrictBehaviorForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForPublicBucketRestrictBehavior(PublicBucketRestrictBehavior value);
} // namespace PublicBucketRestrictBehaviorMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
