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
  enum class ResolutionMethod
  {
    NOT_SET,
    MANUAL,
    AUTOMATIC,
    UNRESOLVED
  };

namespace ResolutionMethodMapper
{
AWS_APPLICATIONINSIGHTS_API ResolutionMethod GetResolutionMethodForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForResolutionMethod(ResolutionMethod value);
} // namespace ResolutionMethodMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
