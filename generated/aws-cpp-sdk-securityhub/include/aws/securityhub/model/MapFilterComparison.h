/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class MapFilterComparison
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS
  };

namespace MapFilterComparisonMapper
{
AWS_SECURITYHUB_API MapFilterComparison GetMapFilterComparisonForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForMapFilterComparison(MapFilterComparison value);
} // namespace MapFilterComparisonMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
