/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{
  enum class GroupConfigurationStatus
  {
    NOT_SET,
    UPDATING,
    UPDATE_COMPLETE,
    UPDATE_FAILED
  };

namespace GroupConfigurationStatusMapper
{
AWS_RESOURCEGROUPS_API GroupConfigurationStatus GetGroupConfigurationStatusForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForGroupConfigurationStatus(GroupConfigurationStatus value);
} // namespace GroupConfigurationStatusMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
