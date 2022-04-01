/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CodeStarNotifications
{
namespace CodeStarNotificationsEndpoint
{
AWS_CODESTARNOTIFICATIONS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CodeStarNotificationsEndpoint
} // namespace CodeStarNotifications
} // namespace Aws
