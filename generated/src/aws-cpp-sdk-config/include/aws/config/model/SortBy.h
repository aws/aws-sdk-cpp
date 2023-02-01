/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class SortBy
  {
    NOT_SET,
    SCORE
  };

namespace SortByMapper
{
AWS_CONFIGSERVICE_API SortBy GetSortByForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForSortBy(SortBy value);
} // namespace SortByMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
