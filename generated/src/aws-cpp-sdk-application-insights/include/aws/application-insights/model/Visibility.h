/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{
  enum class Visibility
  {
    NOT_SET,
    IGNORED,
    VISIBLE
  };

namespace VisibilityMapper
{
AWS_APPLICATIONINSIGHTS_API Visibility GetVisibilityForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForVisibility(Visibility value);
} // namespace VisibilityMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
