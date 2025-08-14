/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMRecommendedActions
{
namespace Model
{
  enum class FilterName
  {
    NOT_SET,
    FEATURE,
    SEVERITY,
    TYPE
  };

namespace FilterNameMapper
{
AWS_BCMRECOMMENDEDACTIONS_API FilterName GetFilterNameForName(const Aws::String& name);

AWS_BCMRECOMMENDEDACTIONS_API Aws::String GetNameForFilterName(FilterName value);
} // namespace FilterNameMapper
} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
