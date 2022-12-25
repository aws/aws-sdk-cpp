/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class OpsItemFilterKey
  {
    NOT_SET,
    Status,
    CreatedBy,
    Source,
    Priority,
    Title,
    OpsItemId,
    CreatedTime,
    LastModifiedTime,
    ActualStartTime,
    ActualEndTime,
    PlannedStartTime,
    PlannedEndTime,
    OperationalData,
    OperationalDataKey,
    OperationalDataValue,
    ResourceId,
    AutomationId,
    Category,
    Severity,
    OpsItemType,
    ChangeRequestByRequesterArn,
    ChangeRequestByRequesterName,
    ChangeRequestByApproverArn,
    ChangeRequestByApproverName,
    ChangeRequestByTemplate,
    ChangeRequestByTargetsResourceGroup,
    InsightByType,
    AccountId
  };

namespace OpsItemFilterKeyMapper
{
AWS_SSM_API OpsItemFilterKey GetOpsItemFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsItemFilterKey(OpsItemFilterKey value);
} // namespace OpsItemFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
