/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{
  enum class FilterKey
  {
    NOT_SET,
    hasAccessTo
  };

namespace FilterKeyMapper
{
AWS_CODECATALYST_API FilterKey GetFilterKeyForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForFilterKey(FilterKey value);
} // namespace FilterKeyMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
