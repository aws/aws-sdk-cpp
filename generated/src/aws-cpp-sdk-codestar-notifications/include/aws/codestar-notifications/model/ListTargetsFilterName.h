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
  enum class ListTargetsFilterName
  {
    NOT_SET,
    TARGET_TYPE,
    TARGET_ADDRESS,
    TARGET_STATUS
  };

namespace ListTargetsFilterNameMapper
{
AWS_CODESTARNOTIFICATIONS_API ListTargetsFilterName GetListTargetsFilterNameForName(const Aws::String& name);

AWS_CODESTARNOTIFICATIONS_API Aws::String GetNameForListTargetsFilterName(ListTargetsFilterName value);
} // namespace ListTargetsFilterNameMapper
} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
