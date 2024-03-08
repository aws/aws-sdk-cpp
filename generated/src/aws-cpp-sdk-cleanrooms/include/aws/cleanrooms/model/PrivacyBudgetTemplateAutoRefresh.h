/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class PrivacyBudgetTemplateAutoRefresh
  {
    NOT_SET,
    CALENDAR_MONTH,
    NONE
  };

namespace PrivacyBudgetTemplateAutoRefreshMapper
{
AWS_CLEANROOMS_API PrivacyBudgetTemplateAutoRefresh GetPrivacyBudgetTemplateAutoRefreshForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForPrivacyBudgetTemplateAutoRefresh(PrivacyBudgetTemplateAutoRefresh value);
} // namespace PrivacyBudgetTemplateAutoRefreshMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
