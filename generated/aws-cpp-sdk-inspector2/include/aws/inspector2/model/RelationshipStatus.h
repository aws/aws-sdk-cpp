/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class RelationshipStatus
  {
    NOT_SET,
    CREATED,
    INVITED,
    DISABLED,
    ENABLED,
    REMOVED,
    RESIGNED,
    DELETED,
    EMAIL_VERIFICATION_IN_PROGRESS,
    EMAIL_VERIFICATION_FAILED,
    REGION_DISABLED,
    ACCOUNT_SUSPENDED,
    CANNOT_CREATE_DETECTOR_IN_ORG_MASTER
  };

namespace RelationshipStatusMapper
{
AWS_INSPECTOR2_API RelationshipStatus GetRelationshipStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForRelationshipStatus(RelationshipStatus value);
} // namespace RelationshipStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
