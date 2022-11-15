/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class ListRecommendationsFilterKey
  {
    NOT_SET,
    TYPE,
    IMPACT,
    STATUS,
    RESOURCE_ARN
  };

namespace ListRecommendationsFilterKeyMapper
{
AWS_SESV2_API ListRecommendationsFilterKey GetListRecommendationsFilterKeyForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForListRecommendationsFilterKey(ListRecommendationsFilterKey value);
} // namespace ListRecommendationsFilterKeyMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
