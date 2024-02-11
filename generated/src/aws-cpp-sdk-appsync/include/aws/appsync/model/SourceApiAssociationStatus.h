/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class SourceApiAssociationStatus
  {
    NOT_SET,
    MERGE_SCHEDULED,
    MERGE_FAILED,
    MERGE_SUCCESS,
    MERGE_IN_PROGRESS,
    AUTO_MERGE_SCHEDULE_FAILED,
    DELETION_SCHEDULED,
    DELETION_IN_PROGRESS,
    DELETION_FAILED
  };

namespace SourceApiAssociationStatusMapper
{
AWS_APPSYNC_API SourceApiAssociationStatus GetSourceApiAssociationStatusForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForSourceApiAssociationStatus(SourceApiAssociationStatus value);
} // namespace SourceApiAssociationStatusMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
