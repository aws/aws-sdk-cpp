/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{
  enum class MatchOption
  {
    NOT_SET,
    EQUALS,
    ABSENT,
    STARTS_WITH,
    ENDS_WITH,
    CONTAINS,
    GREATER_THAN_OR_EQUAL,
    CASE_SENSITIVE,
    CASE_INSENSITIVE
  };

namespace MatchOptionMapper
{
AWS_BCMDASHBOARDS_API MatchOption GetMatchOptionForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForMatchOption(MatchOption value);
} // namespace MatchOptionMapper
} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
