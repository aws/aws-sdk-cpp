/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class FeaturedResultsSetStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace FeaturedResultsSetStatusMapper
{
AWS_KENDRA_API FeaturedResultsSetStatus GetFeaturedResultsSetStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForFeaturedResultsSetStatus(FeaturedResultsSetStatus value);
} // namespace FeaturedResultsSetStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
