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
  enum class ListEventTypesFilterName
  {
    NOT_SET,
    RESOURCE_TYPE,
    SERVICE_NAME
  };

namespace ListEventTypesFilterNameMapper
{
AWS_CODESTARNOTIFICATIONS_API ListEventTypesFilterName GetListEventTypesFilterNameForName(const Aws::String& name);

AWS_CODESTARNOTIFICATIONS_API Aws::String GetNameForListEventTypesFilterName(ListEventTypesFilterName value);
} // namespace ListEventTypesFilterNameMapper
} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
