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
  enum class RelationshipStatus
  {
    NOT_SET,
    Enabled,
    Paused,
    Invited,
    Created,
    Removed,
    Resigned,
    EmailVerificationInProgress,
    EmailVerificationFailed,
    RegionDisabled,
    AccountSuspended
  };

namespace RelationshipStatusMapper
{
AWS_MACIE2_API RelationshipStatus GetRelationshipStatusForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForRelationshipStatus(RelationshipStatus value);
} // namespace RelationshipStatusMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
