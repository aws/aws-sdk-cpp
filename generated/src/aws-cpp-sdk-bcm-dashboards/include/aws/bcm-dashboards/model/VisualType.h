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
  enum class VisualType
  {
    NOT_SET,
    LINE,
    BAR,
    STACK
  };

namespace VisualTypeMapper
{
AWS_BCMDASHBOARDS_API VisualType GetVisualTypeForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForVisualType(VisualType value);
} // namespace VisualTypeMapper
} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
