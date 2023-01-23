/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class RepositorySortBy
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    ALL,
    AFFECTED_IMAGES
  };

namespace RepositorySortByMapper
{
AWS_INSPECTOR2_API RepositorySortBy GetRepositorySortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForRepositorySortBy(RepositorySortBy value);
} // namespace RepositorySortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
