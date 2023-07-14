/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{
  enum class ListNotificationRulesFilterName
  {
    NOT_SET,
    EVENT_TYPE_ID,
    CREATED_BY,
    RESOURCE,
    TARGET_ADDRESS
  };

namespace ListNotificationRulesFilterNameMapper
{
AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesFilterName GetListNotificationRulesFilterNameForName(const Aws::String& name);

AWS_CODESTARNOTIFICATIONS_API Aws::String GetNameForListNotificationRulesFilterName(ListNotificationRulesFilterName value);
} // namespace ListNotificationRulesFilterNameMapper
} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
