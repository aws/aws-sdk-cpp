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
  enum class MatchOption
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS
  };

namespace MatchOptionMapper
{
AWS_BCMRECOMMENDEDACTIONS_API MatchOption GetMatchOptionForName(const Aws::String& name);

AWS_BCMRECOMMENDEDACTIONS_API Aws::String GetNameForMatchOption(MatchOption value);
} // namespace MatchOptionMapper
} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
