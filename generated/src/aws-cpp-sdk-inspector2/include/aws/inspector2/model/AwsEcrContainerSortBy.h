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
  enum class AwsEcrContainerSortBy
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    ALL
  };

namespace AwsEcrContainerSortByMapper
{
AWS_INSPECTOR2_API AwsEcrContainerSortBy GetAwsEcrContainerSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForAwsEcrContainerSortBy(AwsEcrContainerSortBy value);
} // namespace AwsEcrContainerSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
